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
	{ 0x59d9d1e, "nf_ct_helper_expectfn_register" },
	{ 0xfbb42f00, "nf_nat_helper_register" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0xf62c8980, "nf_ct_helper_expectfn_unregister" },
	{ 0x36486fc8, "nf_nat_sip_hooks" },
	{ 0x428c961d, "nf_nat_helper_unregister" },
	{ 0x38129556, "skb_ensure_writable" },
	{ 0x22086816, "ct_sip_parse_numerical_param" },
	{ 0x38fe9741, "ct_sip_parse_request" },
	{ 0x7d10bcd2, "ct_sip_parse_address_param" },
	{ 0x96b29254, "strncasecmp" },
	{ 0x82b26364, "ct_sip_parse_header_uri" },
	{ 0x9ceb98ec, "nf_ct_seqadj_set" },
	{ 0xd088945b, "nf_ct_helper_log" },
	{ 0x6afb7c3, "nf_ct_unexpect_related" },
	{ 0xfe48351d, "nf_ct_expect_related_report" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x86d24201, "ct_sip_get_header" },
	{ 0x63a5797, "ct_sip_get_sdp_header" },
	{ 0xe046e330, "__nf_nat_mangle_tcp_packet" },
	{ 0xc8eabd6f, "nf_nat_mangle_udp_packet" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x9adb7399, "nf_conntrack_expect_lock" },
	{ 0xf6e6b0fa, "nf_nat_setup_info" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "nf_conntrack,nf_conntrack_sip,nf_nat");


MODULE_INFO(srcversion, "48A87ADD1D5F85C820B06F0");
