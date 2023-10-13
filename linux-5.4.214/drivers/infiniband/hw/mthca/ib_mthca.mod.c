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
	{ 0xa52ae5eb, "alloc_pages_current" },
	{ 0x6b9a57ad, "ib_set_device_ops" },
	{ 0x94589e9e, "dma_direct_unmap_sg" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xd0bb4ec1, "pci_write_config_dword" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xa2a46450, "pcix_set_mmrbc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0xf09b5d9a, "get_zeroed_page" },
	{ 0x339a5a9a, "pci_free_irq_vectors" },
	{ 0x82de01e, "__put_devmap_managed_page" },
	{ 0x765395c3, "param_ops_int" },
	{ 0x91eb9b4, "round_jiffies" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xf2d62900, "dma_set_mask" },
	{ 0xa0039fa, "ib_register_mad_agent" },
	{ 0x5094ac27, "pcie_set_readrq" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0xc5846169, "pci_disable_device" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x3bd23fd8, "dma_direct_sync_single_for_cpu" },
	{ 0xccd4c999, "__sg_page_iter_start" },
	{ 0x982ccbd5, "pci_release_regions" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x5c75775f, "dma_free_attrs" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0xb5aa7165, "dma_pool_destroy" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x91e0d49, "dma_set_coherent_mask" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x91b2b41d, "ib_free_send_mad" },
	{ 0xcf4b6c7d, "ib_dealloc_device" },
	{ 0xa4237c66, "rdma_destroy_ah_user" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x8338fd8, "pci_set_master" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xbf27fdc4, "pci_alloc_irq_vectors_affinity" },
	{ 0xaed06536, "_dev_warn" },
	{ 0xfb578fc5, "memset" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0xaf7d0f48, "current_task" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xae956dce, "ib_rate_to_mult" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x9084b044, "clear_page_erms" },
	{ 0x479c3c86, "find_next_zero_bit" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x925b1648, "ib_query_port" },
	{ 0x925493f, "clear_page_orig" },
	{ 0x5792f848, "strlcpy" },
	{ 0x6dd853a6, "dma_direct_map_page" },
	{ 0x532b1a31, "dma_alloc_attrs" },
	{ 0x947ed0b3, "pcix_get_max_mmrbc" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x1879c565, "ib_umem_get" },
	{ 0x6626afca, "down" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x2f7754a8, "dma_pool_free" },
	{ 0x24d273d1, "add_timer" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x5d1a32d0, "ib_get_cached_pkey" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xb7852a05, "ib_ud_header_init" },
	{ 0x9e615457, "ib_dispatch_event" },
	{ 0x228dba14, "ib_create_send_mad" },
	{ 0xf11543ff, "find_first_zero_bit" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0xcd2d4c76, "ib_post_send_mad" },
	{ 0x4f587cb4, "pci_find_capability" },
	{ 0x29f66da9, "ib_unregister_mad_agent" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xb526d94f, "dma_direct_unmap_page" },
	{ 0x23b4e0d7, "clear_page_rep" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x7ea3fb3a, "__free_pages" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0xb665f56d, "__cachemode2pte_tbl" },
	{ 0x6a5cb5ee, "__get_free_pages" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x6aff694d, "ib_register_device" },
	{ 0x1000e51, "schedule" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0xb9e7429c, "memcpy_toio" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0x1a8a180a, "ib_unregister_device" },
	{ 0xd0c1e622, "pci_read_config_dword" },
	{ 0x54f5b24a, "rdma_create_ah" },
	{ 0x678b96ec, "dma_pool_alloc" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x8b95e7b, "pci_unregister_driver" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xd0d2c533, "_ib_alloc_device" },
	{ 0x226f7074, "pci_irq_vector" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x37a0cba, "kfree" },
	{ 0x6a9a5a6c, "dma_direct_map_sg" },
	{ 0x82c93f75, "remap_pfn_range" },
	{ 0x4a5eb426, "pci_request_regions" },
	{ 0xedc03953, "iounmap" },
	{ 0xcf2a6966, "up" },
	{ 0xc1d7d8bf, "dma_direct_sync_single_for_device" },
	{ 0xf354855a, "__pci_register_driver" },
	{ 0x99b23286, "ib_modify_qp_is_ok" },
	{ 0xb352177e, "find_first_bit" },
	{ 0xa207ea98, "pci_get_device" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xe9e799fc, "ib_ud_header_pack" },
	{ 0xe7b52e5f, "mult_to_ib_rate" },
	{ 0x8423aab5, "pci_dev_put" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x29361773, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xf51bf8b0, "pci_enable_device" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x5dfee392, "dma_pool_create" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x96e57448, "pcie_capability_write_word" },
	{ 0x512a75f3, "ib_umem_release" },
	{ 0x9fe59f14, "dma_ops" },
	{ 0x75942744, "__put_page" },
	{ 0x6b060c79, "get_user_pages_fast" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x587f22d7, "devmap_managed_key" },
	{ 0x8a35b432, "sme_me_mask" },
};

MODULE_INFO(depends, "ib_core,ib_uverbs");

MODULE_ALIAS("pci:v000015B3d00005A44sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001867d00005A44sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d00006278sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001867d00006278sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d00006282sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001867d00006282sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d00006274sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001867d00006274sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d00005E8Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001867d00005E8Csv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "C6F48CE31AE238CC519276A");
