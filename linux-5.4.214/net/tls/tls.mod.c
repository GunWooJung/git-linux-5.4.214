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
	{ 0x2f2c95c4, "flush_work" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xa0554d18, "release_sock" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0x652126ef, "iov_iter_npages" },
	{ 0x53b954a2, "up_read" },
	{ 0xcbdd2046, "skb_to_sgvec" },
	{ 0xaad509c0, "strp_init" },
	{ 0x82de01e, "__put_devmap_managed_page" },
	{ 0x5531178, "sk_msg_zerocopy_from_iter" },
	{ 0xbbd962b3, "iov_iter_revert" },
	{ 0x6ad950b1, "tcp_rate_check_app_limited" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x36a1a406, "_copy_from_iter_nocache" },
	{ 0x5b37311c, "__tcp_bpf_recvmsg" },
	{ 0x7819de5, "sk_msg_alloc" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x461d16ca, "sg_nents" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0xb308c97d, "wait_woken" },
	{ 0x25965e37, "sk_msg_trim" },
	{ 0x6f7d8454, "strp_data_ready" },
	{ 0x4737c25d, "skb_copy_header" },
	{ 0xf4b8948, "_copy_from_iter" },
	{ 0x73588f11, "dst_release" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x87b8798d, "sg_next" },
	{ 0x16600439, "__strp_unpause" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x3603bc39, "sk_msg_free_nocharge" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xba200321, "skb_page_frag_refill" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x221eab6d, "scatterwalk_copychunks" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xd63da0f5, "sk_psock_drop" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0xf53d46bc, "tcp_register_ulp" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xe677827a, "skb_unlink" },
	{ 0x4d48a53e, "skb_cow_data" },
	{ 0xbe92ed72, "skb_trim" },
	{ 0x668b19a1, "down_read" },
	{ 0x9c3944b1, "sk_msg_free_partial" },
	{ 0xb47cca30, "csum_ipv6_magic" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x8cbd436, "clean_acked_data_disable" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0xf89e6197, "skb_queue_purge" },
	{ 0xba2c8b02, "sock_efree" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0x6d0d4418, "strp_check_rcv" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xaf7d0f48, "current_task" },
	{ 0x6dc0618f, "skb_copy_datagram_iter" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x9dee9893, "sk_msg_return_zero" },
	{ 0xc5850110, "printk" },
	{ 0x5c05256a, "lock_sock_nested" },
	{ 0x856099ca, "iov_iter_get_pages" },
	{ 0x3ed29fa2, "sock_recv_errqueue" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xeae0f496, "clean_acked_data_flush" },
	{ 0x87a17f30, "iov_iter_kvec" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x839e2ef7, "nla_put" },
	{ 0x567986c, "sk_stream_wait_memory" },
	{ 0xed66f1c2, "strp_done" },
	{ 0xc608afe2, "__sk_mem_reclaim" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x4a1b176b, "skb_store_bits" },
	{ 0x285c8d25, "sk_free" },
	{ 0x3c27d3f7, "crypto_aead_encrypt" },
	{ 0xce807a25, "up_write" },
	{ 0x6150e390, "crypto_req_done" },
	{ 0x57bc19d2, "down_write" },
	{ 0x55fee78, "crypto_aead_setkey" },
	{ 0x6ffe8e46, "inet_stream_ops" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xc502ef3, "skb_queue_tail" },
	{ 0xd0654aba, "woken_wake_function" },
	{ 0xa1d640b, "tcp_unregister_ulp" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x92f8784b, "__alloc_skb" },
	{ 0x12a38747, "usleep_range" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xd8e6cdd2, "kfree_skb" },
	{ 0x53a06473, "sk_msg_clone" },
	{ 0x7be8df8b, "sk_psock_tls_strp_read" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x7892cbb4, "do_tcp_sendpages" },
	{ 0xf369487d, "crypto_destroy_tfm" },
	{ 0x3c6c0490, "put_cmsg" },
	{ 0xe07288f9, "sk_msg_memcopy_from_iter" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x21f9ac16, "sk_stream_error" },
	{ 0x63613cc3, "strp_stop" },
	{ 0x10a0f609, "crypto_aead_decrypt" },
	{ 0xa7b55c9d, "crypto_aead_setauthsize" },
	{ 0x8ad29bab, "_raw_write_unlock_bh" },
	{ 0x3de67d85, "crypto_alloc_aead" },
	{ 0x72a27900, "skb_splice_bits" },
	{ 0x4957b5b, "clean_acked_data_enable" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xe1ed698d, "_raw_write_lock_bh" },
	{ 0xfa1d449a, "iov_iter_advance" },
	{ 0x5d8d96c3, "sk_psock_msg_verdict" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x29361773, "complete" },
	{ 0xad263612, "consume_skb" },
	{ 0xf89bc02c, "skb_put" },
	{ 0x7384ff24, "sk_page_frag_refill" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x5cb6526b, "skb_copy_bits" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x75942744, "__put_page" },
	{ 0x437d7097, "tcp_bpf_sendmsg_redir" },
	{ 0x587f22d7, "devmap_managed_key" },
	{ 0xa3fc2e85, "sk_msg_free" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "F0712D9642D37EF52B15922");
