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
	{ 0x84eec272, "line6_probe" },
	{ 0x3dca23cb, "line6_disconnect" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xb95a6e6d, "usb_deregister" },
	{ 0x25358e1b, "usb_control_msg" },
	{ 0xb03ebff, "usb_driver_claim_interface" },
	{ 0x2475253b, "snd_card_add_dev_attr" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x335edef9, "line6_init_pcm" },
	{ 0xc2b00948, "line6_suspend" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x313b68a4, "line6_read_data" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x7794ba54, "usb_driver_release_interface" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0xaf37d977, "usb_register_driver" },
	{ 0x2c3bd8c1, "snd_card_register" },
	{ 0x1079fc0, "usb_ifnum_to_if" },
};

MODULE_INFO(depends, "snd-usb-line6,snd");

MODULE_ALIAS("usb:v0E41p5057d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E41p5058d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E41p414Dd*dc*dsc*dp*ic*isc*ip*in00*");
MODULE_ALIAS("usb:v0E41p414Ad*dc*dsc*dp*ic*isc*ip*in00*");
MODULE_ALIAS("usb:v0E41p414Bd*dc*dsc*dp*ic*isc*ip*in00*");
MODULE_ALIAS("usb:v0E41p4159d*dc*dsc*dp*ic*isc*ip*in00*");
MODULE_ALIAS("usb:v0E41p4156d*dc*dsc*dp*ic*isc*ip*in00*");

MODULE_INFO(srcversion, "9DE491A24C92675B8C69F6B");
