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
	{ 0x56470118, "__warn_printk" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0xda3caf8e, "tcf_exts_validate" },
	{ 0x949f7342, "__alloc_percpu" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x984ce9bd, "__nla_parse" },
	{ 0xefaf2e4f, "tcf_queue_work" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xe1ddc39c, "__put_net" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0xbe77d657, "tcf_exts_destroy" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x64c0be9c, "tcf_action_exec" },
	{ 0xd5df685, "tc_setup_cb_add" },
	{ 0x225ea1ed, "tc_setup_cb_destroy" },
	{ 0xe622feab, "tc_cleanup_flow_action" },
	{ 0x351ed18, "tc_setup_cb_reoffload" },
	{ 0x37a0cba, "kfree" },
	{ 0x4985e85e, "tc_setup_flow_action" },
	{ 0x5d5c2075, "flow_rule_alloc" },
	{ 0xe6bb828a, "tcf_exts_num_actions" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0xb4808209, "tc_setup_cb_call" },
	{ 0xbe92ed72, "skb_trim" },
	{ 0x7a5717d8, "tcf_exts_dump_stats" },
	{ 0x7e9513b6, "tcf_exts_dump" },
	{ 0x6f18b0e3, "nla_put_64bit" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xc5e4a5d1, "cpumask_next" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x839e2ef7, "nla_put" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "EE06ED4784A3A429C72C49E");
