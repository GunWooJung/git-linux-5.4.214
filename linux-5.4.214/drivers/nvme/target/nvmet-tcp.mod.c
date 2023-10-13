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
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x840342c6, "sgl_free" },
	{ 0xc306c3a8, "page_frag_alloc" },
	{ 0xb850330c, "kernel_sendmsg" },
	{ 0xe613a798, "inet_addr_is_any" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xc7a1840e, "llist_add_batch" },
	{ 0x8c11ebf4, "nvmet_req_uninit" },
	{ 0xd19d0ad8, "nvmet_ctrl_fatal_error" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x8629086e, "sock_release" },
	{ 0xfab3a2cc, "sock_recvmsg" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x87b8798d, "sg_next" },
	{ 0x463ac158, "nvmet_sq_init" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x97cc579a, "kernel_listen" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x4a3b923d, "__page_frag_cache_drain" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0xcb68ec89, "crypto_ahash_digest" },
	{ 0x61f8b9fc, "nvmet_req_execute" },
	{ 0x9c5412bb, "kernel_setsockopt" },
	{ 0xc5850110, "printk" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x998dfdfc, "inet_pton_with_scope" },
	{ 0xffb7c514, "ida_free" },
	{ 0x87a17f30, "iov_iter_kvec" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xb52aecf0, "nvmet_register_transport" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x5c8750d1, "kernel_sock_shutdown" },
	{ 0x71ce1069, "kernel_getsockname" },
	{ 0xbb058e64, "kernel_getpeername" },
	{ 0x721c9d1f, "init_net" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x2a25e351, "nvmet_req_init" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x6ebaf85e, "nvmet_unregister_transport" },
	{ 0xf58a9ae0, "kernel_sendpage" },
	{ 0x3a13f54a, "sgl_alloc" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x88e1d0f0, "page_frag_free" },
	{ 0x679eeb0, "nvmet_sq_destroy" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xf369487d, "crypto_destroy_tfm" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xa15892b8, "kernel_recvmsg" },
	{ 0xd0c2ac7b, "kernel_accept" },
	{ 0x8ad29bab, "_raw_write_unlock_bh" },
	{ 0xb320cc0e, "sg_init_one" },
	{ 0x150e3657, "_raw_read_lock_bh" },
	{ 0xad10eb8, "_raw_read_unlock_bh" },
	{ 0x37a0cba, "kfree" },
	{ 0xa2730dc8, "sock_create" },
	{ 0x9fe57d9, "kernel_bind" },
	{ 0xe1ed698d, "_raw_write_lock_bh" },
	{ 0x7a4497db, "kzfree" },
	{ 0xaf403515, "nvmet_req_complete" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xa084f79f, "cpumask_next_wrap" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0xe7a02573, "ida_alloc_range" },
	{ 0xb48657a3, "crypto_alloc_ahash" },
};

MODULE_INFO(depends, "nvmet");


MODULE_INFO(srcversion, "86ADBCED67B0BCD9BAACAE5");
