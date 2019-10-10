#ifndef _BT_L2CAP_H_
#define _BT_L2CAP_H_

void bt_l2cap_cmd_sdp_conn_req(void *bt_dev);
void bt_l2cap_cmd_hid_ctrl_conn_req(void *bt_dev);
void bt_l2cap_cmd_hid_intr_conn_req(void *bt_dev);
void bt_l2cap_cmd_sdp_conn_rsp(void *bt_dev);
void bt_l2cap_cmd_hid_ctrl_conn_rsp(void *bt_dev);
void bt_l2cap_cmd_hid_intr_conn_rsp(void *bt_dev);
void bt_l2cap_cmd_sdp_conf_req(void *bt_dev);
void bt_l2cap_cmd_hid_ctrl_conf_req(void *bt_dev);
void bt_l2cap_cmd_hid_intr_conf_req(void *bt_dev);
void bt_l2cap_cmd_sdp_conf_rsp(void *bt_dev);
void bt_l2cap_cmd_hid_ctrl_conf_rsp(void *bt_dev);
void bt_l2cap_cmd_hid_intr_conf_rsp(void *bt_dev);
void bt_l2cap_cmd_sdp_disconn_req(void *bt_dev);
void bt_l2cap_cmd_hid_ctrl_disconn_req(void *bt_dev);
void bt_l2cap_cmd_hid_intr_disconn_req(void *bt_dev);
void bt_l2cap_cmd_sdp_disconn_rsp(void *bt_dev);
void bt_l2cap_cmd_hid_ctrl_disconn_rsp(void *bt_dev);
void bt_l2cap_cmd_hid_intr_disconn_rsp(void *bt_dev);

#endif /* _BT_L2CAP_H_ */