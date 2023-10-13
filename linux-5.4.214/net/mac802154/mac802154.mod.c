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
	{ 0x958767a4, "register_netdevice" },
	{ 0x609f1c7e, "synchronize_net" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x7381287f, "trace_handle_return" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0xf6e20007, "ieee802154_hdr_push" },
	{ 0xa0c6befa, "hrtimer_cancel" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x30313dd3, "skb_clone" },
	{ 0x6abe343c, "wpan_phy_new" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x56470118, "__warn_printk" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xa6a40b7a, "__dev_kfree_skb_any" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x10ad27ea, "trace_event_buffer_reserve" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x1c780ca5, "bpf_trace_run3" },
	{ 0x21d3b421, "__dynamic_netdev_dbg" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xbe92ed72, "skb_trim" },
	{ 0x93e2c27e, "crypto_alloc_sync_skcipher" },
	{ 0x3807337, "ieee802154_hdr_pull" },
	{ 0x7d709b59, "trace_define_field" },
	{ 0xfbdfc558, "hrtimer_start_range_ns" },
	{ 0xaed06536, "_dev_warn" },
	{ 0xfb578fc5, "memset" },
	{ 0x838e8353, "netif_tx_wake_queue" },
	{ 0x3d9313cd, "bpf_trace_run1" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0x2816d12d, "free_netdev" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x5ee176e6, "trace_event_reg" },
	{ 0x2899f099, "netif_receive_skb" },
	{ 0x679d3770, "wpan_phy_free" },
	{ 0x5792f848, "strlcpy" },
	{ 0xea2ee738, "ieee802154_hdr_peek" },
	{ 0xd523d85d, "skb_push" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0x3c27d3f7, "crypto_aead_encrypt" },
	{ 0xb0836619, "wpan_phy_register" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x91e923db, "perf_trace_run_bpf_submit" },
	{ 0xad5f0017, "perf_trace_buf_alloc" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x55fee78, "crypto_aead_setkey" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xc502ef3, "skb_queue_tail" },
	{ 0xf8e4e17a, "skb_copy_expand" },
	{ 0xfe9dff34, "crypto_skcipher_decrypt" },
	{ 0x189a4736, "trace_event_ignore_this_pid" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xd8e6cdd2, "kfree_skb" },
	{ 0xc6fb8710, "alloc_netdev_mqs" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xf369487d, "crypto_destroy_tfm" },
	{ 0x79a4237e, "trace_event_buffer_commit" },
	{ 0xb0331968, "wpan_phy_unregister" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xeacd037, "ieee802154_hdr_peek_addrs" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x4aebfc6b, "unregister_netdevice_queue" },
	{ 0x52ecbc75, "crc_ccitt" },
	{ 0xdb2f9f5e, "event_triggers_call" },
	{ 0x10a0f609, "crypto_aead_decrypt" },
	{ 0xa7b55c9d, "crypto_aead_setauthsize" },
	{ 0xe8b1a3d2, "netdev_warn" },
	{ 0x68e4245a, "bpf_trace_run2" },
	{ 0x8ad29bab, "_raw_write_unlock_bh" },
	{ 0x3de67d85, "crypto_alloc_aead" },
	{ 0xb320cc0e, "sg_init_one" },
	{ 0x150e3657, "_raw_read_lock_bh" },
	{ 0xad10eb8, "_raw_read_unlock_bh" },
	{ 0xf603e82d, "trace_event_raw_init" },
	{ 0x955e6f68, "dev_alloc_name" },
	{ 0x1ee7d3cd, "hrtimer_init" },
	{ 0x53569707, "this_cpu_off" },
	{ 0xe1ed698d, "_raw_write_lock_bh" },
	{ 0x7a4497db, "kzfree" },
	{ 0x3b89b540, "skb_dequeue" },
	{ 0xf86c3947, "trace_raw_output_prep" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x525d0aa3, "trace_seq_printf" },
	{ 0xad263612, "consume_skb" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0xf89bc02c, "skb_put" },
	{ 0x2ec9f914, "bpf_trace_run4" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x87e2553b, "ieee802154_max_payload" },
	{ 0x7dd6f0c5, "crypto_skcipher_encrypt" },
};

MODULE_INFO(depends, "ieee802154");


MODULE_INFO(srcversion, "0AACBBE70CC72BF26F28253");
