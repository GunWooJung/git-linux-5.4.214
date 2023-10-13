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
	{ 0x7580c311, "serdev_device_write_wakeup" },
	{ 0x86f434e2, "driver_unregister" },
	{ 0xf6666592, "__serdev_device_driver_register" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x89d7a69d, "iio_trigger_notify_done" },
	{ 0x19fd8cc1, "iio_push_to_buffers" },
	{ 0xab725c65, "iio_get_time_ns" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x1a0f5952, "__devm_iio_device_register" },
	{ 0xde9bbbb0, "devm_iio_triggered_buffer_setup" },
	{ 0x33560c9e, "devm_add_action" },
	{ 0x15b7eaf0, "serdev_device_set_parity" },
	{ 0xfaec895c, "serdev_device_set_flow_control" },
	{ 0xaa66b3f4, "serdev_device_set_baudrate" },
	{ 0x9fb914c9, "devm_serdev_device_open" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x53c6e7a4, "devm_iio_device_alloc" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xa33c0eac, "wait_for_completion_interruptible_timeout" },
	{ 0xbcd1e5ae, "serdev_device_write" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x29361773, "complete" },
	{ 0x69acdf38, "memcpy" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "industrialio,industrialio-triggered-buffer");

MODULE_ALIAS("of:N*T*Cplantower,pms1003");
MODULE_ALIAS("of:N*T*Cplantower,pms1003C*");
MODULE_ALIAS("of:N*T*Cplantower,pms3003");
MODULE_ALIAS("of:N*T*Cplantower,pms3003C*");
MODULE_ALIAS("of:N*T*Cplantower,pms5003");
MODULE_ALIAS("of:N*T*Cplantower,pms5003C*");
MODULE_ALIAS("of:N*T*Cplantower,pms6003");
MODULE_ALIAS("of:N*T*Cplantower,pms6003C*");
MODULE_ALIAS("of:N*T*Cplantower,pms7003");
MODULE_ALIAS("of:N*T*Cplantower,pms7003C*");
MODULE_ALIAS("of:N*T*Cplantower,pmsa003");
MODULE_ALIAS("of:N*T*Cplantower,pmsa003C*");

MODULE_INFO(srcversion, "7951D0094A2B364B10122F4");
