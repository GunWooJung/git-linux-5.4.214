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
	{ 0x473e7988, "eth_validate_addr" },
	{ 0xfa9c9f13, "spi_bus_type" },
	{ 0x86f434e2, "driver_unregister" },
	{ 0xf6dd8fef, "__spi_register_driver" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x63616516, "netif_rx" },
	{ 0x4d59d915, "eth_type_trans" },
	{ 0xf89bc02c, "skb_put" },
	{ 0x120103ea, "__netdev_alloc_skb" },
	{ 0xe8c8c6c2, "regmap_encx24j600_spi_read" },
	{ 0xc21596aa, "register_netdev" },
	{ 0xab37f21b, "wake_up_process" },
	{ 0xabaae129, "kthread_create_on_node" },
	{ 0x955b0e2e, "kthread_worker_fn" },
	{ 0x91221fd5, "__kthread_init_worker" },
	{ 0x12a38747, "usleep_range" },
	{ 0x6b6947f4, "regcache_cache_bypass" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x6e2ee325, "devm_regmap_init_encx24j600" },
	{ 0xe3a1262e, "alloc_etherdev_mqs" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xc5850110, "printk" },
	{ 0xcc4fa41a, "regmap_encx24j600_spi_write" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0x1b2ad908, "netdev_notice" },
	{ 0x5b551d6c, "netif_carrier_off" },
	{ 0x5743f145, "netif_carrier_on" },
	{ 0xeb1919a4, "netdev_info" },
	{ 0x8f996a30, "ethtool_convert_legacy_u32_to_link_mode" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xe8b1a3d2, "netdev_warn" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0xad263612, "consume_skb" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x21d3b421, "__dynamic_netdev_dbg" },
	{ 0x2bac761d, "kthread_queue_work" },
	{ 0xb27ba2a8, "dev_trans_start" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x838e8353, "netif_tx_wake_queue" },
	{ 0x904a8908, "regmap_write" },
	{ 0xc1889514, "regmap_update_bits_base" },
	{ 0x5792f848, "strlcpy" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x216cc777, "netdev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x36f1a2b6, "regmap_read" },
	{ 0x2816d12d, "free_netdev" },
	{ 0x85e73dd7, "kthread_stop" },
	{ 0x8acf4ec6, "unregister_netdev" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "encx24j600-regmap");

MODULE_ALIAS("spi:encx24j600");

MODULE_INFO(srcversion, "DD382D2BC4DFD6B477CE34D");
