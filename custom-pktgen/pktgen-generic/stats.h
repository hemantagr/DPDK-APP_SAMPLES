#ifndef __STATS_H_
#define __STATS_H_

#include <inttypes.h>
#include <signal.h>

#include "config.h"
#include "node.h"

#include <rte_timer.h>
#include <rte_cycles.h>

#define STATS_CLR_SCREEN   printf("\033[2J")
//#define STATS_ROW(x)       printf("\033[x;1H")
//#define STATS_ROW_COL(x,y) printf("\033[x;yH")
#define STATS_ROW(x)       "\033[x;1H"
#define STATS_ROW_COL(x,y) "\033[x;yH"
#define STATS_POS_OFFSET   2

#define RESET   "\033[0m"
#define BLACK   "\033[30m"      /* Black */
#define RED     "\033[31m"      /* Red */
#define GREEN   "\033[32m"      /* Green */
#define YELLOW  "\033[33m"      /* Yellow */
#define BLUE    "\033[34m"      /* Blue */
#define MAGENTA "\033[35m"      /* Magenta */
#define CYAN    "\033[36m"      /* Cyan */
#define WHITE   "\033[37m"      /* White */
#define BOLDBLACK   "\033[1m\033[30m"      /* Bold Black */
#define BOLDRED     "\033[1m\033[31m"      /* Bold Red */
#define BOLDGREEN   "\033[1m\033[32m"      /* Bold Green */
#define BOLDYELLOW  "\033[1m\033[33m"      /* Bold Yellow */
#define BOLDBLUE    "\033[1m\033[34m"      /* Bold Blue */
#define BOLDMAGENTA "\033[1m\033[35m"      /* Bold Magenta */
#define BOLDCYAN    "\033[1m\033[36m"      /* Bold Cyan */
#define BOLDWHITE   "\033[1m\033[37m"      /* Bold White */

typedef enum {
    LINK_SPEED = 4,
    NUMA_SOCKET,
    LINK_SPEED_STATE,
    PKTS_PER_SEC_RX,
    PKTS_PER_SEC_TX,
    MB_RX,
    MB_TX,
    PKT_INFO,
    DST_MAC,
    SRC_MAC,
    BS_SRC_IP,
    BS_DST_IP,
    GTP_TYPE_VER,
    GTP_TEID,
    UE_SRC_IP,
    UE_DST_IP,
    UE_IP_PROTO,
    GTPC_V1_TX_IPV4,
    GTPC_V1_TX_IPV6,
    GTPC_V2_TX_IPV4,
    GTPC_V2_TX_IPV6,
    GTPC_V1_RX_IPV4,
    GTPC_V1_RX_IPV6,
    GTPC_V2_RX_IPV4,
    GTPC_V2_RX_IPV6,
    GTPU_TX_IPV4,
    GTPU_TX_IPV6,
    GTPU_RX_IPV4,
    GTPU_RX_IPV6,
    SURICATA_QUEUE_RX,
    SURICATA_QUEUE_TX,
} statsDisplayPos;

typedef struct pkt_stats_s {
    uint64_t tx_arp;
    uint64_t tx_icmp4;
    uint64_t tx_icmp6;
    uint64_t tx_ipv4;
    uint64_t tx_ipv6;
    uint64_t tx_tcp4;
    uint64_t tx_tcp6;
    uint64_t tx_udp4;
    uint64_t tx_udp6;

    uint64_t txPkts;
    uint64_t txBytes;
    uint64_t txErr;
} __attribute__((__packed__)) pkt_stats_t; /* per interface */

void get_link_stats(__attribute__((unused)) struct rte_timer *t, 
                    __attribute__((unused)) void *arg);
void get_process_stats(__attribute__((unused)) struct rte_timer *t, 
                       __attribute__((unused)) void *arg);

void launchNumaThread(void);

void set_stats_timer(void);
void show_static_display(void);
void sigExtraStats(int signo);
void sigConfig(int signo);

#endif /* __STATS_H__ */

