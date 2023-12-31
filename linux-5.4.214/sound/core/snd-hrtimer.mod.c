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
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xa0c6befa, "hrtimer_cancel" },
	{ 0xaf163bfb, "snd_timer_global_new" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0xfbdfc558, "hrtimer_start_range_ns" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0x406c4cb1, "hrtimer_resolution" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x37a0cba, "kfree" },
	{ 0xad98bdea, "snd_timer_interrupt" },
	{ 0x1ee7d3cd, "hrtimer_init" },
	{ 0xf993216d, "snd_timer_global_register" },
	{ 0x7c23703, "hrtimer_try_to_cancel" },
	{ 0xc1cb19bc, "snd_timer_global_free" },
};

MODULE_INFO(depends, "snd-timer");


MODULE_INFO(srcversion, "4F6C866295FB5A6FB482C44");
