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
	{ 0xb2400ab0, "pm_runtime_force_resume" },
	{ 0xe54f5faf, "pm_runtime_force_suspend" },
	{ 0x875d03e0, "i2c_del_driver" },
	{ 0xb1a20db, "i2c_register_driver" },
	{ 0x37029a28, "iio_trigger_unregister" },
	{ 0x71349cdc, "iio_triggered_buffer_cleanup" },
	{ 0xb98c9772, "__pm_runtime_set_status" },
	{ 0xfb4ec2db, "__pm_runtime_disable" },
	{ 0xe1f088fa, "iio_device_unregister" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x1643a127, "regulator_disable" },
	{ 0x12a38747, "usleep_range" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x7931933d, "i2c_smbus_write_byte_data" },
	{ 0xfe543c51, "regulator_enable" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "industrialio,industrialio-triggered-buffer");

MODULE_ALIAS("i2c:mma8451");
MODULE_ALIAS("i2c:mma8452");
MODULE_ALIAS("i2c:mma8453");
MODULE_ALIAS("i2c:mma8652");
MODULE_ALIAS("i2c:mma8653");
MODULE_ALIAS("i2c:fxls8471");
MODULE_ALIAS("of:N*T*Cfsl,mma8451");
MODULE_ALIAS("of:N*T*Cfsl,mma8451C*");
MODULE_ALIAS("of:N*T*Cfsl,mma8452");
MODULE_ALIAS("of:N*T*Cfsl,mma8452C*");
MODULE_ALIAS("of:N*T*Cfsl,mma8453");
MODULE_ALIAS("of:N*T*Cfsl,mma8453C*");
MODULE_ALIAS("of:N*T*Cfsl,mma8652");
MODULE_ALIAS("of:N*T*Cfsl,mma8652C*");
MODULE_ALIAS("of:N*T*Cfsl,mma8653");
MODULE_ALIAS("of:N*T*Cfsl,mma8653C*");
MODULE_ALIAS("of:N*T*Cfsl,fxls8471");
MODULE_ALIAS("of:N*T*Cfsl,fxls8471C*");

MODULE_INFO(srcversion, "8DB00EC2CA00137542F2FCE");
