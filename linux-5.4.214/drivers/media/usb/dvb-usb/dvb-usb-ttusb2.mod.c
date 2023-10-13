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
	{ 0xa24f23d8, "__request_module" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x765395c3, "param_ops_int" },
	{ 0x449962d6, "dvb_usb_device_exit" },
	{ 0x2bb2479a, "dvb_usb_device_init" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x947be5cd, "param_ops_short" },
	{ 0xb95a6e6d, "usb_deregister" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xb9b32561, "usb_set_interface" },
	{ 0xe6f26e12, "rc_keydown" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x48a93420, "dvb_ca_en50221_release" },
	{ 0x538e7f52, "rc_keyup" },
	{ 0x868784cb, "__symbol_get" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xbed5ff5b, "dvb_usb_generic_rw" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x6eed2630, "param_array_ops" },
	{ 0xaf37d977, "usb_register_driver" },
	{ 0x6e9dd606, "__symbol_put" },
	{ 0x2a2c35b6, "dvb_ca_en50221_init" },
};

MODULE_INFO(depends, "dvb-usb,rc-core,dvb-core");

MODULE_ALIAS("usb:v2304p020Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2304p0222d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B48p3006d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B48p300Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B48p3009d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "933B202A27B98F7874FA98F");
