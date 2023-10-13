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
	{ 0x86f434e2, "driver_unregister" },
	{ 0xf6dd8fef, "__spi_register_driver" },
	{ 0xc17d0ef8, "ieee802154_register_hw" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x98dfa282, "ieee802154_alloc_hw" },
	{ 0x51765820, "devm_request_threaded_irq" },
	{ 0xef3fd222, "gpiod_to_irq" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x12a38747, "usleep_range" },
	{ 0xffb817fb, "gpiod_set_raw_value" },
	{ 0x640d43e9, "devm_gpio_request_one" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x52ecbc75, "crc_ccitt" },
	{ 0x262e823a, "wait_for_completion_interruptible" },
	{ 0xd8e6cdd2, "kfree_skb" },
	{ 0xf7fef29c, "ieee802154_rx_irqsafe" },
	{ 0xf89bc02c, "skb_put" },
	{ 0x120103ea, "__netdev_alloc_skb" },
	{ 0xfe88309f, "gpiod_get_raw_value" },
	{ 0xf37d2c0b, "gpio_to_desc" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x29361773, "complete" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x586583b8, "spi_sync" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x5d042b8f, "ieee802154_free_hw" },
	{ 0xcff8ba64, "ieee802154_unregister_hw" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "mac802154");

MODULE_ALIAS("of:N*T*Cti,cc2520");
MODULE_ALIAS("of:N*T*Cti,cc2520C*");
MODULE_ALIAS("spi:cc2520");

MODULE_INFO(srcversion, "1C2228CA538E08715D77F1F");
