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
	{ 0xa99a62a3, "platform_driver_unregister" },
	{ 0x19af53eb, "__platform_driver_register" },
	{ 0x66cef73a, "phy_find_first" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x815588a6, "clk_enable" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x6164d63, "devm_clk_get" },
	{ 0xc21596aa, "register_netdev" },
	{ 0xc61bacc3, "netif_napi_add" },
	{ 0x113de0, "phy_set_max_speed" },
	{ 0x8c9881c5, "phy_connect_direct" },
	{ 0x47fb0804, "__mdiobus_register" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xed7a55b6, "mdiobus_alloc_size" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x9ed02ae3, "dmam_alloc_attrs" },
	{ 0x189a3237, "devm_ioremap_nocache" },
	{ 0xc7c073b7, "__devm_request_region" },
	{ 0x77358855, "iomem_resource" },
	{ 0xd072dc20, "platform_get_resource" },
	{ 0xe3a1262e, "alloc_etherdev_mqs" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x12a38747, "usleep_range" },
	{ 0xf9e91146, "__napi_schedule" },
	{ 0xa085cc86, "napi_schedule_prep" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0xc977aafa, "__skb_pad" },
	{ 0x296e38aa, "skb_tstamp_tx" },
	{ 0xad263612, "consume_skb" },
	{ 0xd6c2b127, "skb_clone_tx_timestamp" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0xb9e7429c, "memcpy_toio" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x5fd2de91, "phy_start" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xaed06536, "_dev_warn" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xf281bc91, "napi_complete_done" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x838e8353, "netif_tx_wake_queue" },
	{ 0x2899f099, "netif_receive_skb" },
	{ 0x4d59d915, "eth_type_trans" },
	{ 0x7d628444, "memcpy_fromio" },
	{ 0xf89bc02c, "skb_put" },
	{ 0x120103ea, "__netdev_alloc_skb" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0x78041b8f, "byte_rev_table" },
	{ 0xe25caefb, "phy_print_status" },
	{ 0x4a453f53, "iowrite32" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xe419bc99, "iowrite32be" },
	{ 0x2fab06b2, "phy_stop" },
	{ 0x23a77175, "napi_disable" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xe484e35f, "ioread32" },
	{ 0xfdb9b629, "ioread32be" },
	{ 0x9eb94f12, "phy_mii_ioctl" },
	{ 0x17ce1d56, "mdiobus_get_phy" },
	{ 0x2816d12d, "free_netdev" },
	{ 0x8acf4ec6, "unregister_netdev" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xe0dc9da2, "mdiobus_free" },
	{ 0x888b323, "mdiobus_unregister" },
	{ 0xd2ce78ea, "phy_disconnect" },
	{ 0x7e3e8acb, "netif_napi_del" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Copencores,ethoc");
MODULE_ALIAS("of:N*T*Copencores,ethocC*");

MODULE_INFO(srcversion, "1C74460F2175405504A9D89");
