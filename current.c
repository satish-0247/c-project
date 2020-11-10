#include<linux/module.h>
#include<linux/init.h>
#include<linux/sched.h>
#include<asm/current.h>

/* mm_types.h line no:384
 * sched.h  line no:744*/


int mod_init(void)
{
pr_info("caller process name:%s\n",current->comm);
pr_info("caller process pid:%d\n",current->pid);
pr_info("caller process start add:%p\n",current->stack);
pr_info("caller process base add of the process page table:%p\n",current->mm->pgd);
return 0;
}

void mod_exit(void)
{
pr_info("caller process name:%s\n",current->comm);
pr_info("caller process pid:%d\n",current->pid);
pr_info("caller process start add:%p\n",current->stack);
pr_info("caller process base add of the process page table:%p\n",current->mm->pgd);
}

module_init(mod_init);
module_exit(mod_exit);

MODULE_AUTHOR("VEDA");
MODULE_DESCRIPTION("Character Device Driver - Test");
MODULE_LICENSE("GPL");
