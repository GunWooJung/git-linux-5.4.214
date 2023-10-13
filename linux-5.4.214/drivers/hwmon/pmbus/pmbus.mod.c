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
	{ 0x459cabec, "pmbus_do_probe" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xf400e995, "pmbus_clear_faults" },
	{ 0x691d3501, "pmbus_set_page" },
	{ 0xbe985487, "pmbus_read_byte_data" },
	{ 0x205d881c, "pmbus_check_word_register" },
	{ 0x85cf6fb7, "pmbus_check_byte_register" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "pmbus_core");

MODULE_ALIAS("i2c:adp4000");
MODULE_ALIAS("i2c:bmr453");
MODULE_ALIAS("i2c:bmr454");
MODULE_ALIAS("i2c:dps460");
MODULE_ALIAS("i2c:dps650ab");
MODULE_ALIAS("i2c:dps800");
MODULE_ALIAS("i2c:mdt040");
MODULE_ALIAS("i2c:ncp4200");
MODULE_ALIAS("i2c:ncp4208");
MODULE_ALIAS("i2c:pdt003");
MODULE_ALIAS("i2c:pdt006");
MODULE_ALIAS("i2c:pdt012");
MODULE_ALIAS("i2c:pmbus");
MODULE_ALIAS("i2c:sgd009");
MODULE_ALIAS("i2c:tps40400");
MODULE_ALIAS("i2c:tps544b20");
MODULE_ALIAS("i2c:tps544b25");
MODULE_ALIAS("i2c:tps544c20");
MODULE_ALIAS("i2c:tps544c25");
MODULE_ALIAS("i2c:udt020");

MODULE_INFO(srcversion, "6EB8195405CBC35304F2BEA");
