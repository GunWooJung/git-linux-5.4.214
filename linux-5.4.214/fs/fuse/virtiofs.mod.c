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
	{ 0xf888ca21, "sg_init_table" },
	{ 0x2b877809, "fuse_free_conn" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x1c4c20a6, "fuse_fill_super_common" },
	{ 0x698a7ead, "fuse_request_end" },
	{ 0x2d1894ab, "fuse_get_unique" },
	{ 0x855984bf, "deactivate_locked_super" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xd9b85ef6, "lockref_get" },
	{ 0xe793cffb, "fuse_conn_put" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xf3cdabc9, "virtqueue_kick_prepare" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x6bfe1415, "fuse_conn_init" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x577e0270, "virtqueue_get_buf" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xf2322fbf, "fuse_send_init" },
	{ 0xfb578fc5, "memset" },
	{ 0x4dcd739, "virtqueue_add_sgs" },
	{ 0xaf7d0f48, "current_task" },
	{ 0xc5850110, "printk" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x977beaa3, "virtqueue_disable_cb" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xa07a37f0, "memchr" },
	{ 0x95011dbd, "fuse_dev_install" },
	{ 0x98d39476, "fuse_dev_free" },
	{ 0x24ba344d, "fuse_dev_alloc" },
	{ 0x254ca682, "virtqueue_notify" },
	{ 0x5061a726, "fuse_dequeue_forget" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x2dd8ce63, "fuse_kill_sb_anon" },
	{ 0x12a38747, "usleep_range" },
	{ 0x580796e, "unregister_virtio_driver" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xd9326c9e, "fuse_conn_get" },
	{ 0xb5e73116, "flush_delayed_work" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x552dad9, "register_filesystem" },
	{ 0xb320cc0e, "sg_init_one" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x1c072657, "sget_fc" },
	{ 0xd07f543, "get_anon_bdev" },
	{ 0xffea46b5, "unregister_filesystem" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x42651f42, "virtqueue_is_broken" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x19c11c2c, "virtqueue_enable_cb" },
	{ 0xdd626ee3, "fuse_len_args" },
	{ 0xba3f45f1, "register_virtio_driver" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("virtio:d0000001Av*");

MODULE_INFO(srcversion, "79E70B046FD1D91F3912D60");
