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
	{ 0x8804d3fc, "__rtc_register_device" },
	{ 0x9fb3106c, "rtc_add_group" },
	{ 0x51765820, "devm_request_threaded_irq" },
	{ 0x70648c92, "devm_watchdog_register_device" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xe10f5c53, "devm_rtc_allocate_device" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xb6936ffe, "_bcd2bin" },
	{ 0xcb315f1c, "i2c_smbus_read_i2c_block_data" },
	{ 0x81555aa5, "i2c_smbus_write_i2c_block_data" },
	{ 0x80ca5026, "_bin2bcd" },
	{ 0x95888aef, "_dev_alert" },
	{ 0x4eed1932, "rtc_update_irq" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x7931933d, "i2c_smbus_write_byte_data" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x1c7db409, "i2c_smbus_read_byte_data" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("i2c:abx80x");
MODULE_ALIAS("i2c:ab0801");
MODULE_ALIAS("i2c:ab0803");
MODULE_ALIAS("i2c:ab0804");
MODULE_ALIAS("i2c:ab0805");
MODULE_ALIAS("i2c:ab1801");
MODULE_ALIAS("i2c:ab1803");
MODULE_ALIAS("i2c:ab1804");
MODULE_ALIAS("i2c:ab1805");
MODULE_ALIAS("i2c:rv1805");

MODULE_INFO(srcversion, "A190EA3AD84CD3F0B97AF90");
