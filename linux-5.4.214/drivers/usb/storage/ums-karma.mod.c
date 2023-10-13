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
	{ 0xf9a482f9, "msleep" },
	{ 0xfecc2f7a, "usb_stor_bulk_transfer_buf" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x1dab1a60, "usb_stor_post_reset" },
	{ 0x926b836b, "usb_stor_Bulk_transport" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xf4b3ee95, "usb_stor_disconnect" },
	{ 0xb95a6e6d, "usb_deregister" },
	{ 0x7b93286c, "usb_stor_probe2" },
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

MODULE_ALIAS("usb:v045Ap5210d0101dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "85160C38919A553F1544426");
