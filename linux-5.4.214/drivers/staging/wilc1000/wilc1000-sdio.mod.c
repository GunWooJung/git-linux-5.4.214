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
	{ 0xb077e70a, "clk_unprepare" },
	{ 0x406e189e, "sdio_writeb" },
	{ 0x225ecbd1, "sdio_readb" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x815588a6, "clk_enable" },
	{ 0x9cd51391, "wilc_netdev_cleanup" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xbdcb6dfd, "wilc_handle_isr" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x43dff967, "sdio_claim_irq" },
	{ 0xf37d2c0b, "gpio_to_desc" },
	{ 0x6bcf6eda, "chip_wakeup" },
	{ 0x51eb11f7, "chip_allow_sleep" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xd8f46d1d, "sdio_unregister_driver" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x4a2bd6de, "wilc_cfg80211_init" },
	{ 0x87b122bf, "host_wakeup_notify" },
	{ 0x1f7b01bc, "sdio_release_irq" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xbe03b884, "host_sleep_notify" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x6164d63, "devm_clk_get" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x6961b9f2, "sdio_memcpy_toio" },
	{ 0x37a0cba, "kfree" },
	{ 0x43919251, "sdio_register_driver" },
	{ 0xa5d565a3, "sdio_memcpy_fromio" },
	{ 0xfc5d3d0c, "sdio_claim_host" },
	{ 0xe22cbce1, "gpiod_put" },
	{ 0x56d3d127, "sdio_release_host" },
	{ 0x251e6613, "gpiod_get" },
};

MODULE_INFO(depends, "wilc1000");

MODULE_ALIAS("of:N*T*Cmicrochip,wilc1000-sdio");
MODULE_ALIAS("of:N*T*Cmicrochip,wilc1000-sdioC*");

MODULE_INFO(srcversion, "5050BC9195347AA58308B75");
