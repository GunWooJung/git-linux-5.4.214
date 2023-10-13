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
	{ 0xfcec0987, "enable_irq" },
	{ 0xaed06536, "_dev_warn" },
	{ 0x1c7db409, "i2c_smbus_read_byte_data" },
	{ 0x66c54ff1, "input_event" },
	{ 0x377a9732, "i2c_smbus_read_byte" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x9b9a702f, "devm_led_classdev_register_ext" },
	{ 0x51765820, "devm_request_threaded_irq" },
	{ 0x94a09154, "input_register_device" },
	{ 0x7ef2952e, "input_set_capability" },
	{ 0x2cc132c2, "devm_input_allocate_device" },
	{ 0x33560c9e, "devm_add_action" },
	{ 0xf9a482f9, "msleep" },
	{ 0xeb94b6dd, "regulator_bulk_enable" },
	{ 0xec688f13, "devm_regulator_bulk_get" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x72f16fbc, "regulator_set_voltage" },
	{ 0x7931933d, "i2c_smbus_write_byte_data" },
	{ 0xbca0b1e, "i2c_smbus_write_byte" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x5bb6172e, "regulator_bulk_disable" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Ccypress,tm2-touchkey");
MODULE_ALIAS("of:N*T*Ccypress,tm2-touchkeyC*");
MODULE_ALIAS("of:N*T*Ccypress,midas-touchkey");
MODULE_ALIAS("of:N*T*Ccypress,midas-touchkeyC*");
MODULE_ALIAS("of:N*T*Ccypress,aries-touchkey");
MODULE_ALIAS("of:N*T*Ccypress,aries-touchkeyC*");
MODULE_ALIAS("of:N*T*Ccoreriver,tc360-touchkey");
MODULE_ALIAS("of:N*T*Ccoreriver,tc360-touchkeyC*");
MODULE_ALIAS("i2c:tm2-touchkey");

MODULE_INFO(srcversion, "9B15999D6DB51D634FA0026");
