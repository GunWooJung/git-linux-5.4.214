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
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x117f4f54, "rtl_lps_enter" },
	{ 0xe35ed617, "seq_puts" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x58f84c2d, "seq_printf" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xad8b9b9, "rtl_rx_ampdu_apply" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x937b5313, "rtl_lps_leave" },
	{ 0x37a0cba, "kfree" },
	{ 0x29361773, "complete" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
};

MODULE_INFO(depends, "rtlwifi");


MODULE_INFO(srcversion, "146061DE1D81ADE16B14E6C");
