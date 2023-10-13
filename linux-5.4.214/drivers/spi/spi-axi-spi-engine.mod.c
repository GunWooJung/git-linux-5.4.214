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
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x30779a9, "spi_register_controller" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x815588a6, "clk_enable" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x6164d63, "devm_clk_get" },
	{ 0xc423de90, "devm_platform_ioremap_resource" },
	{ 0x15051d2b, "__spi_alloc_controller" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x11001db2, "spi_finalize_current_message" },
	{ 0x37a0cba, "kfree" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x8e17faf3, "put_device" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x56d0a403, "spi_unregister_controller" },
	{ 0x7e73a43b, "platform_get_irq" },
	{ 0xe7a7a03f, "get_device" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cadi,axi-spi-engine-1.00.a");
MODULE_ALIAS("of:N*T*Cadi,axi-spi-engine-1.00.aC*");

MODULE_INFO(srcversion, "DAAF045902BAF4D7598DD49");
