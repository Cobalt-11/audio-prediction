#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/init.h>

static int __init hello_init(void) {
    pr_alert("Modul ucitan! (vexpress-a9)\n");
    return 0;
}

static void __exit hello_exit(void) {
    pr_alert("Modul uklonjen! (vexpress-a9)\n");
}

module_init(hello_init);
module_exit(hello_exit);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Student");
MODULE_DESCRIPTION("Hello modul za vexpress-a9");
MODULE_VERSION("1.0");
