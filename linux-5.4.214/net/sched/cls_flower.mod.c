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
	{ 0xfa5c641, "unregister_tcf_proto_ops" },
	{ 0xfb25deee, "register_tcf_proto_ops" },
	{ 0xd9916c3a, "idr_alloc_u32" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x7b82b9a1, "idr_replace" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xda3caf8e, "tcf_exts_validate" },
	{ 0x1172d487, "rhashtable_insert_slow" },
	{ 0xcfc15f4b, "rht_bucket_nested_insert" },
	{ 0x593c1bac, "__x86_indirect_thunk_rbx" },
	{ 0x6f395e65, "__module_get" },
	{ 0x8e17b3ae, "idr_destroy" },
	{ 0x7665a95b, "idr_remove" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xd0d156e9, "__rht_bucket_nested" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x64c0be9c, "tcf_action_exec" },
	{ 0x86dc4c52, "__skb_flow_dissect" },
	{ 0xadf223fe, "skb_flow_dissect_ct" },
	{ 0xa90a92f0, "skb_flow_dissect_tunnel_info" },
	{ 0xdd12450c, "skb_flow_dissect_meta" },
	{ 0xb7f990e9, "rht_bucket_nested" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xe7b00dfb, "__x86_indirect_thunk_r13" },
	{ 0x7a5717d8, "tcf_exts_dump_stats" },
	{ 0x7e9513b6, "tcf_exts_dump" },
	{ 0x56470118, "__warn_printk" },
	{ 0x351ed18, "tc_setup_cb_reoffload" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x6d5f5b91, "radix_tree_tagged" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xcc1b882a, "idr_get_next_ul" },
	{ 0xefaf2e4f, "tcf_queue_work" },
	{ 0x20978fb9, "idr_find" },
	{ 0x754d539c, "strlen" },
	{ 0xe4bf5722, "__dev_get_by_index" },
	{ 0xbe92ed72, "skb_trim" },
	{ 0x1fc7a59b, "__nla_validate" },
	{ 0x67a8d5f, "__dev_get_by_name" },
	{ 0x6b640864, "nla_strlcpy" },
	{ 0x7abfca43, "rhashtable_init" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xe1ddc39c, "__put_net" },
	{ 0xbe77d657, "tcf_exts_destroy" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x839e2ef7, "nla_put" },
	{ 0xdf46d4f1, "module_put" },
	{ 0xe622feab, "tc_cleanup_flow_action" },
	{ 0xd5df685, "tc_setup_cb_add" },
	{ 0x4985e85e, "tc_setup_flow_action" },
	{ 0x5d5c2075, "flow_rule_alloc" },
	{ 0xe6bb828a, "tcf_exts_num_actions" },
	{ 0x225ea1ed, "tc_setup_cb_destroy" },
	{ 0x8f801d8d, "rhashtable_destroy" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x1e62643b, "skb_flow_dissector_init" },
	{ 0x8df92f66, "memchr_inv" },
	{ 0x69acdf38, "memcpy" },
	{ 0x984ce9bd, "__nla_parse" },
	{ 0xfb578fc5, "memset" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x37a0cba, "kfree" },
	{ 0xb4808209, "tc_setup_cb_call" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "112F03C3AA30EDDCDDBCBF5");
