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
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x494ba38f, "usb_bulk_msg" },
	{ 0x3273e28d, "usb_free_urb" },
	{ 0x37a0cba, "kfree" },
	{ 0x25358e1b, "usb_control_msg" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x390a0822, "comedi_alloc_subdevices" },
	{ 0xc75c79af, "comedi_load_firmware" },
	{ 0xedb483d8, "usb_alloc_urb" },
	{ 0xb9b32561, "usb_set_interface" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xe17d701, "comedi_alloc_devpriv" },
	{ 0x29b499ab, "comedi_to_usb_interface" },
	{ 0x689f67a5, "comedi_buf_write_samples" },
	{ 0xb0b4e3f9, "comedi_nsamples_left" },
	{ 0x4c2a4463, "comedi_event" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x8a2611eb, "usb_submit_urb" },
	{ 0x52abcf82, "comedi_to_usb_dev" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x53590eb7, "usb_kill_urb" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xb0ce8d8d, "comedi_usb_auto_config" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "comedi_usb,comedi");

MODULE_ALIAS("usb:v13D8p0010d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D8p0011d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "1891EB3DD95AE96EBFB9242");
