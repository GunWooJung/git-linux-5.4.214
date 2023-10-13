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
	{ 0x94a09154, "input_register_device" },
	{ 0x51765820, "devm_request_threaded_irq" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc4fb10cd, "gpiod_set_value_cansleep" },
	{ 0x6a0ea99a, "touchscreen_parse_properties" },
	{ 0xd4419732, "input_set_abs_params" },
	{ 0x7ef2952e, "input_set_capability" },
	{ 0x2cc132c2, "devm_input_allocate_device" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x3bd1fe4c, "device_get_match_data" },
	{ 0x2bf355c4, "devm_gpiod_get_optional" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xfcec0987, "enable_irq" },
	{ 0xbca0b1e, "i2c_smbus_write_byte" },
	{ 0x7931933d, "i2c_smbus_write_byte_data" },
	{ 0xaed06536, "_dev_warn" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x33e16627, "touchscreen_report_pos" },
	{ 0x4fc58c0c, "i2c_transfer_buffer_flags" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x66c54ff1, "input_event" },
	{ 0x1c7db409, "i2c_smbus_read_byte_data" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("i2c:semtech_sx8650");
MODULE_ALIAS("i2c:semtech_sx8654");
MODULE_ALIAS("i2c:semtech_sx8655");
MODULE_ALIAS("i2c:semtech_sx8656");

MODULE_INFO(srcversion, "4F5452F970791635ECDBFC1");
