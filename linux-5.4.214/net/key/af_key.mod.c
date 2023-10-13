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
	{ 0x86b18dbf, "sock_no_sendpage" },
	{ 0xc3fec769, "sock_no_mmap" },
	{ 0x71bd10b7, "sock_no_getsockopt" },
	{ 0x1b4d36bf, "sock_no_setsockopt" },
	{ 0xcc0f2a0e, "sock_no_shutdown" },
	{ 0xe0558df8, "sock_no_listen" },
	{ 0xb6d603e5, "sock_no_ioctl" },
	{ 0x7407e9a5, "datagram_poll" },
	{ 0x9525f20, "sock_no_getname" },
	{ 0x66764b9d, "sock_no_accept" },
	{ 0x91857821, "sock_no_socketpair" },
	{ 0x31e63a04, "sock_no_connect" },
	{ 0xc0e103cb, "sock_no_bind" },
	{ 0x7030fb9a, "xfrm_register_km" },
	{ 0xefde0a5a, "sock_register" },
	{ 0x1709a80e, "register_pernet_subsys" },
	{ 0x79be1f9a, "proto_register" },
	{ 0x7b03533c, "proto_unregister" },
	{ 0xc21708cd, "unregister_pernet_subsys" },
	{ 0x62737e1d, "sock_unregister" },
	{ 0xa8e1810b, "xfrm_unregister_km" },
	{ 0x5e327200, "xfrm_audit_policy_add" },
	{ 0xb4e0ba90, "xfrm_policy_insert" },
	{ 0x3b704b52, "xfrm_policy_alloc" },
	{ 0xa9c63b69, "security_xfrm_policy_free" },
	{ 0x29b8da2e, "xfrm_policy_bysel_ctx" },
	{ 0xc65304b3, "security_xfrm_policy_alloc" },
	{ 0x72395dc1, "xfrm_calg_get_byid" },
	{ 0x5c699441, "xfrm_aalg_get_byid" },
	{ 0x6eafd60f, "xfrm_state_add" },
	{ 0x3a90e42c, "xfrm_audit_state_add" },
	{ 0x76df4ae4, "xfrm_state_update" },
	{ 0x5cf05124, "xfrm_init_state" },
	{ 0xe914e41e, "strcpy" },
	{ 0xc80741, "xfrm_ealg_get_byid" },
	{ 0x37a0cba, "kfree" },
	{ 0x27866435, "security_xfrm_state_alloc" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xd38e908c, "xfrm_state_alloc" },
	{ 0xb9c1c67c, "xfrm_alloc_spi" },
	{ 0xfeb5d0aa, "verify_spi_info" },
	{ 0x2cfd943, "xfrm_find_acq" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x522cfd1f, "xfrm_find_acq_byseq" },
	{ 0xfc6f9cca, "__xfrm_state_destroy" },
	{ 0xc79a83f0, "xfrm_audit_state_delete" },
	{ 0xeaa1c4c1, "xfrm_state_delete" },
	{ 0xc599a772, "security_xfrm_state_delete" },
	{ 0x3b22c0f2, "xfrm_policy_destroy" },
	{ 0x40927639, "xfrm_audit_policy_delete" },
	{ 0xfd77048a, "xfrm_policy_byid" },
	{ 0x285c8d25, "sk_free" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x8ad29bab, "_raw_write_unlock_bh" },
	{ 0xe1ed698d, "_raw_write_lock_bh" },
	{ 0xd6f50cf7, "xfrm_ealg_get_byname" },
	{ 0xaab23340, "xfrm_calg_get_byname" },
	{ 0x37a02412, "xfrm_aalg_get_byname" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xffd8af80, "sock_init_data" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xefb8cb40, "sk_alloc" },
	{ 0xe0e3cea6, "ns_capable" },
	{ 0xf35c34b3, "km_state_notify" },
	{ 0xa8ba7f04, "xfrm_state_flush" },
	{ 0xee5c9a31, "km_policy_notify" },
	{ 0x27fdf61e, "xfrm_policy_flush" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xc6b1fdbe, "xfrm_aalg_get_byidx" },
	{ 0xb73be794, "xfrm_ealg_get_byidx" },
	{ 0x7a8ca627, "xfrm_count_pfkey_enc_supported" },
	{ 0xa575945, "xfrm_count_pfkey_auth_supported" },
	{ 0x28e23139, "xfrm_probe_algs" },
	{ 0xcbaa4b74, "remove_proc_entry" },
	{ 0x69acdf38, "memcpy" },
	{ 0xfb578fc5, "memset" },
	{ 0x1e9edfb7, "seq_hlist_start_head_rcu" },
	{ 0x67b78eb3, "seq_hlist_next_rcu" },
	{ 0x58f84c2d, "seq_printf" },
	{ 0xee2730b2, "from_kuid_munged" },
	{ 0x473afe6b, "sock_i_uid" },
	{ 0x9abd0bb8, "sock_i_ino" },
	{ 0xf4d0b8fb, "proc_create_net_data" },
	{ 0xce71465f, "xfrm_state_lookup" },
	{ 0xf7505b0c, "xfrm_state_walk" },
	{ 0x785b8961, "xfrm_state_walk_done" },
	{ 0x2782b393, "xfrm_state_walk_init" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x5a955fde, "skb_copy" },
	{ 0xc4a9f597, "_copy_from_iter_full" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xf89bc02c, "skb_put" },
	{ 0xc9df055a, "xfrm_policy_walk_init" },
	{ 0xebb3f0e4, "__sock_recv_ts_and_drops" },
	{ 0x3d81c1b, "skb_free_datagram" },
	{ 0x6dc0618f, "skb_copy_datagram_iter" },
	{ 0x3f37e34f, "skb_recv_datagram" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xc5850110, "printk" },
	{ 0xf89e6197, "skb_queue_purge" },
	{ 0x4174ccc0, "xfrm_policy_walk_done" },
	{ 0x6d3c4b5c, "xfrm_policy_walk" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xe7b00dfb, "__x86_indirect_thunk_r13" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0xc502ef3, "skb_queue_tail" },
	{ 0x69828cc9, "sock_rfree" },
	{ 0x30313dd3, "skb_clone" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xd8e6cdd2, "kfree_skb" },
	{ 0x92f8784b, "__alloc_skb" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "xfrm_algo");


MODULE_INFO(srcversion, "5FAD7D27A6024495600A57E");
