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
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xaed06536, "_dev_warn" },
	{ 0xe8c403, "device_get_next_child_node" },
	{ 0x14efa785, "fwnode_property_read_string" },
	{ 0x76f87430, "fwnode_property_read_u32_array" },
	{ 0xa0e37b89, "device_get_child_node_count" },
	{ 0xe96d19e1, "devm_gpiochip_add_data" },
	{ 0x9b9a702f, "devm_led_classdev_register_ext" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x1c7db409, "i2c_smbus_read_byte_data" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x7931933d, "i2c_smbus_write_byte_data" },
	{ 0x787bfb4b, "gpiochip_get_data" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cnxp,pca9550");
MODULE_ALIAS("of:N*T*Cnxp,pca9550C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9551");
MODULE_ALIAS("of:N*T*Cnxp,pca9551C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9552");
MODULE_ALIAS("of:N*T*Cnxp,pca9552C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9553");
MODULE_ALIAS("of:N*T*Cnxp,pca9553C*");
MODULE_ALIAS("i2c:pca9550");
MODULE_ALIAS("i2c:pca9551");
MODULE_ALIAS("i2c:pca9552");
MODULE_ALIAS("i2c:pca9553");

MODULE_INFO(srcversion, "4FC3BD06E3EE90C16F80E3F");
