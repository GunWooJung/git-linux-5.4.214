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
	{ 0xc5850110, "printk" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x5bb6172e, "regulator_bulk_disable" },
	{ 0x96c3d9bb, "lis3lv02d_init_device" },
	{ 0x12a38747, "usleep_range" },
	{ 0xeb94b6dd, "regulator_bulk_enable" },
	{ 0xeec88271, "regulator_bulk_get" },
	{ 0xcb315f1c, "i2c_smbus_read_i2c_block_data" },
	{ 0x1c7db409, "i2c_smbus_read_byte_data" },
	{ 0x7931933d, "i2c_smbus_write_byte_data" },
	{ 0xedf79230, "regulator_bulk_free" },
	{ 0x142794db, "lis3lv02d_remove_fs" },
	{ 0xf30de827, "lis3_dev" },
	{ 0xbbcee3b5, "lis3lv02d_joystick_disable" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x9d1f37e7, "lis3lv02d_poweroff" },
	{ 0xe7db0ab2, "lis3lv02d_poweron" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "lis3lv02d");

MODULE_ALIAS("i2c:lis3lv02d");
MODULE_ALIAS("i2c:lis331dlh");

MODULE_INFO(srcversion, "454EE78B7117AD7C4931DC8");
