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
	{ 0x4a75ed2d, "dsa_tag_drivers_unregister" },
	{ 0x53f6f97d, "dsa_tag_drivers_register" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0x59a2f0ee, "packing" },
	{ 0x417d1fed, "dsa_8021q_rx_switch_id" },
	{ 0x9e59271d, "dsa_8021q_rx_source_port" },
	{ 0x7f5f891f, "skb_pull_rcsum" },
	{ 0xa445900, "__skb_vlan_pop" },
	{ 0xd523d85d, "skb_push" },
	{ 0xe8b1a3d2, "netdev_warn" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0xd8e6cdd2, "kfree_skb" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x880c259, "dsa_defer_xmit" },
	{ 0x8eceaf76, "dsa_8021q_xmit" },
	{ 0xf9887793, "netdev_txq_to_tc" },
	{ 0x457dc43c, "dsa_8021q_tx_vid" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "dsa_core,tag_8021q");


MODULE_INFO(srcversion, "390C6D6E6C24C3DCFB96648");
