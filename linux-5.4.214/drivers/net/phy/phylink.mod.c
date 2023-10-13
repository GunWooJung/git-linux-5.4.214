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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xed93c0b3, "module_layout" },
	{ 0x129334ae, "sfp_parse_support" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xd2ce78ea, "phy_disconnect" },
	{ 0x584785e5, "sfp_register_upstream" },
	{ 0x47884890, "system_power_efficient_wq" },
	{ 0x538d073d, "phy_duplex_to_str" },
	{ 0x2fab06b2, "phy_stop" },
	{ 0x4958972a, "phy_attach_direct" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x65e33f30, "fwnode_handle_put" },
	{ 0x18e4f8aa, "swphy_read_reg" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x36c31145, "phy_ethtool_ksettings_set" },
	{ 0xc7ba3d4e, "dev_printk" },
	{ 0x384b475f, "phy_ethtool_ksettings_get" },
	{ 0x5743f145, "netif_carrier_on" },
	{ 0x6d5214dc, "phy_ethtool_get_wol" },
	{ 0x5b551d6c, "netif_carrier_off" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xcb0642ea, "mdiobus_write" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x26a8b060, "fwnode_device_is_available" },
	{ 0xc70a5bf2, "fwnode_property_present" },
	{ 0x14efa785, "fwnode_property_read_string" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x21d3b421, "__dynamic_netdev_dbg" },
	{ 0x85fb8f1c, "phy_ethtool_get_eee" },
	{ 0x77f723a3, "phy_set_asym_pause" },
	{ 0xdd049ee2, "fwnode_get_named_child_node" },
	{ 0xa084749a, "__bitmap_or" },
	{ 0x9130787b, "sfp_unregister_upstream" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x608bab1f, "sfp_select_interface" },
	{ 0x5fd2de91, "phy_start" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xccf52bc9, "sfp_upstream_start" },
	{ 0xf1595bd9, "fwnode_get_named_gpiod" },
	{ 0xe1cf8262, "mdiobus_read" },
	{ 0x8a62b81b, "sfp_upstream_stop" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x3fbf1535, "netdev_printk" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xc3477f60, "phy_detach" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x858c3883, "phy_init_eee" },
	{ 0x4a978b8c, "phy_request_interrupt" },
	{ 0x76f87430, "fwnode_property_read_u32_array" },
	{ 0x6209f49, "phy_lookup_setting" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xadfdfcef, "__bitmap_andnot" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xf3e6402e, "__bitmap_equal" },
	{ 0x92102194, "phy_get_eee_err" },
	{ 0xe4b818c3, "phy_speed_to_str" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xa4031b7f, "sfp_parse_port" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x39b52d19, "__bitmap_and" },
	{ 0xc0155fd5, "fwnode_property_get_reference_args" },
	{ 0xc8632514, "phy_ethtool_set_wol" },
	{ 0x37a0cba, "kfree" },
	{ 0xef3fd222, "gpiod_to_irq" },
	{ 0xf736fe7, "phy_ethtool_set_eee" },
	{ 0xb352177e, "find_first_bit" },
	{ 0x9eb94f12, "phy_mii_ioctl" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0xe22cbce1, "gpiod_put" },
	{ 0x2368a72, "phy_restart_aneg" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x9e379360, "gpiod_get_value_cansleep" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "EBB164332298DA928EB7FE3");
