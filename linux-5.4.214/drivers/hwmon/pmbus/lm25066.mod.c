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
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x459cabec, "pmbus_do_probe" },
	{ 0x1c7db409, "i2c_smbus_read_byte_data" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x60fa8386, "pmbus_read_word_data" },
	{ 0x76f0cbc, "pmbus_write_byte" },
	{ 0x7bcd86f0, "pmbus_clear_cache" },
	{ 0xbf412b0d, "pmbus_write_word_data" },
	{ 0x8196a7df, "pmbus_write_byte_data" },
	{ 0xb70b1da4, "pmbus_get_driver_info" },
	{ 0xbe985487, "pmbus_read_byte_data" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "pmbus_core");

MODULE_ALIAS("i2c:lm25056");
MODULE_ALIAS("i2c:lm25066");
MODULE_ALIAS("i2c:lm5064");
MODULE_ALIAS("i2c:lm5066");
MODULE_ALIAS("i2c:lm5066i");

MODULE_INFO(srcversion, "3DE865279AD9C7BCAE8DBE6");
