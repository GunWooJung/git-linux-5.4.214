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
	{ 0x7b5bd884, "pmbus_regulator_ops" },
	{ 0x47916e2c, "pmbus_do_remove" },
	{ 0x875d03e0, "i2c_del_driver" },
	{ 0xb1a20db, "i2c_register_driver" },
	{ 0x60fa8386, "pmbus_read_word_data" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xaed06536, "_dev_warn" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x96b29254, "strncasecmp" },
	{ 0x459cabec, "pmbus_do_probe" },
	{ 0x43830476, "i2c_smbus_read_block_data" },
	{ 0x1d67d36f, "i2c_smbus_read_word_data" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x76f0cbc, "pmbus_write_byte" },
	{ 0x12a38747, "usleep_range" },
	{ 0xbe985487, "pmbus_read_byte_data" },
	{ 0xb70b1da4, "pmbus_get_driver_info" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "pmbus_core");

MODULE_ALIAS("i2c:ltc2974");
MODULE_ALIAS("i2c:ltc2975");
MODULE_ALIAS("i2c:ltc2977");
MODULE_ALIAS("i2c:ltc2978");
MODULE_ALIAS("i2c:ltc2980");
MODULE_ALIAS("i2c:ltc3880");
MODULE_ALIAS("i2c:ltc3882");
MODULE_ALIAS("i2c:ltc3883");
MODULE_ALIAS("i2c:ltc3886");
MODULE_ALIAS("i2c:ltc3887");
MODULE_ALIAS("i2c:ltm2987");
MODULE_ALIAS("i2c:ltm4675");
MODULE_ALIAS("i2c:ltm4676");
MODULE_ALIAS("i2c:ltm4686");

MODULE_INFO(srcversion, "8D354D03F87ECDC6B4A77FB");
