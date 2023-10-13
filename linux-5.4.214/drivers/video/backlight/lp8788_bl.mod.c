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
	{ 0xa82f8d7f, "sysfs_remove_group" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xd617d865, "devm_pwm_get" },
	{ 0x12b60659, "pwm_apply_state" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x472afdf9, "backlight_device_unregister" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xc2107c52, "sysfs_create_group" },
	{ 0xdf8165bf, "backlight_device_register" },
	{ 0xfaa6b854, "lp8788_write_byte" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x96848186, "scnprintf" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "CE6D7DB4B9AA808E0B02A64");
