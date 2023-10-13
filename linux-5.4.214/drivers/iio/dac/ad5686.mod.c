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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xed93c0b3, "module_layout" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x263ed23b, "__x86_indirect_thunk_r12" },
	{ 0x1643a127, "regulator_disable" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xe1f088fa, "iio_device_unregister" },
	{ 0x53c6e7a4, "devm_iio_device_alloc" },
	{ 0xea6bc49f, "iio_enum_write" },
	{ 0x124bad4d, "kstrtobool" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xab1b6c43, "__iio_device_register" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x580e0b5c, "iio_enum_available_read" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x4853215d, "regulator_get_voltage" },
	{ 0xf1a50cbd, "devm_regulator_get_optional" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x4802d671, "iio_enum_read" },
	{ 0xfe543c51, "regulator_enable" },
};

MODULE_INFO(depends, "industrialio");


MODULE_INFO(srcversion, "4C732B4B473A92C3ABCC4D5");
