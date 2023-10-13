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
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x3e817db3, "__skb_get_hash" },
	{ 0x86dc4c52, "__skb_flow_dissect" },
	{ 0xc025016c, "flow_keys_dissector" },
	{ 0xa5518745, "from_kuid" },
	{ 0xce993ebb, "__tcf_em_tree_match" },
	{ 0xfdb18336, "flow_get_u32_src" },
	{ 0x64c0be9c, "tcf_action_exec" },
	{ 0x3edcee5d, "from_kgid" },
	{ 0x2e19e1fa, "flow_get_u32_dst" },
	{ 0x5cb6526b, "skb_copy_bits" },
	{ 0xefaf2e4f, "tcf_queue_work" },
	{ 0xd81d14e9, "tcf_block_netif_keep_dst" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xd4ce891e, "init_user_ns" },
	{ 0xda3caf8e, "tcf_exts_validate" },
	{ 0xe423039, "tcf_em_tree_validate" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0x984ce9bd, "__nla_parse" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xe1ddc39c, "__put_net" },
	{ 0x37a0cba, "kfree" },
	{ 0x10988c72, "tcf_em_tree_destroy" },
	{ 0xbe77d657, "tcf_exts_destroy" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xbe92ed72, "skb_trim" },
	{ 0x7a5717d8, "tcf_exts_dump_stats" },
	{ 0xb9a2b615, "tcf_em_tree_dump" },
	{ 0x7e9513b6, "tcf_exts_dump" },
	{ 0x839e2ef7, "nla_put" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "354D21925A7B10C95156D7F");
