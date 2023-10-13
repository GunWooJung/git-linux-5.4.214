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
	{ 0xcce57a7f, "param_ops_ushort" },
	{ 0x47916e2c, "pmbus_do_remove" },
	{ 0x875d03e0, "i2c_del_driver" },
	{ 0xb1a20db, "i2c_register_driver" },
	{ 0x8a1d6948, "_dev_notice" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x459cabec, "pmbus_do_probe" },
	{ 0x1d67d36f, "i2c_smbus_read_word_data" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x96b29254, "strncasecmp" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x43830476, "i2c_smbus_read_block_data" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x60fa8386, "pmbus_read_word_data" },
	{ 0xbf412b0d, "pmbus_write_word_data" },
	{ 0x7bcd86f0, "pmbus_clear_cache" },
	{ 0xbe985487, "pmbus_read_byte_data" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x76f0cbc, "pmbus_write_byte" },
	{ 0xb70b1da4, "pmbus_get_driver_info" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "pmbus_core");

MODULE_ALIAS("i2c:bmr450");
MODULE_ALIAS("i2c:bmr451");
MODULE_ALIAS("i2c:bmr462");
MODULE_ALIAS("i2c:bmr463");
MODULE_ALIAS("i2c:bmr464");
MODULE_ALIAS("i2c:zl2004");
MODULE_ALIAS("i2c:zl2005");
MODULE_ALIAS("i2c:zl2006");
MODULE_ALIAS("i2c:zl2008");
MODULE_ALIAS("i2c:zl2105");
MODULE_ALIAS("i2c:zl2106");
MODULE_ALIAS("i2c:zl6100");
MODULE_ALIAS("i2c:zl6105");
MODULE_ALIAS("i2c:zl9101");
MODULE_ALIAS("i2c:zl9117");

MODULE_INFO(srcversion, "44264C0C10950ECA5C5E0DE");
