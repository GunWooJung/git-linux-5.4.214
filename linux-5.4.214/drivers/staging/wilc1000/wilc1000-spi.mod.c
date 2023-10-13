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

MODULE_INFO(staging, "Y");

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xed93c0b3, "module_layout" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x9cd51391, "wilc_netdev_cleanup" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xf37d2c0b, "gpio_to_desc" },
	{ 0xf6dd8fef, "__spi_register_driver" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x86f434e2, "driver_unregister" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x586583b8, "spi_sync" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x4a2bd6de, "wilc_cfg80211_init" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x37a0cba, "kfree" },
	{ 0xe22cbce1, "gpiod_put" },
	{ 0x251e6613, "gpiod_get" },
};

MODULE_INFO(depends, "wilc1000");

MODULE_ALIAS("of:N*T*Cmicrochip,wilc1000-spi");
MODULE_ALIAS("of:N*T*Cmicrochip,wilc1000-spiC*");

MODULE_INFO(srcversion, "6AA955B4DCF6F7C6497FFD0");
