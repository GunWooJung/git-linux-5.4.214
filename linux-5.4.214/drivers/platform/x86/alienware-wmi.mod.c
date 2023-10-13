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
	{ 0xaf465642, "platform_device_put" },
	{ 0xe34d9651, "platform_device_del" },
	{ 0xb372d8f7, "led_classdev_register_ext" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0xc2107c52, "sysfs_create_group" },
	{ 0xf14ea0e9, "platform_device_add" },
	{ 0xd73c36a2, "platform_device_alloc" },
	{ 0x19af53eb, "__platform_driver_register" },
	{ 0xd4835ef8, "dmi_check_system" },
	{ 0xc9d4d6d1, "wmi_has_guid" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x96848186, "scnprintf" },
	{ 0x6b2998d4, "led_classdev_unregister" },
	{ 0xa82f8d7f, "sysfs_remove_group" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xc5850110, "printk" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x37a0cba, "kfree" },
	{ 0x6068bedf, "wmi_evaluate_method" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "wmi");


MODULE_INFO(srcversion, "3B7A532D7A7DE24DC2EA7C1");
