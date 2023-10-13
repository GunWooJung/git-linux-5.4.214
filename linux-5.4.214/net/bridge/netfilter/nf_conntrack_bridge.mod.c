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
	{ 0x80198f66, "nf_ct_bridge_unregister" },
	{ 0xd7a1de06, "nf_ct_bridge_register" },
	{ 0xad263612, "consume_skb" },
	{ 0x19faf0c0, "kfree_skb_list" },
	{ 0x633f74f7, "ip_fraglist_prepare" },
	{ 0x4c77c7b0, "ip_fraglist_init" },
	{ 0x652900ee, "skb_checksum_help" },
	{ 0x605ff058, "br_ip6_fragment" },
	{ 0xe629c82a, "ip_frag_next" },
	{ 0xd960734c, "ip_frag_init" },
	{ 0x1f7a17ad, "nf_ct_deliver_cached_events" },
	{ 0xbdb8164d, "nf_confirm" },
	{ 0xa3d239b7, "__nf_conntrack_confirm" },
	{ 0xb71cf1a4, "ipv6_skip_exthdr" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xa1713526, "pskb_trim_rcsum_slow" },
	{ 0x90a69765, "__pskb_pull_tail" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x40b58f8f, "ip_defrag" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x6888ba47, "nf_conntrack_in" },
	{ 0xb6533de8, "nf_ct_frag6_gather" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xd8e6cdd2, "kfree_skb" },
	{ 0xcfb5d782, "pskb_expand_head" },
	{ 0x8c4d382b, "br_dev_queue_push_xmit" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "nf_conntrack,nf_defrag_ipv6,bridge");


MODULE_INFO(srcversion, "3F77922BAA5567129B9A49E");
