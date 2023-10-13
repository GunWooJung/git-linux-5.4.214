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
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x56470118, "__warn_printk" },
	{ 0xd81d14e9, "tcf_block_netif_keep_dst" },
	{ 0xab0e28d1, "bpf_prog_get_type_dev" },
	{ 0x7b82b9a1, "idr_replace" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x9bb7645b, "bpf_prog_create" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xda3caf8e, "tcf_exts_validate" },
	{ 0xd9916c3a, "idr_alloc_u32" },
	{ 0x984ce9bd, "__nla_parse" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0x8e17b3ae, "idr_destroy" },
	{ 0xc5850110, "printk" },
	{ 0xefaf2e4f, "tcf_queue_work" },
	{ 0x7665a95b, "idr_remove" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xe1ddc39c, "__put_net" },
	{ 0xbe77d657, "tcf_exts_destroy" },
	{ 0x754d539c, "strlen" },
	{ 0xbe92ed72, "skb_trim" },
	{ 0x7a5717d8, "tcf_exts_dump_stats" },
	{ 0x7e9513b6, "tcf_exts_dump" },
	{ 0x69acdf38, "memcpy" },
	{ 0x8e281574, "nla_reserve" },
	{ 0x839e2ef7, "nla_put" },
	{ 0xb4808209, "tc_setup_cb_call" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x3a26ed11, "sched_clock" },
	{ 0x64c0be9c, "tcf_action_exec" },
	{ 0xf84bd6ee, "bpf_stats_enabled_key" },
	{ 0x225ea1ed, "tc_setup_cb_destroy" },
	{ 0xd5df685, "tc_setup_cb_add" },
	{ 0x3b4c8cfa, "tc_setup_cb_replace" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x351ed18, "tc_setup_cb_reoffload" },
	{ 0xf5fa0fa1, "bpf_prog_put" },
	{ 0x37a0cba, "kfree" },
	{ 0x9f54f444, "bpf_prog_destroy" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "2C6DF610B46A35FFF577D7E");
