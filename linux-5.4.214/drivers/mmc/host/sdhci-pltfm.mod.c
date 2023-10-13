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
	{ 0x487ebde6, "sdhci_remove_host" },
	{ 0x815588a6, "clk_enable" },
	{ 0xd7e53063, "sdhci_alloc_host" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x40b9dda7, "sdhci_resume_host" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0xdf25be12, "sdhci_add_host" },
	{ 0xafdaeb2c, "sdhci_free_host" },
	{ 0xe0c73956, "sdhci_set_clock" },
	{ 0xc5850110, "printk" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x4a7165c4, "sdhci_suspend_host" },
	{ 0xacdeb71f, "device_property_read_u32_array" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x1bb76e14, "sdhci_reset" },
	{ 0x46fa96de, "sdhci_set_uhs_signaling" },
	{ 0x7e73a43b, "platform_get_irq" },
	{ 0xc423de90, "devm_platform_ioremap_resource" },
	{ 0x8076132, "sdhci_set_bus_width" },
	{ 0x61853e9a, "device_property_present" },
};

MODULE_INFO(depends, "sdhci");


MODULE_INFO(srcversion, "8D2E2C384B0E874DB191D64");
