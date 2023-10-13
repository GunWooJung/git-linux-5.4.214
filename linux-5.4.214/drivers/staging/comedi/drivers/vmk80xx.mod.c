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

MODULE_INFO(staging, "Y");

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xed93c0b3, "module_layout" },
	{ 0x66dfce4c, "comedi_usb_auto_unconfig" },
	{ 0x7c83ffcc, "comedi_usb_driver_unregister" },
	{ 0xdf8502bc, "comedi_usb_driver_register" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xdb2044b2, "range_unipolar5" },
	{ 0x390a0822, "comedi_alloc_subdevices" },
	{ 0xe17d701, "comedi_alloc_devpriv" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x37a0cba, "kfree" },
	{ 0x29b499ab, "comedi_to_usb_interface" },
	{ 0x64cb354c, "comedi_dio_update_state" },
	{ 0xb678366f, "int_sqrt" },
	{ 0xcf2a6966, "up" },
	{ 0x6626afca, "down" },
	{ 0x75dd0647, "usb_interrupt_msg" },
	{ 0x494ba38f, "usb_bulk_msg" },
	{ 0x52abcf82, "comedi_to_usb_dev" },
	{ 0xb0ce8d8d, "comedi_usb_auto_config" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "comedi_usb,comedi");

MODULE_ALIAS("usb:v10CFp5500d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v10CFp5501d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v10CFp5502d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v10CFp5503d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v10CFp8061d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v10CFp8062d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v10CFp8063d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v10CFp8064d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v10CFp8065d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v10CFp8066d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v10CFp8067d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v10CFp8068d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "F8EE3EADE731EB76EA0000E");
