#include<linux/module.h>
#include<linux/kernel.h>
#include<linux/init.h>

MODULE_AUTHOR("P K Navin Shrinivas");
MODULE_LICENSE("GNU General Public Lisence v3");
MODULE_DESCRIPTION("[YOUR_ID] Task 01 results");

static int __init my_init(void)
{
	printk(KERN_INFO "Hello World!");
	return 0;
}

static void __exit my_exit(void)
{
	printk(KERN_INFO "Exiting [YOUR_ID] Task 01 results");
}

module_init(my_init);
module_exit(my_exit);
