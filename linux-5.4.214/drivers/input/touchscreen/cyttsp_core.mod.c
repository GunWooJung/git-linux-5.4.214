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
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xf9a482f9, "msleep" },
	{ 0x6a0ea99a, "touchscreen_parse_properties" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x66c54ff1, "input_event" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x7ef2952e, "input_set_capability" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xc32e9ece, "input_mt_init_slots" },
	{ 0xca2ca1f5, "device_property_read_u8_array" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xacdeb71f, "device_property_read_u32_array" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x94a09154, "input_register_device" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x2bf355c4, "devm_gpiod_get_optional" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x2cc132c2, "devm_input_allocate_device" },
	{ 0x90fade75, "input_mt_report_slot_state" },
	{ 0xc4fb10cd, "gpiod_set_value_cansleep" },
	{ 0x29361773, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x51765820, "devm_request_threaded_irq" },
	{ 0x61853e9a, "device_property_present" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "F551C39C618D6BC80826993");
