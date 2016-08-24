.global _exit
.global _fork
.global _read
.global _write
.global _open
.global _close
.global _unlink
.global _chdir

.global _mlock
.global _mkdir
.global _rmdir
.global _unmount

.global _chmod
.global _chown
.global _sync
.global _kill
.global _dup
.global _symlink

.global _chroot
.global _vfork
.global _reboot

.global _dup2
.global _mount
.global _stat
.global _pread
.global _pwrite

.global _access
.global _wait4
.global _execve
.global __sysctl


_exit:
	mov r12, #0x1
	swi #0x80
	bx  lr

_fork:
	mov r12, #0x2
	swi #0x80
	bx  lr

_read:
	mov r12, #0x3
	swi #0x80
	bx lr

_write:
	mov r12, #0x4
	swi #0x80
	bx  lr

_open:
	mov r12, #0x5
	swi #0x80
	bx lr

_close:
	mov r12, #0x6
	swi #0x80
	bx lr

_unlink:
	mov r12, #0xA
	swi #0x80
	bx  lr

_chdir:
	mov r12, #0xC
	swi #0x80
	bx  lr

_chmod:
	mov r12, #0xF
	swi #0x80
	bx  lr

_chown:
	mov r12, #0x10
	swi #0x80
	bx  lr
	
_sync:
	mov r12, #0x24
	swi #0x80
	bx  lr

_kill:
	mov r12, #0x25
	swi #0x80
	bx  lr

_mlock:
	mov r12, #0xCB
	swi #0x80
	bx  lr

_mkdir:
	mov r12, #0x88
	swi #0x80
	bx  lr

_rmdir:
	mov r12, #0x89
	swi #0x80
	bx  lr

_unmount:
	mov r12, #0x9F
	swi #0x80
	bx  lr

_dup2:
	mov r12, #0x5A
	swi #0x80
	bx  lr

_stat:
	mov r12, #0xBC
	swi #0x80
	bx  lr

_mount:
	mov r12, #0xA7
	swi #0x80
	bx  lr

_pread:
	mov r12, #0x99
	swi #0x80
	bx  lr

_pwrite:
	mov r12, #0x9A
	swi #0x80
	bx  lr

_dup:
	mov r12, #0x29
	swi #0x80
	bx  lr

_symlink:
	mov r12, #0x39
	swi #0x80
	bx  lr

_chroot:
	mov r12, #0x3D
	swi #0x80
	bx  lr

_vfork:
	eor r0, r0, r0
	mov r12, #0x42
	swi #0x80
	cmp r1, #0x0
	beq vfork_parent
	mov r0, #0x0
vfork_parent:
	bx  lr

_reboot:
	mov r12, #0x37
	swi #0x80
	bx  lr

_access:
	mov r12, #0x21
	swi #0x80
	bx  lr

_wait4:
	mov r12, #0x7
	swi #0x80
	bx  lr
	
_execve:
	mov r12, #0x3B
	swi #0x80
	bx  lr

__sysctl:
	mov r12, #0xCA
	swi #0x80
	bx  lr
