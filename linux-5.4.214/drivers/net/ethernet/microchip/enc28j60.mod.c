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
	{ 0x473e7988, "eth_validate_addr" },
	{ 0x765395c3, "param_ops_int" },
	{ 0x86f434e2, "driver_unregister" },
	{ 0xf6dd8fef, "__spi_register_driver" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x5561600b, "dev_close" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xc21596aa, "register_netdev" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x4cff0b1a, "device_get_mac_address" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xe3a1262e, "alloc_etherdev_mqs" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x3fbf1535, "netdev_printk" },
	{ 0x50087170, "netif_rx_ni" },
	{ 0x4d59d915, "eth_type_trans" },
	{ 0xf89bc02c, "skb_put" },
	{ 0x120103ea, "__netdev_alloc_skb" },
	{ 0x5743f145, "netif_carrier_on" },
	{ 0x5b551d6c, "netif_carrier_off" },
	{ 0x838e8353, "netif_tx_wake_queue" },
	{ 0xad263612, "consume_skb" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x391fccd6, "spi_write_then_read" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xe8b1a3d2, "netdev_warn" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0xc5850110, "printk" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x69acdf38, "memcpy" },
	{ 0x586583b8, "spi_sync" },
	{ 0xc7ba3d4e, "dev_printk" },
	{ 0xeb1919a4, "netdev_info" },
	{ 0x216cc777, "netdev_err" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x5792f848, "strlcpy" },
	{ 0x2816d12d, "free_netdev" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x8acf4ec6, "unregister_netdev" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cmicrochip,enc28j60");
MODULE_ALIAS("of:N*T*Cmicrochip,enc28j60C*");

MODULE_INFO(srcversion, "AA36A830038CB4188292244");
