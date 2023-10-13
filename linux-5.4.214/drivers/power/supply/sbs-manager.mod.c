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
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xd3a6aa10, "power_supply_get_drvdata" },
	{ 0x787bfb4b, "gpiochip_get_data" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x37e68967, "i2c_mux_add_adapter" },
	{ 0xbb2178f9, "devm_power_supply_register" },
	{ 0xe96d19e1, "devm_gpiochip_add_data" },
	{ 0x61853e9a, "device_property_present" },
	{ 0x15f68f5d, "devm_kasprintf" },
	{ 0x7d725735, "devm_kmemdup" },
	{ 0x79b1c1fa, "i2c_mux_alloc" },
	{ 0x1e6d26a8, "strstr" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x2b98a5bc, "i2c_mux_del_adapters" },
	{ 0xf928c918, "power_supply_changed" },
	{ 0xfddb53c8, "device_for_each_child" },
	{ 0xaed06536, "_dev_warn" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x216ffa13, "i2c_verify_client" },
	{ 0xdcd5c2e5, "i2c_smbus_write_word_data" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x1d67d36f, "i2c_smbus_read_word_data" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "i2c-mux");

MODULE_ALIAS("i2c:sbs-manager");
MODULE_ALIAS("i2c:ltc1760");

MODULE_INFO(srcversion, "E21CDFA0520B510AC09C116");
