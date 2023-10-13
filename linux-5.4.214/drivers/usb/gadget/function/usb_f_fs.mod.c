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
	{ 0x2d3385d3, "system_wq" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x7aa1756e, "kvfree" },
	{ 0xc41263c7, "usb_ep_disable" },
	{ 0x6bfad17f, "usb_ep_enable" },
	{ 0xdf0f75c6, "eventfd_signal" },
	{ 0x754d539c, "strlen" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xffaa944, "usb_ep_queue" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0x263ed23b, "__x86_indirect_thunk_r12" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x6932b09e, "stream_open" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x5c42b5ca, "no_llseek" },
	{ 0x1027f50f, "generic_delete_inode" },
	{ 0x561501a1, "dput" },
	{ 0x56470118, "__warn_printk" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xa3b89be5, "dup_iter" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xc8a399bd, "d_add" },
	{ 0x40f79de7, "usb_ep_set_halt" },
	{ 0x999e8297, "vfree" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0xa0e62d4b, "usb_ep_alloc_request" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x6b926abb, "usb_function_unregister" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0xf21017d9, "mutex_trylock" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x3f9158a0, "d_delete" },
	{ 0x132d1553, "make_kgid" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0xfb578fc5, "memset" },
	{ 0x15b4a2e2, "kill_litter_super" },
	{ 0x82fcc0d0, "usb_put_function_instance" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xaf7d0f48, "current_task" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x9371479e, "unregister_gadget_item" },
	{ 0xc5850110, "printk" },
	{ 0x4b70bb1, "usb_ep_autoconfig" },
	{ 0xd67364f7, "eventfd_ctx_fdget" },
	{ 0x262e823a, "wait_for_completion_interruptible" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x318d6fec, "mutex_is_locked" },
	{ 0x5792f848, "strlcpy" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x5102a30b, "do_wait_intr_irq" },
	{ 0x3b346986, "config_group_init_type_name" },
	{ 0x2773c485, "__wake_up_locked" },
	{ 0x63e14d80, "usb_ep_clear_halt" },
	{ 0xb58f48a3, "use_mm" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x6d73fc48, "usb_function_register" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xc8ea074a, "usb_ep_dequeue" },
	{ 0xa916b694, "strnlen" },
	{ 0x658e845, "simple_dir_operations" },
	{ 0x8de894fe, "make_kuid" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0xc4a9f597, "_copy_from_iter_full" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x7fc51512, "config_ep_by_speed" },
	{ 0x5d6f9b17, "get_tree_nodev" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xd7039b79, "fs_parse" },
	{ 0xa36ea15e, "usb_ep_free_request" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x5c3e2747, "kiocb_set_cancel_fn" },
	{ 0x552dad9, "register_filesystem" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x3290abba, "logfc" },
	{ 0xe953b21f, "get_next_ino" },
	{ 0x28cb7cef, "usb_ep_fifo_status" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x7db9305a, "current_time" },
	{ 0x913fddba, "d_make_root" },
	{ 0x75d519a2, "simple_statfs" },
	{ 0xeaa5f763, "sg_alloc_table_from_pages" },
	{ 0x85c03267, "d_alloc_name" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xfa7bdbc3, "usb_interface_id" },
	{ 0xffea46b5, "unregister_filesystem" },
	{ 0x7f5b4fe4, "sg_free_table" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x29361773, "complete" },
	{ 0x3b0173be, "new_inode" },
	{ 0x941f2aaa, "eventfd_ctx_put" },
	{ 0xb0e602eb, "memmove" },
	{ 0x3e95082d, "vmalloc_to_page" },
	{ 0x9537cf77, "unuse_mm" },
	{ 0xa38602cd, "drain_workqueue" },
	{ 0x5591473d, "usb_ep_fifo_flush" },
	{ 0xa240dcea, "simple_dir_inode_operations" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x4b8163ed, "usb_string_ids_n" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x7beb3062, "_copy_to_iter" },
	{ 0x88db9f48, "__check_object_size" },
};

MODULE_INFO(depends, "udc-core,libcomposite");


MODULE_INFO(srcversion, "DE1CAF4E422B270455C1BB7");
