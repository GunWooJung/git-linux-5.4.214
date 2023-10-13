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
	{ 0xa24f23d8, "__request_module" },
	{ 0x449962d6, "dvb_usb_device_exit" },
	{ 0x2bb2479a, "dvb_usb_device_init" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x947be5cd, "param_ops_short" },
	{ 0xb95a6e6d, "usb_deregister" },
	{ 0xc5850110, "printk" },
	{ 0x868784cb, "__symbol_get" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x90f52a6d, "dibusb_power_ctrl" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x6eed2630, "param_array_ops" },
	{ 0x64c8b793, "dibusb2_0_streaming_ctrl" },
	{ 0xaf37d977, "usb_register_driver" },
	{ 0xe999cb82, "dibusb_i2c_algo" },
	{ 0x6e9dd606, "__symbol_put" },
};

MODULE_INFO(depends, "dvb-usb,dvb-usb-dibusb-common");

MODULE_ALIAS("usb:v15F4p0001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15F4p0015d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "FA1F4472ACBE43580D540D9");
