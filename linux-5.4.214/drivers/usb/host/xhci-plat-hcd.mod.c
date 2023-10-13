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
	{ 0x6d00f69e, "pci_bus_type" },
	{ 0x815588a6, "clk_enable" },
	{ 0x1d8b98ff, "usb_add_hcd" },
	{ 0xfb4ec2db, "__pm_runtime_disable" },
	{ 0xf28ad204, "usb_remove_hcd" },
	{ 0xf2d62900, "dma_set_mask" },
	{ 0xe8043e99, "__usb_create_hcd" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x1e57910a, "devm_ioremap_resource" },
	{ 0x8bdf333d, "__pm_runtime_resume" },
	{ 0x2b6f0008, "pm_runtime_forbid" },
	{ 0xd019c02a, "devm_clk_get_optional" },
	{ 0x91e0d49, "dma_set_coherent_mask" },
	{ 0x19af53eb, "__platform_driver_register" },
	{ 0xa9107ac8, "usb_put_hcd" },
	{ 0xc702b9f, "xhci_init_driver" },
	{ 0xee29df28, "usb_hcd_is_primary_hcd" },
	{ 0x35371399, "xhci_run" },
	{ 0xf7778ab7, "xhci_resume" },
	{ 0xd072dc20, "platform_get_resource" },
	{ 0xd9996d5a, "device_wakeup_enable" },
	{ 0xacdeb71f, "device_property_read_u32_array" },
	{ 0x9962bc44, "pm_runtime_enable" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xb98c9772, "__pm_runtime_set_status" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x19a304ba, "usb_disabled" },
	{ 0xf40cb154, "devm_usb_get_phy_by_phandle" },
	{ 0xb84ecfb3, "xhci_gen_setup" },
	{ 0x7e73a43b, "platform_get_irq" },
	{ 0xa99a62a3, "platform_driver_unregister" },
	{ 0x268d64f9, "xhci_suspend" },
	{ 0x15cb5620, "is_acpi_device_node" },
	{ 0x37e2c244, "usb_hcd_platform_shutdown" },
	{ 0x61853e9a, "device_property_present" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("acpi*:PNP0D10:*");

MODULE_INFO(srcversion, "B5DF2C526DFB14A8DD0D8C3");
