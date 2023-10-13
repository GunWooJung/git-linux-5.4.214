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
	{ 0x3f556282, "simple_attr_release" },
	{ 0xa615d9a, "simple_attr_write" },
	{ 0x2a456f5f, "simple_attr_read" },
	{ 0x91fc7183, "generic_file_llseek" },
	{ 0x32ee9868, "simple_open" },
	{ 0x875d03e0, "i2c_del_driver" },
	{ 0xb1a20db, "i2c_register_driver" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xfcec0987, "enable_irq" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xd38e0687, "desc_to_gpio" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x4fc0c5ca, "device_init_wakeup" },
	{ 0xd0a46a6a, "debugfs_create_file" },
	{ 0xe8febb33, "debugfs_create_u16" },
	{ 0x7f3966fa, "debugfs_create_dir" },
	{ 0xecadd7c7, "dev_driver_string" },
	{ 0x94a09154, "input_register_device" },
	{ 0xa1c2b6d1, "devm_device_add_group" },
	{ 0x51765820, "devm_request_threaded_irq" },
	{ 0xb662a539, "irq_get_irq_data" },
	{ 0xc32e9ece, "input_mt_init_slots" },
	{ 0x6a0ea99a, "touchscreen_parse_properties" },
	{ 0xd4419732, "input_set_abs_params" },
	{ 0xacdeb71f, "device_property_read_u32_array" },
	{ 0x754d539c, "strlen" },
	{ 0x69acdf38, "memcpy" },
	{ 0xa916b694, "strnlen" },
	{ 0x349cba85, "strchr" },
	{ 0x96b29254, "strncasecmp" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x2cc132c2, "devm_input_allocate_device" },
	{ 0xf9a482f9, "msleep" },
	{ 0xc4fb10cd, "gpiod_set_value_cansleep" },
	{ 0x2bf355c4, "devm_gpiod_get_optional" },
	{ 0x3bd1fe4c, "device_get_match_data" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x12a38747, "usleep_range" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0xaed06536, "_dev_warn" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x96848186, "scnprintf" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x703de441, "simple_attr_open" },
	{ 0xa94ccfc0, "input_mt_report_pointer_emulation" },
	{ 0x33e16627, "touchscreen_report_pos" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x90fade75, "input_mt_report_slot_state" },
	{ 0x66c54ff1, "input_event" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xb35586ed, "i2c_transfer" },
	{ 0x37a0cba, "kfree" },
	{ 0x5b1c5c13, "debugfs_remove_recursive" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cedt,edt-ft5206");
MODULE_ALIAS("of:N*T*Cedt,edt-ft5206C*");
MODULE_ALIAS("of:N*T*Cedt,edt-ft5306");
MODULE_ALIAS("of:N*T*Cedt,edt-ft5306C*");
MODULE_ALIAS("of:N*T*Cedt,edt-ft5406");
MODULE_ALIAS("of:N*T*Cedt,edt-ft5406C*");
MODULE_ALIAS("of:N*T*Cedt,edt-ft5506");
MODULE_ALIAS("of:N*T*Cedt,edt-ft5506C*");
MODULE_ALIAS("of:N*T*Cevervision,ev-ft5726");
MODULE_ALIAS("of:N*T*Cevervision,ev-ft5726C*");
MODULE_ALIAS("of:N*T*Cfocaltech,ft6236");
MODULE_ALIAS("of:N*T*Cfocaltech,ft6236C*");
MODULE_ALIAS("i2c:edt-ft5x06");
MODULE_ALIAS("i2c:edt-ft5506");
MODULE_ALIAS("i2c:ev-ft5726");
MODULE_ALIAS("i2c:ft6236");

MODULE_INFO(srcversion, "799C5BAB14A9D98AF7D66C8");
