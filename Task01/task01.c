#include <linux/init.h>   //for __init and __exit macros
#include <linux/kernel.h> //for kernel specific functions
#include <linux/module.h> //for all modules

MODULE_AUTHOR("P K Navin Shrinivas");
MODULE_DESCRIPTION("Task01: Module to print Hello World");
MODULE_LICENSE("GPL");
/*
 *In older version of kernel, we had to define init and exit functions in the module."
 *This needed us to have fixed function names 'init_module' and 'exit_module' 
 *Now, we can define them in the module_init and module_exit macros.
 */

static int __init helloworld(void) { //name can be anything
  printk(KERN_INFO "Hello world!By Navin's module \n"); // logs it to KERN_INFO buffr , printk is
                             // from kernel.h
                             // unlike simply printff , printk can write
                             // to variuos places depending on the
                             // pripority of thementioned buffer,
                             // "KERN_ALERT" is one of the high prioprti
  return 0;                  // will return 0 only on success
  //will return -ve number on failure
}

static void __exit exitworld(void)
{     
    printk(KERN_INFO "Module Clean up,from Navin's module \n"); 
    //usually this is done to revert any changes
    //our module might have made to the kernel
}
module_init(helloworld);
module_exit(exitworld);
