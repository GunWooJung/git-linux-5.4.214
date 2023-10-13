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
	{ 0x69acdf38, "memcpy" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x37a0cba, "kfree" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x94a09154, "input_register_device" },
	{ 0xa1c2b6d1, "devm_device_add_group" },
	{ 0x51765820, "devm_request_threaded_irq" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xa08d547b, "devm_gpiod_get" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xdb7345ba, "input_alloc_absinfo" },
	{ 0x7ef2952e, "input_set_capability" },
	{ 0x2cc132c2, "devm_input_allocate_device" },
	{ 0xc32e9ece, "input_mt_init_slots" },
	{ 0x6a0ea99a, "touchscreen_parse_properties" },
	{ 0xc4fb10cd, "gpiod_set_value_cansleep" },
	{ 0x54d0c27, "input_mt_sync_frame" },
	{ 0x90fade75, "input_mt_report_slot_state" },
	{ 0x66c54ff1, "input_event" },
	{ 0xf9a482f9, "msleep" },
	{ 0xb35586ed, "i2c_transfer" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x5c9109de, "release_firmware" },
	{ 0x50cf7585, "hex2bin" },
	{ 0x80500894, "request_firmware" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x4fc58c0c, "i2c_transfer_buffer_flags" },
	{ 0x12a38747, "usleep_range" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cazoteq,iqs550");
MODULE_ALIAS("of:N*T*Cazoteq,iqs550C*");
MODULE_ALIAS("of:N*T*Cazoteq,iqs572");
MODULE_ALIAS("of:N*T*Cazoteq,iqs572C*");
MODULE_ALIAS("of:N*T*Cazoteq,iqs525");
MODULE_ALIAS("of:N*T*Cazoteq,iqs525C*");
MODULE_ALIAS("i2c:iqs550");
MODULE_ALIAS("i2c:iqs572");
MODULE_ALIAS("i2c:iqs525");

MODULE_INFO(srcversion, "DE7173C3EF861DFF273A4E6");
