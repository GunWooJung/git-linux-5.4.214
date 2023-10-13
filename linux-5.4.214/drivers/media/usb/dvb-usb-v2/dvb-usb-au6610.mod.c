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
	{ 0x6cfe776b, "dvb_usbv2_resume" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x947be5cd, "param_ops_short" },
	{ 0xb95a6e6d, "usb_deregister" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0xc5850110, "printk" },
	{ 0xb9b32561, "usb_set_interface" },
	{ 0x601eeab6, "dvb_usbv2_probe" },
	{ 0x25358e1b, "usb_control_msg" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x868784cb, "__symbol_get" },
	{ 0x7a61e7be, "dvb_usbv2_disconnect" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x191d9d08, "dvb_usbv2_suspend" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x37a0cba, "kfree" },
	{ 0x6eed2630, "param_array_ops" },
	{ 0xaf37d977, "usb_register_driver" },
	{ 0x6e9dd606, "__symbol_put" },
	{ 0x7dcb9387, "dvb_usbv2_reset_resume" },
};

MODULE_INFO(depends, "dvb_usb_v2");

MODULE_ALIAS("usb:v058Fp6610d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "C4280F4A9B44B849AC27FAC");
