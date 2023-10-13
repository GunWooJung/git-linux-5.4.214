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
	{ 0xd3bc5fa0, "iio_read_const_attr" },
	{ 0x875d03e0, "i2c_del_driver" },
	{ 0xb1a20db, "i2c_register_driver" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x7c60d490, "__pm_runtime_suspend" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x8bdf333d, "__pm_runtime_resume" },
	{ 0xd111bb59, "_dev_info" },
	{ 0xaed06536, "_dev_warn" },
	{ 0xab1b6c43, "__iio_device_register" },
	{ 0x9962bc44, "pm_runtime_enable" },
	{ 0x18ed72f8, "__pm_runtime_use_autosuspend" },
	{ 0x11c66087, "pm_runtime_set_autosuspend_delay" },
	{ 0x2bf355c4, "devm_gpiod_get_optional" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x53c6e7a4, "devm_iio_device_alloc" },
	{ 0xb98c9772, "__pm_runtime_set_status" },
	{ 0xfb4ec2db, "__pm_runtime_disable" },
	{ 0xe1f088fa, "iio_device_unregister" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x53b9230d, "i2c_smbus_xfer" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x1d67d36f, "i2c_smbus_read_word_data" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xa35e10d1, "gpiod_direction_input" },
	{ 0xf9a482f9, "msleep" },
	{ 0x127260fc, "gpiod_direction_output" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "industrialio");

MODULE_ALIAS("of:N*T*Cmelexis,mlx90614");
MODULE_ALIAS("of:N*T*Cmelexis,mlx90614C*");
MODULE_ALIAS("i2c:mlx90614");

MODULE_INFO(srcversion, "D197D9A4A7243053D453689");
