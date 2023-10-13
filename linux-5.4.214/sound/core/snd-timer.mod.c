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
	{ 0xa24f23d8, "__request_module" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0xc3a7a7d0, "snd_register_device" },
	{ 0x765395c3, "param_ops_int" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x754d539c, "strlen" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xf8f2a4eb, "snd_kill_fasync" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x6932b09e, "stream_open" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0xd0b56b3c, "snd_device_initialize" },
	{ 0x5c42b5ca, "no_llseek" },
	{ 0x58f84c2d, "seq_printf" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x5af762f1, "snd_fasync_free" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x99f86ed6, "snd_device_new" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0xaf7d0f48, "current_task" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x9ec6ca96, "ktime_get_real_ts64" },
	{ 0x4baaf551, "snd_unregister_device" },
	{ 0x8df3789f, "snd_oss_info_register" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0x3971b4df, "snd_ecards_limit" },
	{ 0x5792f848, "strlcpy" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xdf46d4f1, "module_put" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x8e17faf3, "put_device" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xe7a7a03f, "get_device" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xc26ead3f, "snd_fasync_helper" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0x37a0cba, "kfree" },
	{ 0x25522ab1, "snd_info_free_entry" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0xdb2d5c16, "dev_set_name" },
	{ 0x5e515be6, "ktime_get_ts64" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x8847ae0c, "snd_info_create_module_entry" },
	{ 0x3496ec42, "snd_info_register" },
	{ 0x6d71399f, "try_module_get" },
};

MODULE_INFO(depends, "snd");


MODULE_INFO(srcversion, "1CDB82E1A8D2BFC3917E1BA");
