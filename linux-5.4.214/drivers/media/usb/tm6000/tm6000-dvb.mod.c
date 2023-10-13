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
	{ 0x947be5cd, "param_ops_short" },
	{ 0x6eed2630, "param_array_ops" },
	{ 0x75c4b6cb, "tm6000_unregister_extension" },
	{ 0x69b51072, "tm6000_register_extension" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xa24f23d8, "__request_module" },
	{ 0xdff8e89d, "tm6000_tuner_callback" },
	{ 0x58367a1e, "dvb_dmxdev_init" },
	{ 0x67480317, "dvb_dmx_init" },
	{ 0x6e9dd606, "__symbol_put" },
	{ 0x8b51dea0, "dvb_register_frontend" },
	{ 0x2309a6d6, "tm6000_xc5000_callback" },
	{ 0x60056b24, "dvb_register_adapter" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x868784cb, "__symbol_get" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xd323beed, "tm6000_init_digital_mode" },
	{ 0xe5a397f6, "usb_clear_halt" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xedb483d8, "usb_alloc_urb" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x80985cc4, "dvb_dmx_swfilter" },
	{ 0x8a2611eb, "usb_submit_urb" },
	{ 0x89b611dd, "tm6000_debug" },
	{ 0x26d929db, "dvb_unregister_adapter" },
	{ 0x7b0d51ce, "dvb_dmx_release" },
	{ 0x99a57911, "dvb_dmxdev_release" },
	{ 0xe55191a1, "dvb_frontend_detach" },
	{ 0xcb13db51, "dvb_unregister_frontend" },
	{ 0xbe08b227, "usb_unlink_urb" },
	{ 0x3273e28d, "usb_free_urb" },
	{ 0x37a0cba, "kfree" },
	{ 0x53590eb7, "usb_kill_urb" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xc5850110, "printk" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "tm6000,dvb-core");


MODULE_INFO(srcversion, "97B5141252C3D983645A714");
