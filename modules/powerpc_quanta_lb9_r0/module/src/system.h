/************************************************************
 * <bsn.cl fy=2014 v=onl>
 * </bsn.cl>
 ************************************************************
 *
 *
 *
 ***********************************************************/
#ifndef __POWERPC_QUANTA_LB9_R0_SYSTEM_H__
#define __POWERPC_QUANTA_LB9_R0_SYSTEM_H__

int powerpc_quanta_lb9_r0_system_airflow_get(void);

char* powerpc_quanta_lb9_r0_system_hwmon_dir(void);

char* powerpc_quanta_lb8_r9_system_psu_dir(int pid);

#endif /* __POWERPC_QUANTA_LB9_R0_SYSTEM_H__ */
