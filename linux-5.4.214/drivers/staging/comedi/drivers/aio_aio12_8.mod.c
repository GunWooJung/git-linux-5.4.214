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
	{ 0xce6c434a, "comedi_legacy_detach" },
	{ 0x758f081b, "comedi_driver_unregister" },
	{ 0xe73c2838, "comedi_driver_register" },
	{ 0xc15e9f12, "comedi_timeout" },
	{ 0xa33acd7f, "comedi_alloc_subdev_readback" },
	{ 0x307233a, "comedi_8254_subdevice_init" },
	{ 0xbbedef75, "subdev_8255_init" },
	{ 0x390a0822, "comedi_alloc_subdevices" },
	{ 0x69d0eaa1, "comedi_8254_init" },
	{ 0x264153bb, "comedi_request_region" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "comedi,comedi_8254,comedi_8255");


MODULE_INFO(srcversion, "1A822A14A31617C30C9579C");
