/*----------------------------------------------------------------------
 * This file is generated by mk_parser.py.
 *----------------------------------------------------------------------*/
#ifndef __CPARSER_TREE_H__
#define __CPARSER_TREE_H__

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

extern cparser_node_t cparser_root;

cparser_result_t cparser_cmd_cnfg(cparser_context_t *context);
cparser_result_t cparser_cmd_cnfg_rule(cparser_context_t *context);
cparser_result_t cparser_cmd_rule_add_action_version_proto_sip_sprt_direction_dip_dprt(cparser_context_t *context,
    char **action_ptr,
    char **version_ptr,
    char **proto_ptr,
    uint32_t *sip_ptr,
    uint32_t *sprt_ptr,
    char **direction_ptr,
    uint32_t *dip_ptr,
    uint32_t *dprt_ptr);
cparser_result_t cparser_cmd_rule_lst(cparser_context_t *context);
cparser_result_t cparser_cmd_lst_tcp(cparser_context_t *context);
cparser_result_t cparser_cmd_lst_udp(cparser_context_t *context);
cparser_result_t cparser_cmd_lst_ssl(cparser_context_t *context);
cparser_result_t cparser_cmd_lst_icmp(cparser_context_t *context);
cparser_result_t cparser_cmd_lst_http(cparser_context_t *context);
cparser_result_t cparser_cmd_lst_tls(cparser_context_t *context);
cparser_result_t cparser_cmd_lst_gre(cparser_context_t *context);
cparser_result_t cparser_cmd_lst_gtp(cparser_context_t *context);
cparser_result_t cparser_cmd_lst_ftp(cparser_context_t *context);
cparser_result_t cparser_cmd_lst_sctp(cparser_context_t *context);
cparser_result_t cparser_cmd_lst_smtp(cparser_context_t *context);
cparser_result_t cparser_cmd_lst_dns(cparser_context_t *context);
cparser_result_t cparser_cmd_lst_smb(cparser_context_t *context);
cparser_result_t cparser_cmd_lst_smb2(cparser_context_t *context);
cparser_result_t cparser_cmd_lst_dcerpc(cparser_context_t *context);
cparser_result_t cparser_cmd_lst_clr(cparser_context_t *context);
cparser_result_t cparser_cmd_lst_exit(cparser_context_t *context);
cparser_result_t cparser_cmd_rule_del_version_proto_rule_num(cparser_context_t *context,
    char **version_ptr,
    char **proto_ptr,
    uint32_t *rule_num_ptr);
cparser_result_t cparser_cmd_rule_clr(cparser_context_t *context);
cparser_result_t cparser_cmd_rule_exit(cparser_context_t *context);
cparser_result_t cparser_cmd_cnfg_mode_mode(cparser_context_t *context,
    char **mode_ptr);
cparser_result_t cparser_cmd_cnfg_port_ingress_port(cparser_context_t *context,
    char **ingress_ptr,
    uint32_t *port_ptr);
cparser_result_t cparser_cmd_cnfg_pact(cparser_context_t *context);
cparser_result_t cparser_cmd_pact_port1(cparser_context_t *context);
cparser_result_t cparser_cmd_port1_fdrp_fdrp(cparser_context_t *context,
    uint32_t *fdrp_ptr);
cparser_result_t cparser_cmd_port1_drop_drp(cparser_context_t *context,
    uint32_t *drp_ptr);
cparser_result_t cparser_cmd_port1_acl_acl(cparser_context_t *context,
    uint32_t *acl_ptr);
cparser_result_t cparser_cmd_port1_st_st(cparser_context_t *context,
    uint32_t *st_ptr);
cparser_result_t cparser_cmd_port1_clr(cparser_context_t *context);
cparser_result_t cparser_cmd_port1_exit(cparser_context_t *context);
cparser_result_t cparser_cmd_pact_port2(cparser_context_t *context);
cparser_result_t cparser_cmd_port2_fdrp_fdrp(cparser_context_t *context,
    uint32_t *fdrp_ptr);
cparser_result_t cparser_cmd_port2_drop_drp(cparser_context_t *context,
    uint32_t *drp_ptr);
cparser_result_t cparser_cmd_port2_acl_acl(cparser_context_t *context,
    uint32_t *acl_ptr);
cparser_result_t cparser_cmd_port2_st_st(cparser_context_t *context,
    uint32_t *st_ptr);
cparser_result_t cparser_cmd_port2_clr(cparser_context_t *context);
cparser_result_t cparser_cmd_port2_exit(cparser_context_t *context);
cparser_result_t cparser_cmd_pact_port3(cparser_context_t *context);
cparser_result_t cparser_cmd_port3_fdrp_fdrp(cparser_context_t *context,
    uint32_t *fdrp_ptr);
cparser_result_t cparser_cmd_port3_drop_drp(cparser_context_t *context,
    uint32_t *drp_ptr);
cparser_result_t cparser_cmd_port3_acl_acl(cparser_context_t *context,
    uint32_t *acl_ptr);
cparser_result_t cparser_cmd_port3_st_st(cparser_context_t *context,
    uint32_t *st_ptr);
cparser_result_t cparser_cmd_port3_clr(cparser_context_t *context);
cparser_result_t cparser_cmd_port3_exit(cparser_context_t *context);
cparser_result_t cparser_cmd_pact_port4(cparser_context_t *context);
cparser_result_t cparser_cmd_port4_fdrp_fdrp(cparser_context_t *context,
    uint32_t *fdrp_ptr);
cparser_result_t cparser_cmd_port4_drop_drp(cparser_context_t *context,
    uint32_t *drp_ptr);
cparser_result_t cparser_cmd_port4_acl_acl(cparser_context_t *context,
    uint32_t *acl_ptr);
cparser_result_t cparser_cmd_port4_st_st(cparser_context_t *context,
    uint32_t *st_ptr);
cparser_result_t cparser_cmd_port4_clr(cparser_context_t *context);
cparser_result_t cparser_cmd_port4_exit(cparser_context_t *context);
cparser_result_t cparser_cmd_pact_clr(cparser_context_t *context);
cparser_result_t cparser_cmd_pact_exit(cparser_context_t *context);
cparser_result_t cparser_cmd_cnfg_clr(cparser_context_t *context);
cparser_result_t cparser_cmd_cnfg_exit(cparser_context_t *context);
cparser_result_t cparser_cmd_show(cparser_context_t *context);
cparser_result_t cparser_cmd_show_rule(cparser_context_t *context);
cparser_result_t cparser_cmd_rule1_info(cparser_context_t *context);
cparser_result_t cparser_cmd_rule1_dtls(cparser_context_t *context);
cparser_result_t cparser_cmd_details_tcp(cparser_context_t *context);
cparser_result_t cparser_cmd_details_udp(cparser_context_t *context);
cparser_result_t cparser_cmd_details_icmp(cparser_context_t *context);
cparser_result_t cparser_cmd_details_http(cparser_context_t *context);
cparser_result_t cparser_cmd_details_ssl(cparser_context_t *context);
cparser_result_t cparser_cmd_details_tls(cparser_context_t *context);
cparser_result_t cparser_cmd_details_gre(cparser_context_t *context);
cparser_result_t cparser_cmd_details_gtp(cparser_context_t *context);
cparser_result_t cparser_cmd_details_ftp(cparser_context_t *context);
cparser_result_t cparser_cmd_details_sctp(cparser_context_t *context);
cparser_result_t cparser_cmd_details_smtp(cparser_context_t *context);
cparser_result_t cparser_cmd_details_dns(cparser_context_t *context);
cparser_result_t cparser_cmd_details_smb(cparser_context_t *context);
cparser_result_t cparser_cmd_details_smb2(cparser_context_t *context);
cparser_result_t cparser_cmd_details_dcerpc(cparser_context_t *context);
cparser_result_t cparser_cmd_details_clr(cparser_context_t *context);
cparser_result_t cparser_cmd_details_exit(cparser_context_t *context);
cparser_result_t cparser_cmd_rule1_clr(cparser_context_t *context);
cparser_result_t cparser_cmd_rule1_exit(cparser_context_t *context);
cparser_result_t cparser_cmd_show_mode(cparser_context_t *context);
cparser_result_t cparser_cmd_show_port(cparser_context_t *context);
cparser_result_t cparser_cmd_show_pact(cparser_context_t *context);
cparser_result_t cparser_cmd_show_intf(cparser_context_t *context);
cparser_result_t cparser_cmd_intf_info_intf(cparser_context_t *context,
    uint32_t *intf_ptr);
cparser_result_t cparser_cmd_intf_stat_num(cparser_context_t *context,
    uint32_t *num_ptr);
cparser_result_t cparser_cmd_intf_clr(cparser_context_t *context);
cparser_result_t cparser_cmd_intf_exit(cparser_context_t *context);
cparser_result_t cparser_cmd_show_stat(cparser_context_t *context);
cparser_result_t cparser_cmd_stat_app(cparser_context_t *context);
cparser_result_t cparser_cmd_cont_flow(cparser_context_t *context);
cparser_result_t cparser_cmd_cont_dcdr(cparser_context_t *context);
cparser_result_t cparser_cmd_cont_tcp(cparser_context_t *context);
cparser_result_t cparser_cmd_cont_dfrg(cparser_context_t *context);
cparser_result_t cparser_cmd_cont_dtct(cparser_context_t *context);
cparser_result_t cparser_cmd_cont_err(cparser_context_t *context);
cparser_result_t cparser_cmd_cont_clr(cparser_context_t *context);
cparser_result_t cparser_cmd_cont_exit(cparser_context_t *context);
cparser_result_t cparser_cmd_stat_rxfp(cparser_context_t *context);
cparser_result_t cparser_cmd_stat_st1(cparser_context_t *context);
cparser_result_t cparser_cmd_stat_st2(cparser_context_t *context);
cparser_result_t cparser_cmd_stat_txfw(cparser_context_t *context);
cparser_result_t cparser_cmd_stat_clr(cparser_context_t *context);
cparser_result_t cparser_cmd_stat_exit(cparser_context_t *context);
cparser_result_t cparser_cmd_show_clr(cparser_context_t *context);
cparser_result_t cparser_cmd_show_exit(cparser_context_t *context);
cparser_result_t cparser_cmd_clr(cparser_context_t *context);
cparser_result_t cparser_cmd_quit(cparser_context_t *context);

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* __CPARSER_TREE_H__ */
