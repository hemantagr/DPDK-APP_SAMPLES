#ifndef __CONFIG_H__
#define __CONFIG_H__

#include <stdint.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <inttypes.h>

#include <rte_config.h>
#include <rte_branch_prediction.h>
#include <rte_debug.h>
#include <rte_eal.h>
#include <rte_common.h>
#include <rte_cfgfile.h>
#include <rte_mempool.h>
#include <rte_malloc.h>
#include <rte_mbuf.h>
#include <rte_memcpy.h>
#include <rte_lcore.h>
#include <rte_ethdev.h>
#include <rte_errno.h>
#include <rte_ip.h>
#include <rte_udp.h>
#include <rte_ethdev.h>

/* D E F I N E S */   
#define MAX_NUMANODE   (4)
#define MAX_LCORECOUNT (32)
#define MAX_INTFCOUNT  (4)

#define NB_MBUF   (8192 * 2)
#define MBUF_SIZE (2048 + sizeof(struct rte_mbuf) + RTE_PKTMBUF_HEADROOM)

#define STRCPY(x, y) (strpy((char *)x, (const char *)y))
#define STRCMP(x, y) (strcmp((const char *)x, (const char *)y))

#endif /*__CONFIG_H__*/

