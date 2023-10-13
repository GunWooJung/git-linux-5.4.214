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
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x1d67d36f, "i2c_smbus_read_word_data" },
	{ 0x7931933d, "i2c_smbus_write_byte_data" },
	{ 0x459cabec, "pmbus_do_probe" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0xbf412b0d, "pmbus_write_word_data" },
	{ 0xb70b1da4, "pmbus_get_driver_info" },
	{ 0x691d3501, "pmbus_set_page" },
	{ 0x60fa8386, "pmbus_read_word_data" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "pmbus_core");

MODULE_ALIAS("i2c:max34440");
MODULE_ALIAS("i2c:max34441");
MODULE_ALIAS("i2c:max34446");
MODULE_ALIAS("i2c:max34451");
MODULE_ALIAS("i2c:max34460");
MODULE_ALIAS("i2c:max34461");

MODULE_INFO(srcversion, "7060D5DEF84B339DA00C054");
