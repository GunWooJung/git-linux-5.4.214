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
	{ 0xc7f597a7, "cx231xx_unregister_extension" },
	{ 0xc0d65c3, "cx231xx_register_extension" },
	{ 0x80985cc4, "dvb_dmx_swfilter" },
	{ 0xc5850110, "printk" },
	{ 0xaed06536, "_dev_warn" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x9e6e4b91, "dvb_create_media_graph" },
	{ 0xc2fcc7be, "dvb_net_init" },
	{ 0x58367a1e, "dvb_dmxdev_init" },
	{ 0x67480317, "dvb_dmx_init" },
	{ 0x8b51dea0, "dvb_register_frontend" },
	{ 0x60056b24, "dvb_register_adapter" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x6e9dd606, "__symbol_put" },
	{ 0x868784cb, "__symbol_get" },
	{ 0x17ea7c7, "cx231xx_tuner_callback" },
	{ 0x60b5afd5, "dvb_module_probe" },
	{ 0x1e8b003d, "cx231xx_demod_reset" },
	{ 0xe5d38eaa, "cx231xx_get_i2c_adap" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x37a0cba, "kfree" },
	{ 0x7f6f442, "dvb_module_release" },
	{ 0x26d929db, "dvb_unregister_adapter" },
	{ 0xe55191a1, "dvb_frontend_detach" },
	{ 0xcb13db51, "dvb_unregister_frontend" },
	{ 0x7b0d51ce, "dvb_dmx_release" },
	{ 0x99a57911, "dvb_dmxdev_release" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x9291fd02, "dvb_net_release" },
	{ 0x312409b3, "cx231xx_init_bulk" },
	{ 0x9f14165d, "cx231xx_init_isoc" },
	{ 0xa822d504, "cx231xx_set_alt_setting" },
	{ 0x80eb0ed8, "cx231xx_uninit_isoc" },
	{ 0xe01d2fa8, "cx231xx_uninit_bulk" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xc5ce5d1, "cx231xx_set_mode" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "cx231xx,dvb-core");


MODULE_INFO(srcversion, "65988010C2915E840DF0678");
