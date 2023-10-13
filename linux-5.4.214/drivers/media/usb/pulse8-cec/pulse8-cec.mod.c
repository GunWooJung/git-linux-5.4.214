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
	{ 0x190aaef4, "serio_unregister_driver" },
	{ 0x6f04f2b0, "__serio_register_driver" },
	{ 0xbb3bd805, "cec_s_phys_addr" },
	{ 0x5623bc0, "cec_s_log_addrs" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x4b080ad0, "cec_register_adapter" },
	{ 0x207c2627, "cec_delete_adapter" },
	{ 0xdab91ed4, "serio_open" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc7b2393b, "cec_allocate_adapter" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xfff5afc, "time64_to_tm" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xdd64e639, "strscpy" },
	{ 0x754d539c, "strlen" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x29361773, "complete" },
	{ 0x69acdf38, "memcpy" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x5330a196, "cec_received_msg_ts" },
	{ 0x7c13585f, "cec_transmit_attempt_done_ts" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x37a0cba, "kfree" },
	{ 0xa80e6ce6, "serio_close" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xb172111a, "cec_unregister_adapter" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("serio:ty02pr40id*ex*");

MODULE_INFO(srcversion, "FEA0939F69050067B5E13EF");
