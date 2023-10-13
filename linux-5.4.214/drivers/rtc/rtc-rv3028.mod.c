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
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x51765820, "devm_request_threaded_irq" },
	{ 0xcd47c63, "rtc_nvmem_register" },
	{ 0x8804d3fc, "__rtc_register_device" },
	{ 0x9fb3106c, "rtc_add_group" },
	{ 0xacdeb71f, "device_property_read_u32_array" },
	{ 0xe10f5c53, "devm_rtc_allocate_device" },
	{ 0xb8b5aa45, "__devm_regmap_init_i2c" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x12a38747, "usleep_range" },
	{ 0x3adba3e3, "sysfs_notify" },
	{ 0x4eed1932, "rtc_update_irq" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x904a8908, "regmap_write" },
	{ 0x356461c8, "rtc_time64_to_tm" },
	{ 0x80ca5026, "_bin2bcd" },
	{ 0x4f2250ba, "rtc_tm_to_time64" },
	{ 0x5838f6c9, "rtc_valid_tm" },
	{ 0xb6936ffe, "_bcd2bin" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xaed06536, "_dev_warn" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x36f1a2b6, "regmap_read" },
	{ 0xc1889514, "regmap_update_bits_base" },
	{ 0xe2b72930, "regmap_bulk_write" },
	{ 0xd9729ca4, "regmap_bulk_read" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cmicrocrystal,rv3028");
MODULE_ALIAS("of:N*T*Cmicrocrystal,rv3028C*");

MODULE_INFO(srcversion, "F8E67731EC2E4F29D50526D");
