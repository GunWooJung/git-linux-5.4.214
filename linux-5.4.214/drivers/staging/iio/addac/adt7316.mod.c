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

MODULE_INFO(staging, "Y");

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xed93c0b3, "module_layout" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xab725c65, "iio_get_time_ns" },
	{ 0x53c6e7a4, "devm_iio_device_alloc" },
	{ 0x6a6e05bf, "kstrtou8" },
	{ 0x1a0f5952, "__devm_iio_device_register" },
	{ 0xb662a539, "irq_get_irq_data" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xd111bb59, "_dev_info" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x4af6ddf0, "kstrtou16" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x2bf355c4, "devm_gpiod_get_optional" },
	{ 0xc706e0e9, "iio_push_event" },
	{ 0xe23f1472, "gpiod_set_value" },
	{ 0x51765820, "devm_request_threaded_irq" },
};

MODULE_INFO(depends, "industrialio");


MODULE_INFO(srcversion, "91F9A3B2842FCC1419694B8");
