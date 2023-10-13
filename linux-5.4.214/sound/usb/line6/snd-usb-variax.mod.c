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
	{ 0x2d3385d3, "system_wq" },
	{ 0xf8fcc7b9, "line6_version_request_async" },
	{ 0xf5ed2efa, "line6_resume" },
	{ 0x84eec272, "line6_probe" },
	{ 0x3dca23cb, "line6_disconnect" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0xb95a6e6d, "usb_deregister" },
	{ 0xc2b00948, "line6_suspend" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xd111bb59, "_dev_info" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x957eba50, "line6_send_raw_message_async" },
	{ 0x37a0cba, "kfree" },
	{ 0xaf37d977, "usb_register_driver" },
	{ 0x2c3bd8c1, "snd_card_register" },
};

MODULE_INFO(depends, "snd-usb-line6,snd");

MODULE_ALIAS("usb:v0E41p4650d*dc*dsc*dp*ic*isc*ip*in01*");
MODULE_ALIAS("usb:v0E41p534Dd*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "D9A79D221DEC82A816FAC1F");
