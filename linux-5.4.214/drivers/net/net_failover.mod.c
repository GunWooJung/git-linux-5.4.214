#include <linux/build-salt.h>
#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(.gnu.linkonce.this_module) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xed93c0b3, "module_layout" },
	{ 0x75bdecd8, "dev_mc_sync_multiple" },
	{ 0xeb1919a4, "netdev_info" },
	{ 0x6d00f69e, "pci_bus_type" },
	{ 0xb5cc056f, "dev_mc_unsync" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xed37ffc6, "vlan_uses_dev" },
	{ 0x5743f145, "netif_carrier_on" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x5b551d6c, "netif_carrier_off" },
	{ 0x5a5abf5b, "vlan_vid_del" },
	{ 0x774844c8, "call_netdevice_notifiers" },
	{ 0xa6a40b7a, "__dev_kfree_skb_any" },
	{ 0x5690c1f4, "vlan_vid_add" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xa28e6d25, "vlan_vids_del_by_dev" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x56c43db7, "vlan_vids_add_by_dev" },
	{ 0xa1292a5d, "failover_register" },
	{ 0xc4e58348, "netdev_lower_state_changed" },
	{ 0xded93d72, "netdev_change_features" },
	{ 0x838e8353, "netif_tx_wake_queue" },
	{ 0x7f787f6d, "netif_tx_stop_all_queues" },
	{ 0xfd3d2b80, "__ethtool_get_link_ksettings" },
	{ 0xc7a6ead9, "ethtool_op_get_link" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x2816d12d, "free_netdev" },
	{ 0xc21596aa, "register_netdev" },
	{ 0x5561600b, "dev_close" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x62aa6169, "dev_open" },
	{ 0xc70bda53, "netdev_pick_tx" },
	{ 0x7ad55ce3, "netif_device_detach" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x88ff8671, "passthru_features_check" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x216cc777, "netdev_err" },
	{ 0xe1ac9f31, "dev_uc_unsync" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x4aebfc6b, "unregister_netdevice_queue" },
	{ 0x473e7988, "eth_validate_addr" },
	{ 0x67f7a4af, "dev_uc_sync_multiple" },
	{ 0x56c590e8, "failover_slave_unregister" },
	{ 0x8acf4ec6, "unregister_netdev" },
	{ 0x1194abfc, "failover_unregister" },
	{ 0xba505b9b, "dev_queue_xmit" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x69668826, "netdev_increment_features" },
	{ 0x177cfc88, "dev_get_stats" },
	{ 0x1cc490fb, "dev_set_mtu" },
	{ 0xe3a1262e, "alloc_etherdev_mqs" },
};

MODULE_INFO(depends, "failover");


MODULE_INFO(srcversion, "E623C8FE2A11145245BFE01");
