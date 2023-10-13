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
	{ 0x356461c8, "rtc_time64_to_tm" },
	{ 0x4f2250ba, "rtc_tm_to_time64" },
	{ 0x4eed1932, "rtc_update_irq" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xb6936ffe, "_bcd2bin" },
	{ 0xb35586ed, "i2c_transfer" },
	{ 0x4c12b82d, "devm_clk_register" },
	{ 0x8804d3fc, "__rtc_register_device" },
	{ 0x51765820, "devm_request_threaded_irq" },
	{ 0xe10f5c53, "devm_rtc_allocate_device" },
	{ 0x8d40871c, "device_set_wakeup_capable" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x80ca5026, "_bin2bcd" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x4fc58c0c, "i2c_transfer_buffer_flags" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("i2c:pcf8563");
MODULE_ALIAS("i2c:rtc8564");

MODULE_INFO(srcversion, "3348EF6C576B13BB999A646");
