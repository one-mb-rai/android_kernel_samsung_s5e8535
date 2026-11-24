#ifndef __KSU_H_SUS_SU
#define __KSU_H_SUS_SU

#ifdef CONFIG_KSU
#include "../../drivers/kernelsu/core_hook.h"
#endif

int sus_su_fifo_init(int *maj_dev_num, char *drv_path);
int sus_su_fifo_exit(int *maj_dev_num, char *drv_path);

#endif
