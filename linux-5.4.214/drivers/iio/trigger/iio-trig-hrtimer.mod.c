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
	{ 0xa8635663, "iio_unregister_sw_trigger_type" },
	{ 0xc954d3b0, "iio_register_sw_trigger_type" },
	{ 0x3b346986, "config_group_init_type_name" },
	{ 0xf8a25fcc, "__iio_trigger_register" },
	{ 0x1ee7d3cd, "hrtimer_init" },
	{ 0x4f8114c2, "iio_trigger_alloc" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xfbdfc558, "hrtimer_start_range_ns" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x533bfe53, "iio_trigger_poll" },
	{ 0xdc21e866, "hrtimer_forward" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x37a0cba, "kfree" },
	{ 0xe5c65a12, "iio_trigger_free" },
	{ 0xa0c6befa, "hrtimer_cancel" },
	{ 0x37029a28, "iio_trigger_unregister" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "industrialio-sw-trigger,industrialio");


MODULE_INFO(srcversion, "AE07629F7022B02F1D062AC");
