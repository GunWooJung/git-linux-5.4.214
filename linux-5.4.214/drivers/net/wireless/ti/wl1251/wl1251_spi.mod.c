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
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xb13d1388, "ieee80211_queue_work" },
	{ 0x1643a127, "regulator_disable" },
	{ 0xba55d23e, "crc7_be" },
	{ 0x4c614ad1, "wl1251_free_hw" },
	{ 0xf37d2c0b, "gpio_to_desc" },
	{ 0xf6dd8fef, "__spi_register_driver" },
	{ 0xe21d630c, "spi_setup" },
	{ 0xc5850110, "printk" },
	{ 0x86f434e2, "driver_unregister" },
	{ 0x640d43e9, "devm_gpio_request_one" },
	{ 0x586583b8, "spi_sync" },
	{ 0xbc477a2, "irq_set_irq_type" },
	{ 0x868b9359, "devm_regulator_get" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7522f3ba, "irq_modify_status" },
	{ 0x989e1a92, "wl1251_init_ieee80211" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x37a0cba, "kfree" },
	{ 0xffb817fb, "gpiod_set_raw_value" },
	{ 0x510d772f, "ieee80211_free_hw" },
	{ 0xcb3a3a, "wl1251_alloc_hw" },
	{ 0x51765820, "devm_request_threaded_irq" },
	{ 0xfe543c51, "regulator_enable" },
};

MODULE_INFO(depends, "mac80211,crc7,wl1251");


MODULE_INFO(srcversion, "30C65F18F1365C8B761DE56");
