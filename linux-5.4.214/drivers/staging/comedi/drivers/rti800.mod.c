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
	{ 0x8113872c, "range_unipolar10" },
	{ 0xbb52fc7f, "range_bipolar10" },
	{ 0xce6c434a, "comedi_legacy_detach" },
	{ 0x758f081b, "comedi_driver_unregister" },
	{ 0xe73c2838, "comedi_driver_register" },
	{ 0xc15e9f12, "comedi_timeout" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x64cb354c, "comedi_dio_update_state" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xdb2044b2, "range_unipolar5" },
	{ 0xa33acd7f, "comedi_alloc_subdev_readback" },
	{ 0xcd330f4, "range_unknown" },
	{ 0x390a0822, "comedi_alloc_subdevices" },
	{ 0xe17d701, "comedi_alloc_devpriv" },
	{ 0x264153bb, "comedi_request_region" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "comedi");


MODULE_INFO(srcversion, "E8D6EEFAD7AF5E70B983D7D");
