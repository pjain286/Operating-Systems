/* 
Author - Pratik Jain

Description - A simple kernel module to print a message
	      on insterting and removing a kernel module
*/

#include <linux/init.h>
#include <linux/kernel.h>
#include <linux/module.h>

// This function is invoked on inserting module
int simple_init(void)
{
	/* printk prints the message in kernel logs. You can look at them by using 
	 dmesg command in shell
	*/
	printk(KERN_INFO "Now Loading the module\n");
	return 0;
}

// This function is called on removing module
void simple_remove(void)
{
	printk(KERN_INFO "Module is removed now\n");
}

// These are the system calls to init and remove a module
module_init(simple_init);
module_exit(simple_remove);

// Additonal information for module
//MODULE_LICENCE("GPL");
MODULE_DESCRIPTION("Simple Module");
MODULE_AUTHOR("SGG");


