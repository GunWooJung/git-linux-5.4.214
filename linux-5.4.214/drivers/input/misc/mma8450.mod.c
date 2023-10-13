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
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x66c54ff1, "input_event" },
	{ 0xcb315f1c, "i2c_smbus_read_i2c_block_data" },
	{ 0x1c7db409, "i2c_smbus_read_byte_data" },
	{ 0x4fb38246, "input_register_polled_device" },
	{ 0xd4419732, "input_set_abs_params" },
	{ 0xf333f957, "devm_input_allocate_polled_device" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x7931933d, "i2c_smbus_write_byte_data" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "input-polldev");

MODULE_ALIAS("of:N*T*Cfsl,mma8450");
MODULE_ALIAS("of:N*T*Cfsl,mma8450C*");
MODULE_ALIAS("i2c:mma8450");

MODULE_INFO(srcversion, "0334C3C2B6BBB14C98F9215");
