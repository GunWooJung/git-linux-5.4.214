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
	{ 0x765395c3, "param_ops_int" },
	{ 0x68a41536, "param_ops_bool" },
	{ 0x5c42b5ca, "no_llseek" },
	{ 0xb95a6e6d, "usb_deregister" },
	{ 0xaf37d977, "usb_register_driver" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x35775925, "misc_deregister" },
	{ 0xac1a55be, "unregister_reboot_notifier" },
	{ 0x4b2e0ffe, "misc_register" },
	{ 0x3517383e, "register_reboot_notifier" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x94c8bc6d, "usb_free_coherent" },
	{ 0x3273e28d, "usb_free_urb" },
	{ 0xedb483d8, "usb_alloc_urb" },
	{ 0xe2c54831, "usb_alloc_coherent" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x167e7f9d, "__get_user_1" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x37a0cba, "kfree" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x25358e1b, "usb_control_msg" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xc5850110, "printk" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x8a2611eb, "usb_submit_urb" },
	{ 0x6932b09e, "stream_open" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v0C98p1140d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "D328A45B6BEA32E9BC8496A");
