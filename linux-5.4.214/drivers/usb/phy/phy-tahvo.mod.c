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
	{ 0x9a4c322, "_dev_err" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x7e73a43b, "platform_get_irq" },
	{ 0x993534d9, "usb_add_phy" },
	{ 0x2fc735f5, "devm_extcon_dev_register" },
	{ 0x3009ba54, "devm_extcon_dev_allocate" },
	{ 0x815588a6, "clk_enable" },
	{ 0x6164d63, "devm_clk_get" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x2ec8eb49, "usb_remove_phy" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x66949046, "usb_phy_set_event" },
	{ 0x316c15d8, "usb_gadget_vbus_connect" },
	{ 0x3adba3e3, "sysfs_notify" },
	{ 0xe692cb26, "extcon_set_state_sync" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x56d1a8c5, "retu_read" },
	{ 0xa074c8b6, "retu_write" },
	{ 0x7802343, "usb_gadget_vbus_disconnect" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "udc-core,retu-mfd");


MODULE_INFO(srcversion, "B67FA513BDF2E01F301B1A7");
