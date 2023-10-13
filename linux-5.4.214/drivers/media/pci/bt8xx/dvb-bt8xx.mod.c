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
	{ 0x4f922704, "bttv_sub_unregister" },
	{ 0x926c3274, "bttv_sub_register" },
	{ 0x6e9dd606, "__symbol_put" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x8b51dea0, "dvb_register_frontend" },
	{ 0x868784cb, "__symbol_get" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0xc2fcc7be, "dvb_net_init" },
	{ 0x58367a1e, "dvb_dmxdev_init" },
	{ 0x67480317, "dvb_dmx_init" },
	{ 0x60056b24, "dvb_register_adapter" },
	{ 0x304617ef, "bt878" },
	{ 0xd5d0bdef, "bt878_num" },
	{ 0x9c62c2a7, "bttv_get_pcidev" },
	{ 0xdd64e639, "strscpy" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xb35586ed, "i2c_transfer" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x80500894, "request_firmware" },
	{ 0xf9a482f9, "msleep" },
	{ 0x11dc4b6d, "bttv_gpio_enable" },
	{ 0x8ecf4acc, "bttv_write_gpio" },
	{ 0x3c6f03b9, "bt878_start" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x80985cc4, "dvb_dmx_swfilter" },
	{ 0x7751ad77, "dvb_dmx_swfilter_204" },
	{ 0x37a0cba, "kfree" },
	{ 0x26d929db, "dvb_unregister_adapter" },
	{ 0xe55191a1, "dvb_frontend_detach" },
	{ 0xcb13db51, "dvb_unregister_frontend" },
	{ 0x7b0d51ce, "dvb_dmx_release" },
	{ 0x99a57911, "dvb_dmxdev_release" },
	{ 0x9291fd02, "dvb_net_release" },
	{ 0x82072614, "tasklet_kill" },
	{ 0xd95ee959, "bt878_stop" },
	{ 0xc5850110, "printk" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "bttv,dvb-core,bt878");


MODULE_INFO(srcversion, "DF37BB7C6E4944669CC8D78");
