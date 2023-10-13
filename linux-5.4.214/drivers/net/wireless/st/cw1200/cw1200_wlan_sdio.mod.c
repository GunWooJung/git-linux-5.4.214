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
	{ 0x823a50ea, "cw1200_irq_handler" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xecf02f95, "sdio_enable_func" },
	{ 0x47229b5c, "gpio_request" },
	{ 0x43dff967, "sdio_claim_irq" },
	{ 0xf37d2c0b, "gpio_to_desc" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0x765a4ea2, "cw1200_core_release" },
	{ 0x9ca17b3c, "cw1200_can_suspend" },
	{ 0xc5850110, "printk" },
	{ 0xe66f8cb1, "gpiod_direction_output_raw" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xd8f46d1d, "sdio_unregister_driver" },
	{ 0x93583205, "sdio_f0_writeb" },
	{ 0xfe66fe5a, "sdio_set_host_pm_flags" },
	{ 0x1f7b01bc, "sdio_release_irq" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8e478202, "sdio_align_size" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xeca9c700, "sdio_f0_readb" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x6961b9f2, "sdio_memcpy_toio" },
	{ 0xfe990052, "gpio_free" },
	{ 0x37a0cba, "kfree" },
	{ 0xffb817fb, "gpiod_set_raw_value" },
	{ 0x43919251, "sdio_register_driver" },
	{ 0xa5d565a3, "sdio_memcpy_fromio" },
	{ 0xfc5d3d0c, "sdio_claim_host" },
	{ 0x5b9893d7, "cw1200_core_probe" },
	{ 0xb63ef191, "sdio_disable_func" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x56d3d127, "sdio_release_host" },
};

MODULE_INFO(depends, "cw1200_core");

MODULE_ALIAS("sdio:c*v0020d2280*");

MODULE_INFO(srcversion, "4DBD1B34AEE87429B1758B2");
