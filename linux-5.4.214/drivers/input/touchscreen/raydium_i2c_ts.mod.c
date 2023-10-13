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
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xa1c2b6d1, "devm_device_add_group" },
	{ 0x51765820, "devm_request_threaded_irq" },
	{ 0x94a09154, "input_register_device" },
	{ 0xc32e9ece, "input_mt_init_slots" },
	{ 0xdb7345ba, "input_alloc_absinfo" },
	{ 0xd4419732, "input_set_abs_params" },
	{ 0x2cc132c2, "devm_input_allocate_device" },
	{ 0x53b9230d, "i2c_smbus_xfer" },
	{ 0x33560c9e, "devm_add_action" },
	{ 0x2bf355c4, "devm_gpiod_get_optional" },
	{ 0x868b9359, "devm_regulator_get" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0x54d0c27, "input_mt_sync_frame" },
	{ 0x90fade75, "input_mt_report_slot_state" },
	{ 0x66c54ff1, "input_event" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x5c9109de, "release_firmware" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x80500894, "request_firmware" },
	{ 0xfb384d37, "kasprintf" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xaed06536, "_dev_warn" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb35586ed, "i2c_transfer" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xfe543c51, "regulator_enable" },
	{ 0x1643a127, "regulator_disable" },
	{ 0xc4fb10cd, "gpiod_set_value_cansleep" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xf9a482f9, "msleep" },
	{ 0x37a0cba, "kfree" },
	{ 0x4fc58c0c, "i2c_transfer_buffer_flags" },
	{ 0x69acdf38, "memcpy" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("acpi*:RAYD0001:*");
MODULE_ALIAS("i2c:raydium_i2c");
MODULE_ALIAS("i2c:rm32380");

MODULE_INFO(srcversion, "13ADF74F466883BA4B32B88");
