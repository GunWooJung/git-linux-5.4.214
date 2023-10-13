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
	{ 0x3f4efcf6, "line6_read_serial_number" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xf5ed2efa, "line6_resume" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x84eec272, "line6_probe" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x15bb8ddf, "line6_write_data" },
	{ 0x3dca23cb, "line6_disconnect" },
	{ 0x953e1b9e, "ktime_get_real_seconds" },
	{ 0xf5e87ac2, "line6_pcm_release" },
	{ 0xb95a6e6d, "usb_deregister" },
	{ 0x801a8c8a, "line6_pcm_acquire" },
	{ 0xb372d8f7, "led_classdev_register_ext" },
	{ 0x25358e1b, "usb_control_msg" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x335edef9, "line6_init_pcm" },
	{ 0xc2b00948, "line6_suspend" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x313b68a4, "line6_read_data" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x4d16dbe5, "snd_ctl_new1" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x6b2998d4, "led_classdev_unregister" },
	{ 0x37a0cba, "kfree" },
	{ 0xaf37d977, "usb_register_driver" },
	{ 0x2c3bd8c1, "snd_card_register" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xff94b8b9, "snd_ctl_add" },
	{ 0xe914e41e, "strcpy" },
};

MODULE_INFO(depends, "snd-usb-line6,snd");

MODULE_ALIAS("usb:v0E41p4750d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E41p4153d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E41p4150d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E41p4151d*dc*dsc*dp*ic*isc*ip*in00*");
MODULE_ALIAS("usb:v0E41p4147d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E41p4141d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E41p4142d*dc*dsc*dp*ic*isc*ip*in00*");

MODULE_INFO(srcversion, "84447AF4DA7071AC2A30F63");
