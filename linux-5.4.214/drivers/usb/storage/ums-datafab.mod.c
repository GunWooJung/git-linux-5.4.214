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
	{ 0xf9a482f9, "msleep" },
	{ 0x4e5a2537, "usb_stor_set_xfer_buf" },
	{ 0xfecc2f7a, "usb_stor_bulk_transfer_buf" },
	{ 0x4e3ff607, "usb_stor_access_xfer_buf" },
	{ 0x1dab1a60, "usb_stor_post_reset" },
	{ 0xf4b3ee95, "usb_stor_disconnect" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0xb95a6e6d, "usb_deregister" },
	{ 0x7b93286c, "usb_stor_probe2" },
	{ 0x96cab1e0, "fill_inquiry_response" },
	{ 0x38da721f, "usb_stor_host_template_init" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x34987329, "usb_stor_pre_reset" },
	{ 0x3c999e8e, "usb_stor_reset_resume" },
	{ 0x1e0369de, "usb_stor_suspend" },
	{ 0xf56789aa, "usb_stor_probe1" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0x6f7bab8, "usb_stor_resume" },
	{ 0xaf37d977, "usb_register_driver" },
	{ 0x609532c, "usb_stor_Bulk_reset" },
};

MODULE_INFO(depends, "usb-storage");

MODULE_ALIAS("usb:v07C4pA000d001[0-5]dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07C4pA000d000*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07C4pA001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07C4pA002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07C4pA003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07C4pA004d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07C4pA005d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07C4pA006d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07C4pA109d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07C4pA10Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C0BpA109d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "76F426F8CCDE2AA04130080");
