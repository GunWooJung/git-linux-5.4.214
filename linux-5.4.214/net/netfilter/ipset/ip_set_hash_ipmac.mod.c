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
	{ 0xc4ddfb09, "ip_set_type_unregister" },
	{ 0xf4adcb9b, "ip_set_type_register" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x5792f848, "strlcpy" },
	{ 0x754d539c, "strlen" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x69acdf38, "memcpy" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x351ac138, "ip_set_match_extensions" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x47884890, "system_power_efficient_wq" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x3b9fa2ad, "ip_set_elem_len" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0xf3b4d4ae, "ip_set_alloc" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xc5850110, "printk" },
	{ 0xbe92ed72, "skb_trim" },
	{ 0xc0a7a479, "ip_set_put_extensions" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x397f6231, "ip_set_free" },
	{ 0x37a0cba, "kfree" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xcbfd13dc, "ip_set_extensions" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x839e2ef7, "nla_put" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x4629334c, "__preempt_count" },
	{ 0xa293f8a6, "ip_set_get_ipaddr4" },
	{ 0xce8b1878, "__x86_indirect_thunk_r14" },
	{ 0x15895842, "ip_set_get_extensions" },
	{ 0x9e98722b, "ip_set_get_ipaddr6" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "ip_set");


MODULE_INFO(srcversion, "0A04B709AA945513FF2597C");
