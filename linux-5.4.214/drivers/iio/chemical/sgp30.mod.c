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
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xab37f21b, "wake_up_process" },
	{ 0xabaae129, "kthread_create_on_node" },
	{ 0x1a0f5952, "__devm_iio_device_register" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xaa8106bc, "crc8_populate_msb" },
	{ 0x53c6e7a4, "devm_iio_device_alloc" },
	{ 0xaed06536, "_dev_warn" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xe2aae5cc, "crc8" },
	{ 0x12a38747, "usleep_range" },
	{ 0x4fc58c0c, "i2c_transfer_buffer_flags" },
	{ 0x85e73dd7, "kthread_stop" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "industrialio,crc8");

MODULE_ALIAS("i2c:sgp30");
MODULE_ALIAS("i2c:sgpc3");
MODULE_ALIAS("of:N*T*Csensirion,sgp30");
MODULE_ALIAS("of:N*T*Csensirion,sgp30C*");
MODULE_ALIAS("of:N*T*Csensirion,sgpc3");
MODULE_ALIAS("of:N*T*Csensirion,sgpc3C*");

MODULE_INFO(srcversion, "EDB178D208B77F611362558");
