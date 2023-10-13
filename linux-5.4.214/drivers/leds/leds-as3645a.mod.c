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
	{ 0xc62f0779, "led_classdev_flash_register_ext" },
	{ 0xb372d8f7, "led_classdev_register_ext" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xaed06536, "_dev_warn" },
	{ 0x76f87430, "fwnode_property_read_u32_array" },
	{ 0xcee4d161, "fwnode_handle_get" },
	{ 0xa0b493f3, "fwnode_get_next_child_node" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0xd0865ac4, "dev_fwnode" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xb3c8aded, "v4l2_flash_indicator_init" },
	{ 0x2ec19570, "v4l2_flash_init" },
	{ 0x754d539c, "strlen" },
	{ 0x65e33f30, "fwnode_handle_put" },
	{ 0x6b2998d4, "led_classdev_unregister" },
	{ 0x879dd3a9, "led_classdev_flash_unregister" },
	{ 0x843fb158, "v4l2_flash_release" },
	{ 0x7931933d, "i2c_smbus_write_byte_data" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x1c7db409, "i2c_smbus_read_byte_data" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "led-class-flash,v4l2-flash-led-class");

MODULE_ALIAS("of:N*T*Cams,as3645a");
MODULE_ALIAS("of:N*T*Cams,as3645aC*");
MODULE_ALIAS("i2c:as3645a");

MODULE_INFO(srcversion, "633AEAA0F9CB61657F5B537");
