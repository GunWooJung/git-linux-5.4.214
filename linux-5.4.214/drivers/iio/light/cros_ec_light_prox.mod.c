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
	{ 0x334f4fb7, "cros_ec_sensors_core_read_avail" },
	{ 0x8c0a354e, "cros_ec_sensors_pm_ops" },
	{ 0xa99a62a3, "platform_driver_unregister" },
	{ 0x19af53eb, "__platform_driver_register" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x4da63ca1, "cros_ec_sensors_core_read" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xd6688d68, "cros_ec_sensors_core_write" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x7ed564e4, "cros_ec_motion_send_host_cmd" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xaed06536, "_dev_warn" },
	{ 0x1a0f5952, "__devm_iio_device_register" },
	{ 0xde9bbbb0, "devm_iio_triggered_buffer_setup" },
	{ 0xd6c924b8, "cros_ec_sensors_read_cmd" },
	{ 0x9971dac4, "cros_ec_sensors_capture" },
	{ 0xfe9c974f, "cros_ec_sensors_ext_info" },
	{ 0x386cc9e8, "cros_ec_sensors_core_init" },
	{ 0x53c6e7a4, "devm_iio_device_alloc" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "cros_ec_sensors_core,industrialio,industrialio-triggered-buffer");

MODULE_ALIAS("platform:cros-ec-prox");
MODULE_ALIAS("platform:cros-ec-light");

MODULE_INFO(srcversion, "C4021C30BCCB9D258525A02");
