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
	{ 0xe68d1135, "em28xx_unregister_extension" },
	{ 0xff79d472, "em28xx_register_extension" },
	{ 0x80985cc4, "dvb_dmx_swfilter" },
	{ 0xaed06536, "_dev_warn" },
	{ 0x9e6e4b91, "dvb_create_media_graph" },
	{ 0xc2fcc7be, "dvb_net_init" },
	{ 0x58367a1e, "dvb_dmxdev_init" },
	{ 0x67480317, "dvb_dmx_init" },
	{ 0x8b51dea0, "dvb_register_frontend" },
	{ 0x60056b24, "dvb_register_adapter" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x7fc8652c, "em28xx_tuner_callback" },
	{ 0x593c1bac, "__x86_indirect_thunk_rbx" },
	{ 0x4124f403, "em28xx_alloc_urbs" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x721f7cc7, "em28xx_free_device" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x37a0cba, "kfree" },
	{ 0x26d929db, "dvb_unregister_adapter" },
	{ 0xcb13db51, "dvb_unregister_frontend" },
	{ 0x7b0d51ce, "dvb_dmx_release" },
	{ 0x99a57911, "dvb_dmxdev_release" },
	{ 0x9291fd02, "dvb_net_release" },
	{ 0x37dfc6f6, "em28xx_uninit_usb_xfer" },
	{ 0xc5850110, "printk" },
	{ 0xe55191a1, "dvb_frontend_detach" },
	{ 0x6e9dd606, "__symbol_put" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x868784cb, "__symbol_get" },
	{ 0xfcf51d3f, "em28xx_setup_xc3028" },
	{ 0x7ac306ff, "dvb_frontend_suspend" },
	{ 0x408d30b0, "dvb_frontend_resume" },
	{ 0xd111bb59, "_dev_info" },
	{ 0xc7ba3d4e, "dev_printk" },
	{ 0xb9b32561, "usb_set_interface" },
	{ 0x73a1dd41, "em28xx_init_usb_xfer" },
	{ 0xa17fbf0f, "em28xx_stop_urbs" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x2bffad42, "em28xx_write_reg_bits" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xf9a482f9, "msleep" },
	{ 0x4fc58c0c, "i2c_transfer_buffer_flags" },
	{ 0x78668228, "em28xx_write_reg" },
	{ 0xf76d4457, "em28xx_gpio_set" },
	{ 0x6626afca, "down" },
	{ 0xcf2a6966, "up" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x7f6f442, "dvb_module_release" },
	{ 0x60b5afd5, "dvb_module_probe" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xfe990052, "gpio_free" },
	{ 0x403f9529, "gpio_request_one" },
	{ 0xe236ab9d, "em28xx_set_mode" },
	{ 0x12a38747, "usleep_range" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "em28xx,dvb-core");


MODULE_INFO(srcversion, "D18A7C1768894D25B2231B1");
