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
	{ 0x947be5cd, "param_ops_short" },
	{ 0x6eed2630, "param_array_ops" },
	{ 0x86f434e2, "driver_unregister" },
	{ 0xf6dd8fef, "__spi_register_driver" },
	{ 0x80985cc4, "dvb_dmx_swfilter" },
	{ 0x12a38747, "usleep_range" },
	{ 0x391fccd6, "spi_write_then_read" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xab37f21b, "wake_up_process" },
	{ 0xabaae129, "kthread_create_on_node" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x85e73dd7, "kthread_stop" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x6e9dd606, "__symbol_put" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x58367a1e, "dvb_dmxdev_init" },
	{ 0x67480317, "dvb_dmx_init" },
	{ 0x8b51dea0, "dvb_register_frontend" },
	{ 0x868784cb, "__symbol_get" },
	{ 0x60056b24, "dvb_register_adapter" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xfe543c51, "regulator_enable" },
	{ 0xf1a50cbd, "devm_regulator_get_optional" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x37a0cba, "kfree" },
	{ 0x1643a127, "regulator_disable" },
	{ 0x26d929db, "dvb_unregister_adapter" },
	{ 0xe55191a1, "dvb_frontend_detach" },
	{ 0xcb13db51, "dvb_unregister_frontend" },
	{ 0x7b0d51ce, "dvb_dmx_release" },
	{ 0x99a57911, "dvb_dmxdev_release" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xc5850110, "printk" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x586583b8, "spi_sync" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "dvb-core");

MODULE_ALIAS("spi:cxd2880");
MODULE_ALIAS("of:N*T*Csony,cxd2880");
MODULE_ALIAS("of:N*T*Csony,cxd2880C*");

MODULE_INFO(srcversion, "60EAD6D0D766155182A6CBE");
