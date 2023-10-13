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
	{ 0x81d5f41f, "lwtunnel_encap_del_ops" },
	{ 0xc6d72a18, "lwtunnel_encap_add_ops" },
	{ 0x37a0cba, "kfree" },
	{ 0x2208d51d, "lwtunnel_state_alloc" },
	{ 0xe413b0a4, "nla_get_labels" },
	{ 0x984ce9bd, "__nla_parse" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x839e2ef7, "nla_put" },
	{ 0x14394855, "nla_put_labels" },
	{ 0xd8e6cdd2, "kfree_skb" },
	{ 0x54947aef, "__skb_warn_lro_forwarding" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x9f9e2969, "neigh_xmit" },
	{ 0x91e8c716, "mpls_stats_inc_outucastpkts" },
	{ 0xd523d85d, "skb_push" },
	{ 0xcfb5d782, "pskb_expand_head" },
	{ 0xe628453b, "mpls_pkt_too_big" },
	{ 0xe54de9a1, "mpls_dev_mtu" },
	{ 0xc500460c, "mpls_output_possible" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "mpls_router");


MODULE_INFO(srcversion, "048A96D3F8D47F731D4293C");
