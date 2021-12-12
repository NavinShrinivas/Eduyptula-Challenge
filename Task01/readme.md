Before we can start writing a kernel module , we need fuirst see some commands wrt to 
kernel 

lsmod : List all mounted modules
insmod : inserted modules 
modinfo : the info in the module 
rmmod : to remove kernel modules


Ok ,and anything specific to kernel ,we need to install linux kernel header 
and that the headers of the specific kernel version running on metal
on arch : 
    
    sudo pacman -S linux-headers
    yay -S base-devel



from linux/documentation/modules.rst :
```
	The command to build an external module is::

		$ make -C <path_to_kernel_src> M=$PWD

	The kbuild system knows that an external module is being built
	due to the "M=<dir>" option given in the command.

	To build against the running kernel use::

		$ make -C /lib/modules/`uname -r`/build M=$PWD

	Then to install the module(s) just built, add the target
	"modules_install" to the command::

		$ make -C /lib/modules/`uname -r`/build M=$PWD modules_install
```
