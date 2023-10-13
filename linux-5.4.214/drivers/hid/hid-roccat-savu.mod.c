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
	{ 0x2b708d10, "hid_unregister_driver" },
	{ 0xb4b1a06b, "class_destroy" },
	{ 0xb27fe432, "__hid_register_driver" },
	{ 0x5328374d, "__class_create" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x78bf9d4, "roccat_connect" },
	{ 0xfd5ada84, "roccat_common2_device_init_struct" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xc6c38eb0, "hid_hw_start" },
	{ 0x49bdb973, "hid_open_report" },
	{ 0x3232dfdb, "usb_hid_driver" },
	{ 0x2f622ea1, "roccat_disconnect" },
	{ 0xffa8e380, "hid_hw_stop" },
	{ 0x37a0cba, "kfree" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x3e4427c8, "roccat_report_event" },
	{ 0x2fabfb65, "roccat_common2_sysfs_read" },
	{ 0xc8ddf60d, "roccat_common2_sysfs_write" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "hid,hid-roccat,hid-roccat-common,usbhid");

MODULE_ALIAS("hid:b0003g*v00001E7Dp00002D5A");

MODULE_INFO(srcversion, "912A937677E4B0D0E16404F");
