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
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0x4fc0c5ca, "device_init_wakeup" },
	{ 0x51765820, "devm_request_threaded_irq" },
	{ 0x8804d3fc, "__rtc_register_device" },
	{ 0xcd47c63, "rtc_nvmem_register" },
	{ 0x9fb3106c, "rtc_add_group" },
	{ 0xe10f5c53, "devm_rtc_allocate_device" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x3adba3e3, "sysfs_notify" },
	{ 0xaed06536, "_dev_warn" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x4eed1932, "rtc_update_irq" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x80ca5026, "_bin2bcd" },
	{ 0x4f2250ba, "rtc_tm_to_time64" },
	{ 0x5838f6c9, "rtc_valid_tm" },
	{ 0xb6936ffe, "_bcd2bin" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x58f84c2d, "seq_printf" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xcb315f1c, "i2c_smbus_read_i2c_block_data" },
	{ 0x81555aa5, "i2c_smbus_write_i2c_block_data" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x7931933d, "i2c_smbus_write_byte_data" },
	{ 0x1c7db409, "i2c_smbus_read_byte_data" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cisil,isl1208");
MODULE_ALIAS("of:N*T*Cisil,isl1208C*");
MODULE_ALIAS("of:N*T*Cisil,isl1209");
MODULE_ALIAS("of:N*T*Cisil,isl1209C*");
MODULE_ALIAS("of:N*T*Cisil,isl1218");
MODULE_ALIAS("of:N*T*Cisil,isl1218C*");
MODULE_ALIAS("of:N*T*Cisil,isl1219");
MODULE_ALIAS("of:N*T*Cisil,isl1219C*");
MODULE_ALIAS("i2c:isl1208");
MODULE_ALIAS("i2c:isl1209");
MODULE_ALIAS("i2c:isl1218");
MODULE_ALIAS("i2c:isl1219");

MODULE_INFO(srcversion, "C53982291104B3516C6C698");
