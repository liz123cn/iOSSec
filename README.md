1、历史上几个重要的iOS系统的远程代码注入漏洞：
	a:TIF图像处理漏洞，被发现于早期版本iOS系统应用软件所使用的一个老的库中。导致攻击者通过Safari加载一个资源文件时，加载和执行代码。这个漏洞还可以用于攻击Mail软件。这个漏洞还被用于帮助用户越狱自己的设备。http://www.jailbreakme.com。
	b:SSH蠕虫，通过运行SSH并没有更改默认密码的越狱设备广泛传播。该蠕虫会将每一台设备变为AT&T网络中的一个节点，从而进一步感染其他设备。值得一提的是，这个蠕虫已经被加入到metasploit的框架工具中了，因此任何人都可以通过metasploit将其变成从iOS设备中窃取隐私数据的工具。
	c:09年，CharlieMiller，DefCon 一条畸形短信远程执行任意代码，独特之处在于可以主动推送给设备，而不需要用户自己访问一个url或者打开一封邮件。
	d:11年，PDF处理漏洞，当Safari浏览PDF文件或者从Mail程序的附件中打开PDF文件时，向iOS设备中加载并执行代码。这个漏洞利用被发布在http://www.jailbreakme.com上。
	e:11年，CharlieMiller， Nitro JIT编译器实现方式的漏洞。导致通过一个看似正常软件从恶意服务器下载和执行恶意、未签名的代码，并可能获得权限提升。

2、越狱一台设备的好处在于：
	使用大量有用的诊断和开发工具来监控行为、调试应用、渗透测试以及模拟一系列软件。
	广泛使用的工具：
	  a：UNIX活动监控工具，用于监控应用软件的状态和活动状况。
		ps：显示进程状态；
		nice&renice：为应用软件分配更高或更低的优先级；
		lsof：列举应用软件打开的所有文件、使用的ip地址、打开的sockets以及他们的状态；
		tcpdump：强大的命令行数据包分析器，可以捕获应用软件发出和接收到的网络流量；
		ifconfig：一个可以查看和重新配置网咯接口的工具；
		route：可以重定向部分或者全部网络流量，使其转用网络中的其他网关；
		netstat：一个查看网络统计数据、打开端口、连接状态的工具；
		sysctl：一个查看和改变内核状态变量的工具；
	  b：调试和分析工具
		otool：对象文件显示工具，提供一系列机制来查看对象文件和动态库文件的信息。可以用于判断内存偏移值、段大小、目标加密等信息，枚举动态加载依赖性等。结合gdb解密并分析应用软件。甚至可以反汇编应用软件的部分或者全部；
		nm：查看符号表的工具，可以查看包括函数和方法名，以及他们的加载地址。这些信息可以用于在使用调试器时在内存中定位代码；
		gdb&gprof：在设备中直接使用gdb调试器可以获得调试设备中运行的所有进程的能力、快速分离、重新附着到一个进程上的能力，以及没有桌面开发环境时调试的能力。攻击者可以在设备上加载他们自己的gdb副本，轻松完成转储内存货执行其他任务。gprof用于对设备上的任何应用软件进行性能优化，并获得比Xcode更多的性能优化。
	  c：开发者工具
		iOS开放工具链、ARM架构的编译器、ldid——链接识别编辑器（用于给二进制代码签名和给应用软件授权）；
		make、patch、bison等；
		Cycript：JavaScript的一个实现，并且可以和OC类和目标进行交互。像gdb那样直接附着在一个进程上，修改正在运行中的应用软件的状态。

3、越狱
	多种流行越狱工具：redsn0w、sn0wbreeze、blackra1n、greenpois0n  国内：盘古；
	当前最主要、良好维护的工具包括由iPhoneDev团队开发的诸多工具，主要是PwnageTool和redsn0w；
	访问http://blog.iphone-dev.org下载redsn0w；

4、DFU模式
	一种低级别诊断模式，也就是所谓的设备故障恢复工具或者设备固件升级工具。由于许多设备的引导ROM存在一系列漏洞，可以在这种低级模式上通过部署漏洞利用代码来绕过通常在设备中设置的安全检查，从而允许非苹果的代码从内存里引导起来。
	GeorgeHotz，limera1n；
	如何进入DFU模式：将设备关机--》当设备关闭后，立即同时按住电源键和home键大约10秒--》释放电源键，但继续按住home键10秒--》设备成功进入DFU模式--》屏幕黑屏，设备看起来是关机状态，但却可以通过usb成功建立连接。
	为什么要关闭设备：a)、文件系统被完全卸载掉了，因此系统引导时不会有文件系统的检查；b)、内存转换层（FTL）也被彻底关闭了，防止了设备下一次重启时需要检查或者重构它的元数据。

5、不完美越狱和完美越狱
	完美越狱是指设备可以重启并依然保持越狱状态。设备中安装的任何未授权代码或者恶意代码仍然可以运行，直到通过iTunes恢复设备固件。
	不完美越狱是指设备重启时需要重新连接到计算机来重新引导到越狱状态。所有安装到不完美越狱设备中的应用会保持不变，但设备重启后它们不会运行起来，除非使用一个越狱软件来重启它，使得苹果的安全机制再次失效。

6、学会使用redsn0w来引导自己的代码，而不是redsn0w的越狱代码。

7、三个位置
	a)、llvm-gcc编译器的位置：/Applications/Xcode.app/Contents/Developer/Platforms/iPhoneOS.platform/Developer/usr/bin  （在这个位置下面并没有找到llvm-gcc编译器，苹果官方推荐使用clang指令来编译源代码）
	b)、Xcode支持的iOS SDK：/Applications/Xcode.app/Contents/Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS9.3.sdk
	c)、一份完整的ARM体系结构参考手册：书中给出的路径不存在
	开始创建源文件，并编译执行。

8、clang用来编译源代码+ldid重新签名+launchd开启守护进程

9、360就是屌！http://bbs.feng.com/read-htm-tid-3979777.html
