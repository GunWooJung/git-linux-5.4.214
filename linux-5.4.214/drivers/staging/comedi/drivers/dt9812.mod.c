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
	{ 0x64cb354c, "comedi_dio_update_state" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xa33acd7f, "comedi_alloc_subdev_readback" },
	{ 0xdb2044b2, "range_unipolar5" },
	{ 0xbb52fc7f, "range_bipolar10" },
	{ 0xbdbe75c6, "range_unipolar2_5" },
	{ 0x390a0822, "comedi_alloc_subdevices" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x91b8e435, "usb_reset_configuration" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xe17d701, "comedi_alloc_devpriv" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x69acdf38, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x494ba38f, "usb_bulk_msg" },
	{ 0x52abcf82, "comedi_to_usb_dev" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x4643e1b7, "comedi_readback_insn_read" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x29b499ab, "comedi_to_usb_interface" },
	{ 0xb0ce8d8d, "comedi_usb_auto_config" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "comedi_usb,comedi");

MODULE_ALIAS("usb:v0867p9812d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "61F379021ACA45B3F034902");
