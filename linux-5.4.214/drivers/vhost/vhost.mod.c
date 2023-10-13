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
	{ 0xeb233a45, "__kmalloc" },
	{ 0x82de01e, "__put_devmap_managed_page" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x765395c3, "param_ops_int" },
	{ 0xdf0f75c6, "eventfd_signal" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xc7a1840e, "llist_add_batch" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0xf4b8948, "_copy_from_iter" },
	{ 0xa2926e9d, "set_page_dirty_lock" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xa39281d5, "mmput" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x21271fd0, "copy_user_enhanced_fast_string" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0xabaae129, "kthread_create_on_node" },
	{ 0x4fcc8ad2, "ex_handler_uaccess" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0xaf7d0f48, "current_task" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x85e73dd7, "kthread_stop" },
	{ 0xd67364f7, "eventfd_ctx_fdget" },
	{ 0xf8cde60, "get_task_mm" },
	{ 0x1f199d24, "copy_user_generic_string" },
	{ 0x120b336a, "__rb_insert_augmented" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xb58f48a3, "use_mm" },
	{ 0xca669996, "fput" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0xecdcabd2, "copy_user_generic_unrolled" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xddb1cd7, "llist_reverse_order" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0xc4a9f597, "_copy_from_iter_full" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xab37f21b, "wake_up_process" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x5e42703f, "iov_iter_init" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0x37a0cba, "kfree" },
	{ 0xd5fd90f1, "prepare_to_wait" },
	{ 0x1217c0a3, "eventfd_fget" },
	{ 0xfa1d449a, "iov_iter_advance" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xca9360b5, "rb_next" },
	{ 0x8c767383, "cgroup_attach_task_all" },
	{ 0x29361773, "complete" },
	{ 0x941f2aaa, "eventfd_ctx_put" },
	{ 0xcce57a7f, "param_ops_ushort" },
	{ 0x9537cf77, "unuse_mm" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x551bd071, "__rb_erase_color" },
	{ 0x7beb3062, "_copy_to_iter" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x75942744, "__put_page" },
	{ 0x6b060c79, "get_user_pages_fast" },
	{ 0x587f22d7, "devmap_managed_key" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "3DEBA80386ACCFF9CC6BE0B");
