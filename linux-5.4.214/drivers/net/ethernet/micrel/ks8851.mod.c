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
	{ 0xc502ef3, "skb_queue_tail" },
	{ 0xe8b1a3d2, "netdev_warn" },
	{ 0xc21596aa, "register_netdev" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x5b551d6c, "netif_carrier_off" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xfe543c51, "regulator_enable" },
	{ 0x868b9359, "devm_regulator_get" },
	{ 0xe3a1262e, "alloc_etherdev_mqs" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x838e8353, "netif_tx_wake_queue" },
	{ 0x50087170, "netif_rx_ni" },
	{ 0x4d59d915, "eth_type_trans" },
	{ 0xf89bc02c, "skb_put" },
	{ 0x120103ea, "__netdev_alloc_skb" },
	{ 0x7ad55ce3, "netif_device_detach" },
	{ 0xeb1919a4, "netdev_info" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0xad263612, "consume_skb" },
	{ 0x3b89b540, "skb_dequeue" },
	{ 0xc5f6f445, "netif_device_attach" },
	{ 0xdc4c3ac5, "mii_check_link" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xff7a0fdf, "eeprom_93cx6_multiread" },
	{ 0x870b53e9, "eeprom_93cx6_write" },
	{ 0x884deb9d, "eeprom_93cx6_read" },
	{ 0x63d2ff63, "eeprom_93cx6_wren" },
	{ 0x21d3b421, "__dynamic_netdev_dbg" },
	{ 0x5792f848, "strlcpy" },
	{ 0x3879f32d, "mii_nway_restart" },
	{ 0x942296a4, "mii_link_ok" },
	{ 0xcdb386fa, "mii_ethtool_get_link_ksettings" },
	{ 0x75a7763, "mii_ethtool_set_link_ksettings" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0x78041b8f, "byte_rev_table" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xbf35024e, "generic_mii_ioctl" },
	{ 0xd111bb59, "_dev_info" },
	{ 0xffb817fb, "gpiod_set_raw_value" },
	{ 0xf37d2c0b, "gpio_to_desc" },
	{ 0x2816d12d, "free_netdev" },
	{ 0x1643a127, "regulator_disable" },
	{ 0x8acf4ec6, "unregister_netdev" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x216cc777, "netdev_err" },
	{ 0x69acdf38, "memcpy" },
	{ 0x586583b8, "spi_sync" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "mii,eeprom_93cx6");

MODULE_ALIAS("of:N*T*Cmicrel,ks8851");
MODULE_ALIAS("of:N*T*Cmicrel,ks8851C*");

MODULE_INFO(srcversion, "0223736142CB53BD0957DAA");
