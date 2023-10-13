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
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x2108e3e0, "usb_gstrings_attach" },
	{ 0x37c1c72a, "usb_free_all_descriptors" },
	{ 0xc41263c7, "usb_ep_disable" },
	{ 0x6bfad17f, "usb_ep_enable" },
	{ 0x139f2189, "__kfifo_alloc" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xffaa944, "usb_ep_queue" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x47939e0d, "__tasklet_hi_schedule" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x40f79de7, "usb_ep_set_halt" },
	{ 0xa1637162, "snd_rawmidi_set_ops" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x6b926abb, "usb_function_unregister" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0xef0af3db, "snd_rawmidi_new" },
	{ 0x99f86ed6, "snd_device_new" },
	{ 0x82fcc0d0, "usb_put_function_instance" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x4b70bb1, "usb_ep_autoconfig" },
	{ 0xd56b098d, "snd_card_free_when_closed" },
	{ 0x5792f848, "strlcpy" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x3b346986, "config_group_init_type_name" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x6d73fc48, "usb_function_register" },
	{ 0x9eacf8a5, "kstrndup" },
	{ 0x26be0b39, "snd_card_new" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xddb9b8ac, "snd_component_add" },
	{ 0x6dc11b4d, "alloc_ep_req" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7fc51512, "config_ep_by_speed" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xa36ea15e, "usb_ep_free_request" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xdb760f52, "__kfifo_free" },
	{ 0x2e09263f, "usb_copy_descriptors" },
	{ 0x37a0cba, "kfree" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0xd7091abe, "snd_rawmidi_drop_output" },
	{ 0xfa7bdbc3, "usb_interface_id" },
	{ 0x3d549164, "snd_card_free" },
	{ 0x2c3bd8c1, "snd_card_register" },
	{ 0xe7399ee1, "snd_rawmidi_transmit" },
	{ 0xb2bc72b9, "snd_rawmidi_receive" },
	{ 0xe914e41e, "strcpy" },
};

MODULE_INFO(depends, "libcomposite,udc-core,snd-rawmidi,snd");


MODULE_INFO(srcversion, "B7373B67949F167922819AA");
