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
	{ 0xa99a62a3, "platform_driver_unregister" },
	{ 0x19af53eb, "__platform_driver_register" },
	{ 0x982781e3, "i3c_master_queue_ibi" },
	{ 0xf007e277, "i3c_generic_ibi_get_free_slot" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x29361773, "complete" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x2a1c70d7, "i3c_master_register" },
	{ 0x51765820, "devm_request_threaded_irq" },
	{ 0x815588a6, "clk_enable" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x7e73a43b, "platform_get_irq" },
	{ 0x6164d63, "devm_clk_get" },
	{ 0x1e57910a, "devm_ioremap_resource" },
	{ 0xd072dc20, "platform_get_resource" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x452baac1, "i3c_master_set_info" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x297aaef4, "i3c_master_do_daa" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x8dee2273, "i3c_master_defslvs_locked" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0xb9883e89, "i3c_master_add_i3c_dev_locked" },
	{ 0xb352177e, "find_first_bit" },
	{ 0xd412659b, "i3c_master_entdaa_locked" },
	{ 0xf807382b, "i3c_master_get_free_addr" },
	{ 0x479c3c86, "find_next_zero_bit" },
	{ 0xf11543ff, "find_first_zero_bit" },
	{ 0x12a38747, "usleep_range" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x37a0cba, "kfree" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xdd7f190f, "i3c_generic_ibi_alloc_pool" },
	{ 0x76fe3e05, "i3c_generic_ibi_free_pool" },
	{ 0x885c0925, "i3c_master_enec_locked" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xb72cb064, "i3c_master_disec_locked" },
	{ 0x2209526a, "i3c_generic_ibi_recycle_slot" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x9bbf0126, "i3c_master_unregister" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "i3c");


MODULE_INFO(srcversion, "4027A2BA8360E27C26678C6");
