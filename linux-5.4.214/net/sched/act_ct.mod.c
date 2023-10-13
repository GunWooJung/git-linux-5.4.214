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
	{ 0x84ebc80a, "tcf_unregister_action" },
	{ 0xcbd937db, "tcf_register_action" },
	{ 0x5d9aa56a, "nf_ct_delete" },
	{ 0xa3d239b7, "__nf_conntrack_confirm" },
	{ 0xddc59624, "nf_ct_nat_ext_add" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x90a69765, "__pskb_pull_tail" },
	{ 0xa1713526, "pskb_trim_rcsum_slow" },
	{ 0xe616de5b, "nf_connlabels_replace" },
	{ 0x1f7a17ad, "nf_ct_deliver_cached_events" },
	{ 0xd8e6cdd2, "kfree_skb" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x40b58f8f, "ip_defrag" },
	{ 0x4629334c, "__preempt_count" },
	{ 0xb6533de8, "nf_ct_frag6_gather" },
	{ 0xcc9f9937, "ipv6_find_hdr" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0xd523d85d, "skb_push" },
	{ 0x6888ba47, "nf_conntrack_in" },
	{ 0x7f5f891f, "skb_pull_rcsum" },
	{ 0x2a18c74, "nf_conntrack_destroy" },
	{ 0xed6a91d5, "__tcf_idr_release" },
	{ 0x2a45f3e4, "tcf_idr_cleanup" },
	{ 0xd60bbe54, "tcf_idr_create" },
	{ 0x5c188742, "tcf_chain_put_by_act" },
	{ 0xf5285530, "tcf_action_set_ctrlact" },
	{ 0x9193d81d, "nf_ct_tmpl_alloc" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x978bde30, "tcf_action_check_ctrlact" },
	{ 0x2322d434, "tcf_idr_check_alloc" },
	{ 0x984ce9bd, "__nla_parse" },
	{ 0x365404bb, "nf_nat_icmpv6_reply_translation" },
	{ 0xb71cf1a4, "ipv6_skip_exthdr" },
	{ 0xf6e6b0fa, "nf_nat_setup_info" },
	{ 0x6b72cc93, "nf_nat_icmp_reply_translation" },
	{ 0xc85d60c, "nf_nat_packet" },
	{ 0x5cb6526b, "skb_copy_bits" },
	{ 0xb9a539be, "nf_nat_alloc_null_binding" },
	{ 0xc5850110, "printk" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x87098f51, "nf_connlabels_get" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xbe92ed72, "skb_trim" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0x6f18b0e3, "nla_put_64bit" },
	{ 0x7d0db45c, "jiffies_to_clock_t" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x839e2ef7, "nla_put" },
	{ 0x8df92f66, "memchr_inv" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x37a0cba, "kfree" },
	{ 0x3b7aa7c1, "tcf_idrinfo_destroy" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x3a23d32d, "nf_connlabels_put" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x1a9ead1e, "tcf_idr_search" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x5e982e4a, "tcf_generic_walker" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "nf_conntrack,nf_nat,nf_defrag_ipv6");


MODULE_INFO(srcversion, "6DA4BFA6F70D9F779C334EF");
