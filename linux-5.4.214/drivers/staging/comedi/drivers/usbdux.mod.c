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
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xdb2044b2, "range_unipolar5" },
	{ 0xa33acd7f, "comedi_alloc_subdev_readback" },
	{ 0x390a0822, "comedi_alloc_subdevices" },
	{ 0xc75c79af, "comedi_load_firmware" },
	{ 0xb9b32561, "usb_set_interface" },
	{ 0xedb483d8, "usb_alloc_urb" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xe17d701, "comedi_alloc_devpriv" },
	{ 0xfb578fc5, "memset" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x3273e28d, "usb_free_urb" },
	{ 0x29b499ab, "comedi_to_usb_interface" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x689f67a5, "comedi_buf_write_samples" },
	{ 0x4c2a4463, "comedi_event" },
	{ 0x9b2f554d, "comedi_buf_read_samples" },
	{ 0x37a0cba, "kfree" },
	{ 0x25358e1b, "usb_control_msg" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0x4643e1b7, "comedi_readback_insn_read" },
	{ 0x64cb354c, "comedi_dio_update_state" },
	{ 0xf3aa101d, "comedi_dio_insn_config" },
	{ 0x53590eb7, "usb_kill_urb" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x8a2611eb, "usb_submit_urb" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x494ba38f, "usb_bulk_msg" },
	{ 0x52abcf82, "comedi_to_usb_dev" },
	{ 0xb0ce8d8d, "comedi_usb_auto_config" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "comedi_usb,comedi");

MODULE_ALIAS("usb:v13D8p0001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D8p0002d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "DA4918845DA98C0BF0ADF77");
