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
	{ 0x47916e2c, "pmbus_do_remove" },
	{ 0x875d03e0, "i2c_del_driver" },
	{ 0xb1a20db, "i2c_register_driver" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x92adffe2, "pmbus_get_fan_rate_device" },
	{ 0x60fa8386, "pmbus_read_word_data" },
	{ 0xb35586ed, "i2c_transfer" },
	{ 0x691d3501, "pmbus_set_page" },
	{ 0xbe985487, "pmbus_read_byte_data" },
	{ 0x485fb897, "pmbus_update_fan" },
	{ 0xc37437d2, "pmbus_get_fan_rate_cached" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xaed06536, "_dev_warn" },
	{ 0x459cabec, "pmbus_do_probe" },
	{ 0x1d67d36f, "i2c_smbus_read_word_data" },
	{ 0x7931933d, "i2c_smbus_write_byte_data" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "pmbus_core");

MODULE_ALIAS("of:N*T*Cmaxim,max31785");
MODULE_ALIAS("of:N*T*Cmaxim,max31785C*");
MODULE_ALIAS("of:N*T*Cmaxim,max31785a");
MODULE_ALIAS("of:N*T*Cmaxim,max31785aC*");
MODULE_ALIAS("i2c:max31785");
MODULE_ALIAS("i2c:max31785a");

MODULE_INFO(srcversion, "7379CD240E438CF21C7A176");
