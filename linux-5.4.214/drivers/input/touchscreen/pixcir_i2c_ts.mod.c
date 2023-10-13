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
	{ 0xd111bb59, "_dev_info" },
	{ 0x94a09154, "input_register_device" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x51765820, "devm_request_threaded_irq" },
	{ 0x2bf355c4, "devm_gpiod_get_optional" },
	{ 0xa08d547b, "devm_gpiod_get" },
	{ 0xc32e9ece, "input_mt_init_slots" },
	{ 0xd4419732, "input_set_abs_params" },
	{ 0x2cc132c2, "devm_input_allocate_device" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x84aa8e4a, "input_mt_assign_slots" },
	{ 0xf9a482f9, "msleep" },
	{ 0x9e379360, "gpiod_get_value_cansleep" },
	{ 0x54d0c27, "input_mt_sync_frame" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x20a18f36, "input_mt_get_slot_by_key" },
	{ 0x90fade75, "input_mt_report_slot_state" },
	{ 0x66c54ff1, "input_event" },
	{ 0xcf9b558d, "touchscreen_set_mt_pos" },
	{ 0x4fc58c0c, "i2c_transfer_buffer_flags" },
	{ 0xc4fb10cd, "gpiod_set_value_cansleep" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x7931933d, "i2c_smbus_write_byte_data" },
	{ 0x1c7db409, "i2c_smbus_read_byte_data" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("i2c:pixcir_ts");
MODULE_ALIAS("i2c:pixcir_tangoc");

MODULE_INFO(srcversion, "6B8A2E1DB03E419801775F8");
