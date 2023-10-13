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
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xdcd5c2e5, "i2c_smbus_write_word_data" },
	{ 0x1d67d36f, "i2c_smbus_read_word_data" },
	{ 0xe1980589, "ad5592r_probe" },
	{ 0xd3bb3ced, "ad5592r_remove" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "ad5592r-base");

MODULE_ALIAS("acpi*:ADS5593:*");
MODULE_ALIAS("of:N*T*Cadi,ad5593r");
MODULE_ALIAS("of:N*T*Cadi,ad5593rC*");
MODULE_ALIAS("i2c:ad5593r");

MODULE_INFO(srcversion, "4C68D73475D91F4A2F0210A");
