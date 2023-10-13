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
	{ 0x1dab1a60, "usb_stor_post_reset" },
	{ 0x53590eb7, "usb_kill_urb" },
	{ 0xf4b3ee95, "usb_stor_disconnect" },
	{ 0x66c54ff1, "input_event" },
	{ 0xf9c0b663, "strlcat" },
	{ 0xb95a6e6d, "usb_deregister" },
	{ 0x5792f848, "strlcpy" },
	{ 0x7b93286c, "usb_stor_probe2" },
	{ 0x94c8bc6d, "usb_free_coherent" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x8a2611eb, "usb_submit_urb" },
	{ 0x38da721f, "usb_stor_host_template_init" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x94a09154, "input_register_device" },
	{ 0x34987329, "usb_stor_pre_reset" },
	{ 0x3c999e8e, "usb_stor_reset_resume" },
	{ 0x1e0369de, "usb_stor_suspend" },
	{ 0x4e97c8d9, "input_free_device" },
	{ 0xf56789aa, "usb_stor_probe1" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0x6f7bab8, "usb_stor_resume" },
	{ 0x2ab40469, "input_unregister_device" },
	{ 0xaf37d977, "usb_register_driver" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xe2c54831, "usb_alloc_coherent" },
	{ 0x3273e28d, "usb_free_urb" },
	{ 0xedb483d8, "usb_alloc_urb" },
	{ 0x4f55cb4, "input_allocate_device" },
};

MODULE_INFO(depends, "usb-storage");

MODULE_ALIAS("usb:v0D49p7000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0D49p7010d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "AA1C72B24A7B99DC1A5153D");
