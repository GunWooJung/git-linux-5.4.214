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
	{ 0x7c2b6899, "can_change_mtu" },
	{ 0x86f434e2, "driver_unregister" },
	{ 0xf6dd8fef, "__spi_register_driver" },
	{ 0xc5f6f445, "netif_device_attach" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xd0865ac4, "dev_fwnode" },
	{ 0x44e7928f, "open_candev" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x8acc823e, "close_candev" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x7ad55ce3, "netif_device_detach" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x7be444ed, "unregister_candev" },
	{ 0x5573a68c, "spi_get_device_id" },
	{ 0xeb1919a4, "netdev_info" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x1643a127, "regulator_disable" },
	{ 0xfdeb1a62, "register_candev" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xfe543c51, "regulator_enable" },
	{ 0xf1a50cbd, "devm_regulator_get_optional" },
	{ 0xe21d630c, "spi_setup" },
	{ 0x815588a6, "clk_enable" },
	{ 0x32c6e9b0, "free_candev" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xf4799c0a, "alloc_candev_mqs" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0xd019c02a, "devm_clk_get_optional" },
	{ 0x3bd1fe4c, "device_get_match_data" },
	{ 0x6008728e, "can_get_echo_skb" },
	{ 0xba5c46f2, "can_bus_off" },
	{ 0x838e8353, "netif_tx_wake_queue" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x14cb8c87, "can_put_echo_skb" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x1000e51, "schedule" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x12a38747, "usleep_range" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xffcdd8b2, "alloc_can_skb" },
	{ 0x216cc777, "netdev_err" },
	{ 0x50087170, "netif_rx_ni" },
	{ 0x334a5ba9, "alloc_can_err_skb" },
	{ 0xaed06536, "_dev_warn" },
	{ 0xd8e6cdd2, "kfree_skb" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x4778268d, "can_free_echo_skb" },
	{ 0xad263612, "consume_skb" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x586583b8, "spi_sync" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "can-dev");

MODULE_ALIAS("spi:mcp2510");
MODULE_ALIAS("spi:mcp2515");
MODULE_ALIAS("spi:mcp25625");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp2510");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp2510C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp2515");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp2515C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp25625");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp25625C*");

MODULE_INFO(srcversion, "73CC9BD337DE8DBCA041663");
