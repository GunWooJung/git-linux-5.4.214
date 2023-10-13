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
	{ 0x68a41536, "param_ops_bool" },
	{ 0x74e831b6, "platform_device_unregister" },
	{ 0xa99a62a3, "platform_driver_unregister" },
	{ 0xaf465642, "platform_device_put" },
	{ 0xe34d9651, "platform_device_del" },
	{ 0x472afdf9, "backlight_device_unregister" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xdf8165bf, "backlight_device_register" },
	{ 0x6de7f7ff, "acpi_video_get_backlight_type" },
	{ 0xf14ea0e9, "platform_device_add" },
	{ 0xd73c36a2, "platform_device_alloc" },
	{ 0x19af53eb, "__platform_driver_register" },
	{ 0xd4835ef8, "dmi_check_system" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x1a45cb6c, "acpi_disabled" },
	{ 0x83eb21c, "rfkill_unregister" },
	{ 0xdb68bbad, "rfkill_destroy" },
	{ 0xff282521, "rfkill_register" },
	{ 0xaad6d92f, "rfkill_init_sw_state" },
	{ 0xe5b440f1, "rfkill_alloc" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xfc4152fc, "ec_read" },
	{ 0xc708f1fe, "ec_write" },
	{ 0xc5850110, "printk" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "video");

MODULE_ALIAS("dmi*:pn*OakTrailplatform*:");

MODULE_INFO(srcversion, "10F6938A1E146B99390AB0E");
