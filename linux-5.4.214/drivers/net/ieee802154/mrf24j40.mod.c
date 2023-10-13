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
	{ 0xaed06536, "_dev_warn" },
	{ 0xc17d0ef8, "ieee802154_register_hw" },
	{ 0x51765820, "devm_request_threaded_irq" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0xb662a539, "irq_get_irq_data" },
	{ 0x5573a68c, "spi_get_device_id" },
	{ 0x61d19c6, "__devm_regmap_init" },
	{ 0x61fbd9e4, "__devm_regmap_init_spi" },
	{ 0x98dfa282, "ieee802154_alloc_hw" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x69acdf38, "memcpy" },
	{ 0x586583b8, "spi_sync" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xbf66e8e8, "ieee802154_xmit_complete" },
	{ 0xcd47a0fd, "regmap_write_async" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xf7fef29c, "ieee802154_rx_irqsafe" },
	{ 0xf89bc02c, "skb_put" },
	{ 0x120103ea, "__netdev_alloc_skb" },
	{ 0xc5850110, "printk" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x904a8908, "regmap_write" },
	{ 0xc1889514, "regmap_update_bits_base" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x4b5489c1, "spi_async" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x5d042b8f, "ieee802154_free_hw" },
	{ 0xcff8ba64, "ieee802154_unregister_hw" },
	{ 0x391fccd6, "spi_write_then_read" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "mac802154");

MODULE_ALIAS("spi:mrf24j40");
MODULE_ALIAS("spi:mrf24j40ma");
MODULE_ALIAS("spi:mrf24j40mc");
MODULE_ALIAS("of:N*T*Cmicrochip,mrf24j40");
MODULE_ALIAS("of:N*T*Cmicrochip,mrf24j40C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mrf24j40ma");
MODULE_ALIAS("of:N*T*Cmicrochip,mrf24j40maC*");
MODULE_ALIAS("of:N*T*Cmicrochip,mrf24j40mc");
MODULE_ALIAS("of:N*T*Cmicrochip,mrf24j40mcC*");

MODULE_INFO(srcversion, "DE44C16F09D270DAFE0BB65");
