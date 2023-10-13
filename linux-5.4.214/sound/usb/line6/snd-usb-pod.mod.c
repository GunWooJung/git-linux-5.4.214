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
	{ 0xf8fcc7b9, "line6_version_request_async" },
	{ 0xf5ed2efa, "line6_resume" },
	{ 0x84eec272, "line6_probe" },
	{ 0x18f521f6, "line6_alloc_sysex_buffer" },
	{ 0x3dca23cb, "line6_disconnect" },
	{ 0x5d6fba6a, "line6_send_sysex_message" },
	{ 0x202a1b1b, "line6_midi_id" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xb95a6e6d, "usb_deregister" },
	{ 0x2475253b, "snd_card_add_dev_attr" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x335edef9, "line6_init_pcm" },
	{ 0xc2b00948, "line6_suspend" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x4d16dbe5, "snd_ctl_new1" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x37a0cba, "kfree" },
	{ 0xaf37d977, "usb_register_driver" },
	{ 0x2c3bd8c1, "snd_card_register" },
	{ 0xff94b8b9, "snd_ctl_add" },
};

MODULE_INFO(depends, "snd-usb-line6,snd");

MODULE_ALIAS("usb:v0E41p4250d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E41p4642d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E41p4252d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E41p5051d*dc*dsc*dp*ic*isc*ip*in01*");
MODULE_ALIAS("usb:v0E41p5044d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E41p4650d*dc*dsc*dp*ic*isc*ip*in00*");
MODULE_ALIAS("usb:v0E41p5050d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "6B54000664CB0D1152F5576");
