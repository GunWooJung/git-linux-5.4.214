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
	{ 0x6091797f, "synchronize_rcu" },
	{ 0xf62c8980, "nf_ct_helper_expectfn_unregister" },
	{ 0x59d9d1e, "nf_ct_helper_expectfn_register" },
	{ 0x24a19888, "nat_q931_hook" },
	{ 0x5200e418, "nat_callforwarding_hook" },
	{ 0xecd68581, "nat_h245_hook" },
	{ 0xdaee18e4, "nat_t120_hook" },
	{ 0xf73bcb0e, "nat_rtp_rtcp_hook" },
	{ 0x7a7d9960, "set_ras_addr_hook" },
	{ 0xc2784521, "set_sig_addr_hook" },
	{ 0x81d3b6e7, "set_h225_addr_hook" },
	{ 0x8967e330, "set_h245_addr_hook" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x6afb7c3, "nf_ct_unexpect_related" },
	{ 0x809bd052, "get_h225_addr" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xfe48351d, "nf_ct_expect_related_report" },
	{ 0xc5850110, "printk" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x5cb6526b, "skb_copy_bits" },
	{ 0xe046e330, "__nf_nat_mangle_tcp_packet" },
	{ 0xc8eabd6f, "nf_nat_mangle_udp_packet" },
	{ 0x1564c32f, "nf_nat_follow_master" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0xf6e6b0fa, "nf_nat_setup_info" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "nf_conntrack,nf_conntrack_h323,nf_nat");


MODULE_INFO(srcversion, "6444D29D128E41F19DC10B8");
