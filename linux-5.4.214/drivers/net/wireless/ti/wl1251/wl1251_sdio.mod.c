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
	{ 0x406e189e, "sdio_writeb" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xe5b6e9e8, "__pm_runtime_idle" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xb13d1388, "ieee80211_queue_work" },
	{ 0xecf02f95, "sdio_enable_func" },
	{ 0x4c614ad1, "wl1251_free_hw" },
	{ 0x518250bc, "sdio_writeb_readb" },
	{ 0x43dff967, "sdio_claim_irq" },
	{ 0xf37d2c0b, "gpio_to_desc" },
	{ 0x8bdf333d, "__pm_runtime_resume" },
	{ 0xc5850110, "printk" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x13243d4b, "wl1251_get_platform_data" },
	{ 0xd8f46d1d, "sdio_unregister_driver" },
	{ 0xbc477a2, "irq_set_irq_type" },
	{ 0x1f7b01bc, "sdio_release_irq" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7522f3ba, "irq_modify_status" },
	{ 0x989e1a92, "wl1251_init_ieee80211" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x6961b9f2, "sdio_memcpy_toio" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x37a0cba, "kfree" },
	{ 0xffb817fb, "gpiod_set_raw_value" },
	{ 0x43919251, "sdio_register_driver" },
	{ 0xa5d565a3, "sdio_memcpy_fromio" },
	{ 0xfc5d3d0c, "sdio_claim_host" },
	{ 0xdda54c2c, "devm_gpio_request" },
	{ 0xcb3a3a, "wl1251_alloc_hw" },
	{ 0x98d0a1f5, "sdio_set_block_size" },
	{ 0xb63ef191, "sdio_disable_func" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x56d3d127, "sdio_release_host" },
};

MODULE_INFO(depends, "mac80211,wl1251");

MODULE_ALIAS("sdio:c*v0097d9066*");

MODULE_INFO(srcversion, "11E49F5EBA8A10C2D3D8D8C");
