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
	{ 0xb55067d3, "pcmcia_enable_device" },
	{ 0xe73c2838, "comedi_driver_register" },
	{ 0xe800cafc, "comedi_auto_config" },
	{ 0xfd864eaf, "pcmcia_register_driver" },
	{ 0x8db20125, "comedi_auto_unconfig" },
	{ 0x32dce1b0, "pcmcia_request_io" },
	{ 0x758f081b, "comedi_driver_unregister" },
	{ 0x6af95259, "pcmcia_loop_config" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xb9262523, "pcmcia_unregister_driver" },
	{ 0x19c85322, "pcmcia_disable_device" },
};

MODULE_INFO(depends, "pcmcia,comedi");


MODULE_INFO(srcversion, "1A6BAF23E29F9301EA16B7C");
