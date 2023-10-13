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
	{ 0x71349cdc, "iio_triggered_buffer_cleanup" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xd3bc5fa0, "iio_read_const_attr" },
	{ 0x89d7a69d, "iio_trigger_notify_done" },
	{ 0x263ed23b, "__x86_indirect_thunk_r12" },
	{ 0x1643a127, "regulator_disable" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xe1f088fa, "iio_device_unregister" },
	{ 0xab725c65, "iio_get_time_ns" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xab1b6c43, "__iio_device_register" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x3ccdc02b, "iio_device_claim_direct_mode" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x868b9359, "devm_regulator_get" },
	{ 0x12a38747, "usleep_range" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xb4e1369f, "iio_device_release_direct_mode" },
	{ 0x19fd8cc1, "iio_push_to_buffers" },
	{ 0xb8f1db1b, "iio_triggered_buffer_setup" },
	{ 0xfe543c51, "regulator_enable" },
};

MODULE_INFO(depends, "industrialio-triggered-buffer,industrialio");


MODULE_INFO(srcversion, "81F9D343FB487E3628A8298");
