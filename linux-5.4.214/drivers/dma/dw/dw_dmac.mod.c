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
	{ 0xb077e70a, "clk_unprepare" },
	{ 0x3f5a3829, "idma32_dma_probe" },
	{ 0x815588a6, "clk_enable" },
	{ 0xfb4ec2db, "__pm_runtime_disable" },
	{ 0x7c60d490, "__pm_runtime_suspend" },
	{ 0xf2d62900, "dma_set_mask" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xe8217b18, "dw_dma_probe" },
	{ 0x8bdf333d, "__pm_runtime_resume" },
	{ 0xd019c02a, "devm_clk_get_optional" },
	{ 0x91e0d49, "dma_set_coherent_mask" },
	{ 0x19af53eb, "__platform_driver_register" },
	{ 0x3bd1fe4c, "device_get_match_data" },
	{ 0xaed06536, "_dev_warn" },
	{ 0x6259fd79, "dw_dma_remove" },
	{ 0x674840a9, "do_dw_dma_enable" },
	{ 0xb2488c15, "acpi_dma_controller_register" },
	{ 0xc24d5d44, "acpi_dma_controller_free" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x7d725735, "devm_kmemdup" },
	{ 0xbda4380, "acpi_dma_simple_xlate" },
	{ 0x8e58d8a1, "dw_dma_filter" },
	{ 0x9962bc44, "pm_runtime_enable" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xcddec82a, "do_dw_dma_disable" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x7e73a43b, "platform_get_irq" },
	{ 0xa99a62a3, "platform_driver_unregister" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x15cb5620, "is_acpi_device_node" },
	{ 0xc423de90, "devm_platform_ioremap_resource" },
	{ 0x33508600, "idma32_dma_remove" },
};

MODULE_INFO(depends, "dw_dmac_core");

MODULE_ALIAS("acpi*:INTL9C60:*");
MODULE_ALIAS("acpi*:80862286:*");
MODULE_ALIAS("acpi*:808622C0:*");
MODULE_ALIAS("acpi*:80864BB4:*");
MODULE_ALIAS("acpi*:80864BB5:*");
MODULE_ALIAS("acpi*:80864BB6:*");

MODULE_INFO(srcversion, "53594F06DF3BBF59152E294");
