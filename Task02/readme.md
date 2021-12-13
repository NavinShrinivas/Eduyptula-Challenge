# Task02 Compiling a custom kernel


as mentioned by the "SCRIPT" sitting a manually setting all kernel configs seems obvsioudly stupid , supposedly there is a 'make localmodconfig' command that autmatically gets the
config from host running kernel and preps your kernel tree, but instead copied the .config
"FILE" yea , not a folder a FILE from /usr/src/linux , thats where usually the copy of the
linux tree of the currently running kernel will be present.

edit : No, I used localmodconfig eventually cus copying my distros config file was also 
compiling some unecessary stuff [Intel shit for and amd machine],
makes sense cus the distro kernel must boot on all devices.


While builing I ran into one main problem in kernel/khearders... , it was pretty evident it
wasnt the error due to using config from another version of the kernel , some smart googling
showed me that 'cpio' package simply fixed that error , and it indeed did so!

Also, I plan on booting this kernel on bare metal!!!!


Now now , after building , we get the kernel image in kernel-tree/arch/x86/boot/ named
bzImage. We need to generate a initramfs for this image, for this i used : 
after moving to linux tree root :

```
cp ./linux/arch/x86/boot/bzImage ./
mkinitcpio -g ./intramfs-custom.img --kernel ~/github/Eduyptula-Challenge/Task02/bzImage
```

this gets both our needed files bzImage and initramfs-custom.img to kernel root.To boot this we need to first mount all the compiled modules
```
sudo make modules_install
```

now time to boot , If you are doing this challenge you should know how to generate your grub
config files.Do that , but only after placing both your bzImage and initramfs in 
/boot in your running host.

Now in my case grub did work , but it was by default providing amd-ucode as the initramfs
and that refused to  boot, so i went down to .cfg file and edited it.Also my machine has 
nvidia card [FOR HDMI :,(] , I wanted to only boot the bare kernel so i removed any special
blacklisting I had done to nouveau from grub.cgf


With that , I have succesfully compiled my first linux kernel
i have also but the bzimage and initramfs on github :) , altho this might not boot 
[wont boot in intel 100%] in your system as i used localmodconfig which sets the config 
depending on modules mounted on my current system.

But if you are doing this challenge you are to compile a kernel yourself , not use
a precompiled one!
