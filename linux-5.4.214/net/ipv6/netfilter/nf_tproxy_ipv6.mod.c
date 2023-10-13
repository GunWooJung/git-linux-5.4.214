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
	{ 0xe0a3a4b8, "inet6_lookup_listener" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x463219fb, "tcp_hashinfo" },
	{ 0xf7b8aea1, "udp6_lib_lookup" },
	{ 0xa4834d6e, "__inet6_lookup_established" },
	{ 0x285c8d25, "sk_free" },
	{ 0xb3d77dfe, "inet_twsk_deschedule_put" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x150e3657, "_raw_read_lock_bh" },
	{ 0xad10eb8, "_raw_read_unlock_bh" },
	{ 0x5cb6526b, "skb_copy_bits" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "78B6D521AF07AEC03CA54A4");
