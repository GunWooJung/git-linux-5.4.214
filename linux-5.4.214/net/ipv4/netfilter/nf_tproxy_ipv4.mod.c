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
	{ 0x89c7d4a2, "inet_twsk_put" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x463219fb, "tcp_hashinfo" },
	{ 0x285c8d25, "sk_free" },
	{ 0xb3d77dfe, "inet_twsk_deschedule_put" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xacd0f572, "udp4_lib_lookup" },
	{ 0xabbf1703, "__inet_lookup_listener" },
	{ 0x5cb6526b, "skb_copy_bits" },
	{ 0x36b1ef99, "__inet_lookup_established" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "696B0B6333AC5FE7C9D8A23");
