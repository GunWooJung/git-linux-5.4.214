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
	{ 0x5128f95e, "class_find_device" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x8082397, "get_net_ns_by_fd" },
	{ 0x9bc2f868, "register_pernet_device" },
	{ 0x7381287f, "trace_handle_return" },
	{ 0xcea37297, "genl_register_family" },
	{ 0x984ce9bd, "__nla_parse" },
	{ 0x754d539c, "strlen" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x818cbb36, "genl_unregister_family" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xaf822806, "dev_change_net_namespace" },
	{ 0x5098caed, "dev_get_by_name" },
	{ 0x80a3f18, "device_match_name" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0xa1f9a134, "__x86_indirect_thunk_rsi" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x56470118, "__warn_printk" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x10ad27ea, "trace_event_buffer_reserve" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x81ae5ce, "get_net_ns_by_pid" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xe1ddc39c, "__put_net" },
	{ 0x1c780ca5, "bpf_trace_run3" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xbe92ed72, "skb_trim" },
	{ 0x90a69765, "__pskb_pull_tail" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x7d709b59, "trace_define_field" },
	{ 0xa6c8dbac, "dev_set_mac_address" },
	{ 0xce2f01d5, "device_del" },
	{ 0x3d9313cd, "bpf_trace_run1" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x4edc58ab, "unregister_pernet_device" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0xa191fd37, "class_unregister" },
	{ 0xe7b00dfb, "__x86_indirect_thunk_r13" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x5ee176e6, "trace_event_reg" },
	{ 0x839e2ef7, "nla_put" },
	{ 0x5792f848, "strlcpy" },
	{ 0xd523d85d, "skb_push" },
	{ 0xdf0ff0cf, "dev_get_by_index" },
	{ 0x8f4f774, "netlink_unicast" },
	{ 0x5fe1c3f, "device_add" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0xbed6138e, "skb_pull" },
	{ 0x721c9d1f, "init_net" },
	{ 0x5fd264df, "__class_register" },
	{ 0x91e923db, "perf_trace_run_bpf_submit" },
	{ 0xe4bf5722, "__dev_get_by_index" },
	{ 0xad5f0017, "perf_trace_buf_alloc" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x4660aeaf, "class_for_each_device" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x92f8784b, "__alloc_skb" },
	{ 0x2940585f, "netlink_broadcast" },
	{ 0x189a4736, "trace_event_ignore_this_pid" },
	{ 0x8e17faf3, "put_device" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0xd8e6cdd2, "kfree_skb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x188285ed, "genl_family_attrbuf" },
	{ 0x79a4237e, "trace_event_buffer_commit" },
	{ 0xaa8cb09, "device_rename" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xe7a7a03f, "get_device" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xdb2f9f5e, "event_triggers_call" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x68e4245a, "bpf_trace_run2" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xf603e82d, "trace_event_raw_init" },
	{ 0x8f57e5bf, "genlmsg_put" },
	{ 0x6b640864, "nla_strlcpy" },
	{ 0x535449e7, "device_initialize" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x6f18b0e3, "nla_put_64bit" },
	{ 0xf86c3947, "trace_raw_output_prep" },
	{ 0x525d0aa3, "trace_seq_printf" },
	{ 0x836962a0, "trace_output_call" },
	{ 0xdb2d5c16, "dev_set_name" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x2ec9f914, "bpf_trace_run4" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xe914e41e, "strcpy" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "ACD9010AFD187DED0562761");
