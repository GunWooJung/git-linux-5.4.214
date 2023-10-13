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
	{ 0xcc445ceb, "__sg_page_iter_dma_next" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x6b9a57ad, "ib_set_device_ops" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0x7f3966fa, "debugfs_create_dir" },
	{ 0x4e2e10d2, "be_roce_mcc_cmd" },
	{ 0x754d539c, "strlen" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x3854774b, "kstrtoll" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xccd4c999, "__sg_page_iter_start" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x5c75775f, "dma_free_attrs" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0xd0a46a6a, "debugfs_create_file" },
	{ 0x2554d3cd, "be_roce_register_driver" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x5b1c5c13, "debugfs_remove_recursive" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xcf4b6c7d, "ib_dealloc_device" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x50d1f870, "pgprot_writecombine" },
	{ 0xfb578fc5, "memset" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x925b1648, "ib_query_port" },
	{ 0x5792f848, "strlcpy" },
	{ 0x532b1a31, "dma_alloc_attrs" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x1879c565, "ib_umem_get" },
	{ 0xd827a719, "ib_device_set_netdev" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xcf26205f, "be_roce_unregister_driver" },
	{ 0x32ee9868, "simple_open" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x9e615457, "ib_dispatch_event" },
	{ 0xf11543ff, "find_first_zero_bit" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xc9a835aa, "ib_umem_page_count" },
	{ 0xa916b694, "strnlen" },
	{ 0xb665f56d, "__cachemode2pte_tbl" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x6aff694d, "ib_register_device" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x1a8a180a, "ib_unregister_device" },
	{ 0xd0c1e622, "pci_read_config_dword" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xd0d2c533, "_ib_alloc_device" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x37a0cba, "kfree" },
	{ 0x82c93f75, "remap_pfn_range" },
	{ 0x131081e5, "ib_sg_to_pages" },
	{ 0x69acdf38, "memcpy" },
	{ 0x99b23286, "ib_modify_qp_is_ok" },
	{ 0x96848186, "scnprintf" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x4e4ec485, "rdma_read_gid_l2_fields" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x4a453f53, "iowrite32" },
	{ 0xc60d0620, "__num_online_cpus" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x512a75f3, "ib_umem_release" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x8a35b432, "sme_me_mask" },
};

MODULE_INFO(depends, "ib_core,be2net,ib_uverbs");


MODULE_INFO(srcversion, "610F8432378531777CBEA1D");
