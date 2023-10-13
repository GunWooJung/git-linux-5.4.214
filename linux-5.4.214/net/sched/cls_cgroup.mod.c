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
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xefaf2e4f, "tcf_queue_work" },
	{ 0xe423039, "tcf_em_tree_validate" },
	{ 0xda3caf8e, "tcf_exts_validate" },
	{ 0x984ce9bd, "__nla_parse" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xe1ddc39c, "__put_net" },
	{ 0x37a0cba, "kfree" },
	{ 0x10988c72, "tcf_em_tree_destroy" },
	{ 0xbe77d657, "tcf_exts_destroy" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xce993ebb, "__tcf_em_tree_match" },
	{ 0x64c0be9c, "tcf_action_exec" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x455467a, "task_cls_state" },
	{ 0xaf7d0f48, "current_task" },
	{ 0xbe92ed72, "skb_trim" },
	{ 0x7a5717d8, "tcf_exts_dump_stats" },
	{ 0xb9a2b615, "tcf_em_tree_dump" },
	{ 0x7e9513b6, "tcf_exts_dump" },
	{ 0x839e2ef7, "nla_put" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "2765DE0130AD429A710DE42");
