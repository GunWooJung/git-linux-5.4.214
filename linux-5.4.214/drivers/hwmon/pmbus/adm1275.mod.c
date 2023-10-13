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
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x60fa8386, "pmbus_read_word_data" },
	{ 0xbe985487, "pmbus_read_byte_data" },
	{ 0xbf412b0d, "pmbus_write_word_data" },
	{ 0xb70b1da4, "pmbus_get_driver_info" },
	{ 0xdcd5c2e5, "i2c_smbus_write_word_data" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x8a1d6948, "_dev_notice" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1d67d36f, "i2c_smbus_read_word_data" },
	{ 0x459cabec, "pmbus_do_probe" },
	{ 0x7931933d, "i2c_smbus_write_byte_data" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0xf05c7b8, "__x86_indirect_thunk_r15" },
	{ 0x1c7db409, "i2c_smbus_read_byte_data" },
	{ 0x96b29254, "strncasecmp" },
	{ 0x43830476, "i2c_smbus_read_block_data" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "pmbus_core");

MODULE_ALIAS("i2c:adm1075");
MODULE_ALIAS("i2c:adm1272");
MODULE_ALIAS("i2c:adm1275");
MODULE_ALIAS("i2c:adm1276");
MODULE_ALIAS("i2c:adm1278");
MODULE_ALIAS("i2c:adm1293");
MODULE_ALIAS("i2c:adm1294");

MODULE_INFO(srcversion, "88608749633B15FF335CD0A");
