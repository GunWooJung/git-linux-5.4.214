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
	{ 0x875d03e0, "i2c_del_driver" },
	{ 0xb1a20db, "i2c_register_driver" },
	{ 0x1a0f5952, "__devm_iio_device_register" },
	{ 0xde9bbbb0, "devm_iio_triggered_buffer_setup" },
	{ 0x33560c9e, "devm_add_action" },
	{ 0xd111bb59, "_dev_info" },
	{ 0xaa8106bc, "crc8_populate_msb" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x53c6e7a4, "devm_iio_device_alloc" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xaed06536, "_dev_warn" },
	{ 0xf9a482f9, "msleep" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x19fd8cc1, "iio_push_to_buffers" },
	{ 0xab725c65, "iio_get_time_ns" },
	{ 0x89d7a69d, "iio_trigger_notify_done" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xe2aae5cc, "crc8" },
	{ 0x4fc58c0c, "i2c_transfer_buffer_flags" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "industrialio,industrialio-triggered-buffer,crc8");

MODULE_ALIAS("of:N*T*Csensirion,sps30");
MODULE_ALIAS("of:N*T*Csensirion,sps30C*");
MODULE_ALIAS("i2c:sps30");

MODULE_INFO(srcversion, "186D232E72E4F78B0A69BBB");
