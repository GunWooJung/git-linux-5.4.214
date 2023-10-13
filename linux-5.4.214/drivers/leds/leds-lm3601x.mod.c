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
	{ 0x879dd3a9, "led_classdev_flash_unregister" },
	{ 0xc1889514, "regmap_update_bits_base" },
	{ 0x904a8908, "regmap_write" },
	{ 0x36f1a2b6, "regmap_read" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xaed06536, "_dev_warn" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xc62f0779, "led_classdev_flash_register_ext" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xb8b5aa45, "__devm_regmap_init_i2c" },
	{ 0x65e33f30, "fwnode_handle_put" },
	{ 0x76f87430, "fwnode_property_read_u32_array" },
	{ 0xe8c403, "device_get_next_child_node" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "led-class-flash");

MODULE_ALIAS("of:N*T*Cti,lm36010");
MODULE_ALIAS("of:N*T*Cti,lm36010C*");
MODULE_ALIAS("of:N*T*Cti,lm36011");
MODULE_ALIAS("of:N*T*Cti,lm36011C*");
MODULE_ALIAS("i2c:LM36010");
MODULE_ALIAS("i2c:LM36011");

MODULE_INFO(srcversion, "C11319AAC6B4BC14358DC24");
