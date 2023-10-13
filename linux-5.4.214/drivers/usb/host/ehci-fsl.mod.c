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
	{ 0x37e2c244, "usb_hcd_platform_shutdown" },
	{ 0xa99a62a3, "platform_driver_unregister" },
	{ 0x19af53eb, "__platform_driver_register" },
	{ 0x9b88a645, "ehci_init_driver" },
	{ 0xc5850110, "printk" },
	{ 0x19a304ba, "usb_disabled" },
	{ 0x25cf232a, "ehci_setup" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xd9996d5a, "device_wakeup_enable" },
	{ 0x1d8b98ff, "usb_add_hcd" },
	{ 0x1e57910a, "devm_ioremap_resource" },
	{ 0xe8043e99, "__usb_create_hcd" },
	{ 0xd072dc20, "platform_get_resource" },
	{ 0xa9107ac8, "usb_put_hcd" },
	{ 0xf28ad204, "usb_remove_hcd" },
	{ 0xb3f93fc7, "usb_put_phy" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xaed06536, "_dev_warn" },
	{ 0xe419bc99, "iowrite32be" },
	{ 0xfdb9b629, "ioread32be" },
	{ 0xc8180d08, "ehci_adjust_port_wakeup_flags" },
	{ 0x89ecded2, "usb_root_hub_lost_power" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "C63FB6DF896DA5D96B72242");
