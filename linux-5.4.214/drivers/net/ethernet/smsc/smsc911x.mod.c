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
	{ 0x765395c3, "param_ops_int" },
	{ 0x87772bc9, "phy_ethtool_set_link_ksettings" },
	{ 0xcb1cddee, "phy_ethtool_get_link_ksettings" },
	{ 0xe9244302, "ethtool_op_get_ts_info" },
	{ 0xc7a6ead9, "ethtool_op_get_link" },
	{ 0x5d5be603, "phy_ethtool_nway_reset" },
	{ 0x473e7988, "eth_validate_addr" },
	{ 0xa99a62a3, "platform_driver_unregister" },
	{ 0x19af53eb, "__platform_driver_register" },
	{ 0xc5850110, "printk" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0xc21596aa, "register_netdev" },
	{ 0x47fb0804, "__mdiobus_register" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xed7a55b6, "mdiobus_alloc_size" },
	{ 0xc61bacc3, "netif_napi_add" },
	{ 0x61853e9a, "device_property_present" },
	{ 0xacdeb71f, "device_property_read_u32_array" },
	{ 0x4cff0b1a, "device_get_mac_address" },
	{ 0x8bdb3c5e, "device_get_phy_mode" },
	{ 0x815588a6, "clk_enable" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xeb94b6dd, "regulator_bulk_enable" },
	{ 0x41187327, "clk_get" },
	{ 0x2bf355c4, "devm_gpiod_get_optional" },
	{ 0xeec88271, "regulator_bulk_get" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0xe3a1262e, "alloc_etherdev_mqs" },
	{ 0x85bd1608, "__request_region" },
	{ 0x7e73a43b, "platform_get_irq" },
	{ 0x216cc777, "netdev_err" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x5c812f20, "phy_support_asym_pause" },
	{ 0x113de0, "phy_set_max_speed" },
	{ 0x5196e62, "phy_attached_info" },
	{ 0x8c9881c5, "phy_connect_direct" },
	{ 0x66cef73a, "phy_find_first" },
	{ 0xe8b1a3d2, "netdev_warn" },
	{ 0x5fd2de91, "phy_start" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xb662a539, "irq_get_irq_data" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x838e8353, "netif_tx_wake_queue" },
	{ 0xf9e91146, "__napi_schedule" },
	{ 0xa085cc86, "napi_schedule_prep" },
	{ 0xf281bc91, "napi_complete_done" },
	{ 0x2899f099, "netif_receive_skb" },
	{ 0x4d59d915, "eth_type_trans" },
	{ 0xf89bc02c, "skb_put" },
	{ 0x120103ea, "__netdev_alloc_skb" },
	{ 0x296e38aa, "skb_tstamp_tx" },
	{ 0xa6a40b7a, "__dev_kfree_skb_any" },
	{ 0xd6c2b127, "skb_clone_tx_timestamp" },
	{ 0x5b551d6c, "netif_carrier_off" },
	{ 0xd2ce78ea, "phy_disconnect" },
	{ 0x2fab06b2, "phy_stop" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x23a77175, "napi_disable" },
	{ 0xc5f6f445, "netif_device_attach" },
	{ 0x8bdf333d, "__pm_runtime_resume" },
	{ 0x9962bc44, "pm_runtime_enable" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0x78041b8f, "byte_rev_table" },
	{ 0xeb1919a4, "netdev_info" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x7ad55ce3, "netif_device_detach" },
	{ 0xb98c9772, "__pm_runtime_set_status" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xf9a482f9, "msleep" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x3f0546a8, "ioread32_rep" },
	{ 0xbfc177bc, "iowrite32_rep" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x12a38747, "usleep_range" },
	{ 0xcb0642ea, "mdiobus_write" },
	{ 0xe1cf8262, "mdiobus_read" },
	{ 0x9eb94f12, "phy_mii_ioctl" },
	{ 0x5792f848, "strlcpy" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0xd072dc20, "platform_get_resource" },
	{ 0xfb4ec2db, "__pm_runtime_disable" },
	{ 0xe5b6e9e8, "__pm_runtime_idle" },
	{ 0x2816d12d, "free_netdev" },
	{ 0xedc03953, "iounmap" },
	{ 0x1035c7c2, "__release_region" },
	{ 0x77358855, "iomem_resource" },
	{ 0x7a47b126, "platform_get_resource_byname" },
	{ 0xe0dc9da2, "mdiobus_free" },
	{ 0x888b323, "mdiobus_unregister" },
	{ 0x8acf4ec6, "unregister_netdev" },
	{ 0x2e1ca751, "clk_put" },
	{ 0xedf79230, "regulator_bulk_free" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x5bb6172e, "regulator_bulk_disable" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("acpi*:ARMH9118:*");

MODULE_INFO(srcversion, "D746F05D03A6C4FCE23ECA2");
