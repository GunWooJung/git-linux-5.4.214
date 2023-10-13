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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xed93c0b3, "module_layout" },
	{ 0x6f4fadf7, "ip_local_out" },
	{ 0x2124474, "ip_send_check" },
	{ 0xcc92f447, "nf_ct_attach" },
	{ 0x899f833, "__icmp_send" },
	{ 0xa65722e8, "nf_ip_checksum" },
	{ 0x9896c162, "ip_route_me_harder" },
	{ 0x92f8784b, "__alloc_skb" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xd8e6cdd2, "kfree_skb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xba505b9b, "dev_queue_xmit" },
	{ 0xf89bc02c, "skb_put" },
	{ 0x5cb6526b, "skb_copy_bits" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "375490D6EABFD1D1D01F961");
