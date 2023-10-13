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
	{ 0xad8df8fd, "cdev_del" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xffd8af80, "sock_init_data" },
	{ 0xbec0cf29, "cdev_init" },
	{ 0x652126ef, "iov_iter_npages" },
	{ 0x245ee8f5, "__skb_gso_segment" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xa7e38f12, "flow_keys_basic_dissector" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0x86dc4c52, "__skb_flow_dissect" },
	{ 0xa8f98859, "skb_copy_datagram_from_iter" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x5c42b5ca, "no_llseek" },
	{ 0x56470118, "__warn_printk" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0x85acfe77, "sock_alloc_send_pskb" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0xeeaa2fe9, "skb_partial_csum_set" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x19faf0c0, "kfree_skb_list" },
	{ 0x90a69765, "__pskb_pull_tail" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x8e17b3ae, "idr_destroy" },
	{ 0xefb8cb40, "sk_alloc" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0xaf7d0f48, "current_task" },
	{ 0x6dc0618f, "skb_copy_datagram_iter" },
	{ 0xd523d85d, "skb_push" },
	{ 0x285c8d25, "sk_free" },
	{ 0xb8f11603, "idr_alloc" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x3e817db3, "__skb_get_hash" },
	{ 0x7665a95b, "idr_remove" },
	{ 0x245054f3, "build_skb" },
	{ 0x5314ccb0, "cdev_add" },
	{ 0x497dacfa, "dev_set_mac_address_user" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x652900ee, "skb_checksum_help" },
	{ 0x1000e51, "schedule" },
	{ 0xd8e6cdd2, "kfree_skb" },
	{ 0xc4a9f597, "_copy_from_iter_full" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x216cc777, "netdev_err" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xa743c686, "dev_get_mac_address" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x37a0cba, "kfree" },
	{ 0xd5fd90f1, "prepare_to_wait" },
	{ 0xfa1d449a, "iov_iter_advance" },
	{ 0x5a4896a8, "__put_user_2" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8f9c199c, "__get_user_2" },
	{ 0xad263612, "consume_skb" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0xba505b9b, "dev_queue_xmit" },
	{ 0xf89bc02c, "skb_put" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x20978fb9, "idr_find" },
	{ 0x5cb6526b, "skb_copy_bits" },
	{ 0x227a7e0a, "zerocopy_sg_from_iter" },
	{ 0x7beb3062, "_copy_to_iter" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "B23898C8107102EFDBC8457");
