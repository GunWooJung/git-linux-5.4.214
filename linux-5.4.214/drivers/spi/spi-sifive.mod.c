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
	{ 0xa99a62a3, "platform_driver_unregister" },
	{ 0x19af53eb, "__platform_driver_register" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0x8e17faf3, "put_device" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xbb4e55fd, "devm_spi_register_controller" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x51765820, "devm_request_threaded_irq" },
	{ 0x815588a6, "clk_enable" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x7e73a43b, "platform_get_irq" },
	{ 0x6164d63, "devm_clk_get" },
	{ 0xc423de90, "devm_platform_ioremap_resource" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x15051d2b, "__spi_alloc_controller" },
	{ 0x29361773, "complete" },
	{ 0xe484e35f, "ioread32" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x4a453f53, "iowrite32" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Csifive,spi0");
MODULE_ALIAS("of:N*T*Csifive,spi0C*");

MODULE_INFO(srcversion, "AB96E679C6E4F8311EFEF91");
