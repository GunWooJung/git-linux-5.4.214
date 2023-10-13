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
	{ 0x170ddf79, "acpi_install_notify_handler" },
	{ 0x970d5a4a, "thermal_cooling_device_register" },
	{ 0xaa23ede4, "acpi_video_get_levels" },
	{ 0x69c81caa, "backlight_device_get_by_type" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x15cb5620, "is_acpi_device_node" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x735e6a81, "acpi_evaluate_integer" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0xdc1cb3c6, "backlight_device_set_brightness" },
	{ 0x37a0cba, "kfree" },
	{ 0xebdd1a34, "thermal_cooling_device_unregister" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "video");

MODULE_ALIAS("acpi*:INT3406:*");

MODULE_INFO(srcversion, "C40B94C1049D5F68A499386");
