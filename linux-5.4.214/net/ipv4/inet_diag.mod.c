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
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x10825ed5, "sock_diag_put_meminfo" },
	{ 0x754d539c, "strlen" },
	{ 0xee2730b2, "from_kuid_munged" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x18350ef9, "sock_diag_unregister" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x9abd0bb8, "sock_i_ino" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xbe92ed72, "skb_trim" },
	{ 0xcf431496, "sock_diag_register" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xcd279169, "nla_find" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x839e2ef7, "nla_put" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8f4f774, "netlink_unicast" },
	{ 0x9ed8133a, "nla_reserve_64bit" },
	{ 0xf665f74f, "sock_load_diag_module" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x92f8784b, "__alloc_skb" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x69fffe6c, "sock_diag_unregister_inet_compat" },
	{ 0xd8e6cdd2, "kfree_skb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xbc00ded1, "inet6_lookup" },
	{ 0xa5c2eadd, "sock_gen_put" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x37a0cba, "kfree" },
	{ 0x8b77fb69, "sock_diag_check_cookie" },
	{ 0xf1dca5b6, "sock_diag_save_cookie" },
	{ 0xabbf1703, "__inet_lookup_listener" },
	{ 0xb8b5d4ef, "sock_diag_register_inet_compat" },
	{ 0xa6884eab, "__nlmsg_put" },
	{ 0x473afe6b, "sock_i_uid" },
	{ 0xfe87cdd0, "__netlink_dump_start" },
	{ 0x2e58bb1c, "netlink_net_capable" },
	{ 0x36b1ef99, "__inet_lookup_established" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "6FF180708791AFCA1BFB527");
