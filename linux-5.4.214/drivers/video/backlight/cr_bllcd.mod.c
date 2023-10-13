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
	{ 0x74e831b6, "platform_device_unregister" },
	{ 0xa99a62a3, "platform_driver_unregister" },
	{ 0x56cf6cd9, "platform_device_register_full" },
	{ 0x19af53eb, "__platform_driver_register" },
	{ 0xc5850110, "printk" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0xd0c1e622, "pci_read_config_dword" },
	{ 0x68178abb, "devm_lcd_device_register" },
	{ 0x41c10d3e, "devm_backlight_device_register" },
	{ 0x37a24b11, "pci_read_config_byte" },
	{ 0xa207ea98, "pci_get_device" },
	{ 0x8423aab5, "pci_dev_put" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "lcd");


MODULE_INFO(srcversion, "4FBE513C3575F1485F03BA3");
