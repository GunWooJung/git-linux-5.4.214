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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xed93c0b3, "module_layout" },
	{ 0xa24f23d8, "__request_module" },
	{ 0xf9a482f9, "msleep" },
	{ 0xef7f967d, "dibusb_read_eeprom_byte" },
	{ 0x65239666, "dib3000mc_pid_parse" },
	{ 0x4f7bbaf2, "dib3000mc_pid_control" },
	{ 0xe37a8d7e, "dib3000mc_get_tuner_i2c_master" },
	{ 0xc5850110, "printk" },
	{ 0xf2662b42, "dib3000mc_set_config" },
	{ 0x868784cb, "__symbol_get" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x6e9dd606, "__symbol_put" },
};

MODULE_INFO(depends, "dvb-usb-dibusb-common,dib3000mc");


MODULE_INFO(srcversion, "046B743F062D5C559E4970D");
