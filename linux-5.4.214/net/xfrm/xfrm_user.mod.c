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
	{ 0xa8e1810b, "xfrm_unregister_km" },
	{ 0xc21708cd, "unregister_pernet_subsys" },
	{ 0x7030fb9a, "xfrm_register_km" },
	{ 0x1709a80e, "register_pernet_subsys" },
	{ 0x6eafd60f, "xfrm_state_add" },
	{ 0x3a90e42c, "xfrm_audit_state_add" },
	{ 0x76df4ae4, "xfrm_state_update" },
	{ 0x8ff27328, "xfrm_dev_state_add" },
	{ 0x19aa359f, "xfrm_init_replay" },
	{ 0x27866435, "security_xfrm_state_alloc" },
	{ 0x9f3a4ff1, "__xfrm_init_state" },
	{ 0xaab23340, "xfrm_calg_get_byname" },
	{ 0xd6f50cf7, "xfrm_ealg_get_byname" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x37a02412, "xfrm_aalg_get_byname" },
	{ 0xe914e41e, "strcpy" },
	{ 0x49ca83, "xfrm_aead_get_byname" },
	{ 0xb9c1c67c, "xfrm_alloc_spi" },
	{ 0x2cfd943, "xfrm_find_acq" },
	{ 0x522cfd1f, "xfrm_find_acq_byseq" },
	{ 0xfeb5d0aa, "verify_spi_info" },
	{ 0x40927639, "xfrm_audit_policy_delete" },
	{ 0xc9975c65, "xfrm_policy_delete" },
	{ 0xfd77048a, "xfrm_policy_byid" },
	{ 0x98ace48d, "km_policy_expired" },
	{ 0x29b8da2e, "xfrm_policy_bysel_ctx" },
	{ 0xb2565cf0, "xfrm_state_free" },
	{ 0xe8ddd716, "km_query" },
	{ 0xd38e908c, "xfrm_state_alloc" },
	{ 0xb01bebf9, "xfrm_get_acqseq" },
	{ 0x37a0cba, "kfree" },
	{ 0xa9c63b69, "security_xfrm_policy_free" },
	{ 0x5e327200, "xfrm_audit_policy_add" },
	{ 0xb4e0ba90, "xfrm_policy_insert" },
	{ 0xc65304b3, "security_xfrm_policy_alloc" },
	{ 0x3b22c0f2, "xfrm_policy_destroy" },
	{ 0x293ec76c, "xfrm_spd_getinfo" },
	{ 0x8f4f774, "netlink_unicast" },
	{ 0x6ccf87e7, "xfrm_sad_getinfo" },
	{ 0xeaa1c4c1, "xfrm_state_delete" },
	{ 0xc599a772, "security_xfrm_state_delete" },
	{ 0x83ebaa39, "xfrm_state_lookup_byaddr" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xfc6f9cca, "__xfrm_state_destroy" },
	{ 0xc79a83f0, "xfrm_audit_state_delete" },
	{ 0xee939248, "__xfrm_state_delete" },
	{ 0xb76ecfce, "km_state_expired" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xce71465f, "xfrm_state_lookup" },
	{ 0xbe92ed72, "skb_trim" },
	{ 0xc5850110, "printk" },
	{ 0xd8e6cdd2, "kfree_skb" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x2940585f, "netlink_broadcast" },
	{ 0xa6884eab, "__nlmsg_put" },
	{ 0x92f8784b, "__alloc_skb" },
	{ 0xf7505b0c, "xfrm_state_walk" },
	{ 0x2782b393, "xfrm_state_walk_init" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xfe87cdd0, "__netlink_dump_start" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x984ce9bd, "__nla_parse" },
	{ 0x2e58bb1c, "netlink_net_capable" },
	{ 0xaf7d0f48, "current_task" },
	{ 0x6f18b0e3, "nla_put_64bit" },
	{ 0x9166fada, "strncpy" },
	{ 0x3b704b52, "xfrm_policy_alloc" },
	{ 0xec6bedce, "__netlink_kernel_create" },
	{ 0x785b8961, "xfrm_state_walk_done" },
	{ 0xc9df055a, "xfrm_policy_walk_init" },
	{ 0x6d3c4b5c, "xfrm_policy_walk" },
	{ 0x4174ccc0, "xfrm_policy_walk_done" },
	{ 0xf35c34b3, "km_state_notify" },
	{ 0xa8ba7f04, "xfrm_state_flush" },
	{ 0xee5c9a31, "km_policy_notify" },
	{ 0x27fdf61e, "xfrm_policy_flush" },
	{ 0x83ead741, "xfrm_policy_hash_rebuild" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x11a90242, "netlink_rcv_skb" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xe698f19a, "netlink_kernel_release" },
	{ 0x609f1c7e, "synchronize_net" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x839e2ef7, "nla_put" },
	{ 0x8e281574, "nla_reserve" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x69acdf38, "memcpy" },
	{ 0xe428c6a2, "netlink_has_listeners" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "xfrm_algo");


MODULE_INFO(srcversion, "B84D847236F29A76D61E670");
