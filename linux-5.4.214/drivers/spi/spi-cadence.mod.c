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
	{ 0x30779a9, "spi_register_controller" },
	{ 0x7c60d490, "__pm_runtime_suspend" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x51765820, "devm_request_threaded_irq" },
	{ 0x7e73a43b, "platform_get_irq" },
	{ 0x9962bc44, "pm_runtime_enable" },
	{ 0x11c66087, "pm_runtime_set_autosuspend_delay" },
	{ 0x18ed72f8, "__pm_runtime_use_autosuspend" },
	{ 0x8e17faf3, "put_device" },
	{ 0x6164d63, "devm_clk_get" },
	{ 0xc423de90, "devm_platform_ioremap_resource" },
	{ 0x15051d2b, "__spi_alloc_controller" },
	{ 0x815588a6, "clk_enable" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x3ef3230a, "spi_finalize_current_transfer" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x56d0a403, "spi_unregister_controller" },
	{ 0xfb4ec2db, "__pm_runtime_disable" },
	{ 0xb98c9772, "__pm_runtime_set_status" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xb71b7859, "spi_controller_resume" },
	{ 0x7af8c0f, "spi_controller_suspend" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cxlnx,zynq-spi-r1p6");
MODULE_ALIAS("of:N*T*Cxlnx,zynq-spi-r1p6C*");
MODULE_ALIAS("of:N*T*Ccdns,spi-r1p6");
MODULE_ALIAS("of:N*T*Ccdns,spi-r1p6C*");

MODULE_INFO(srcversion, "EB8FEC1FF7D60E2FC6085C0");
