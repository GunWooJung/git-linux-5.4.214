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
	{ 0x9193d81d, "nf_ct_tmpl_alloc" },
	{ 0x8366630b, "nf_ct_seqadj_init" },
	{ 0xe014893c, "nf_ct_tmpl_free" },
	{ 0x6f4fadf7, "ip_local_out" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x5a6cdb52, "nf_ct_zone_dflt" },
	{ 0xe35ed617, "seq_puts" },
	{ 0x58f84c2d, "seq_printf" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xcbaa4b74, "remove_proc_entry" },
	{ 0x452d7db2, "security_skb_classify_flow" },
	{ 0x949f7342, "__alloc_percpu" },
	{ 0x7c90376, "inet_proto_csum_replace4" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0xb47cca30, "csum_ipv6_magic" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0xc21708cd, "unregister_pernet_subsys" },
	{ 0xc09e8ca4, "nf_unregister_net_hooks" },
	{ 0x38129556, "skb_ensure_writable" },
	{ 0x9896c162, "ip_route_me_harder" },
	{ 0xe7eee3d5, "__cookie_v4_init_sequence" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x71f6670b, "__cookie_v6_check" },
	{ 0x92f8784b, "__alloc_skb" },
	{ 0xdeb0eda5, "nf_register_net_hooks" },
	{ 0xb71cf1a4, "ipv6_skip_exthdr" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xd8e6cdd2, "kfree_skb" },
	{ 0x1709a80e, "register_pernet_subsys" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf4d0b8fb, "proc_create_net_data" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x2a18c74, "nf_conntrack_destroy" },
	{ 0x39e703dd, "__nf_ip6_route" },
	{ 0xa9142780, "nf_ct_extend_unregister" },
	{ 0x6a5e2bde, "__cookie_v6_init_sequence" },
	{ 0x31ff672, "nf_ct_extend_register" },
	{ 0xdaf5c16e, "__cookie_v4_check" },
	{ 0xbec4c087, "ip6_local_out" },
	{ 0xad263612, "consume_skb" },
	{ 0xf89bc02c, "skb_put" },
	{ 0xf888b4dd, "xfrm_lookup" },
	{ 0x5cb6526b, "skb_copy_bits" },
	{ 0x5a513ff0, "nf_ct_ext_add" },
};

MODULE_INFO(depends, "nf_conntrack");


MODULE_INFO(srcversion, "639797C1095DC63D1B50EE1");
