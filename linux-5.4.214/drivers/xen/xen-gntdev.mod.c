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
	{ 0x25f02c87, "xen_p2m_addr" },
	{ 0x94589e9e, "dma_direct_unmap_sg" },
	{ 0x45d14bdf, "hypercall_page" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x53b954a2, "up_read" },
	{ 0x82de01e, "__put_devmap_managed_page" },
	{ 0x9f3aba5e, "gnttab_map_refs" },
	{ 0x372cfd6e, "gnttab_end_foreign_access" },
	{ 0x765395c3, "param_ops_int" },
	{ 0x2ebef684, "vm_map_pages_zero" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xf2d62900, "dma_set_mask" },
	{ 0xfe727411, "get_phys_to_machine" },
	{ 0xc6401070, "gnttab_alloc_pages" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x8a19c5a, "dma_buf_detach" },
	{ 0x4b931968, "xen_features" },
	{ 0xd27f215d, "gnttab_alloc_grant_references" },
	{ 0x912441de, "mmu_notifier_register" },
	{ 0xa2926e9d, "set_page_dirty_lock" },
	{ 0x31dca4d8, "gnttab_claim_grant_reference" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xccd4c999, "__sg_page_iter_start" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xa39281d5, "mmput" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0xfc26a83, "gnttab_unmap_refs_async" },
	{ 0x3a7d80f9, "xen_max_p2m_pfn" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xf27d0a7b, "gnttab_grant_foreign_access_ref" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x91e0d49, "dma_set_coherent_mask" },
	{ 0xf21017d9, "mutex_trylock" },
	{ 0x668b19a1, "down_read" },
	{ 0x4fcc8ad2, "ex_handler_uaccess" },
	{ 0xfd94814e, "complete_all" },
	{ 0x93d1d424, "gnttab_free_grant_references" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x9312d80e, "evtchn_put" },
	{ 0x4b2e0ffe, "misc_register" },
	{ 0x9af0e090, "gnttab_free_pages" },
	{ 0xaf7d0f48, "current_task" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xf8cde60, "get_task_mm" },
	{ 0xd6f1e526, "mmu_notifier_unregister" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x660d76f7, "dma_buf_fd" },
	{ 0x6610e7a9, "apply_to_page_range" },
	{ 0x32c7a01e, "dma_buf_put" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xe34f7c4c, "dma_buf_get" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xa94a09bb, "mem_section" },
	{ 0x9688b217, "gnttab_batch_copy" },
	{ 0x7c9ca58f, "__sg_page_iter_next" },
	{ 0xfebb27d7, "dma_buf_unmap_attachment" },
	{ 0xca669996, "fput" },
	{ 0x43ab012a, "gnttab_dma_alloc_pages" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x2dcd8f37, "find_vma" },
	{ 0x15a2185f, "dma_buf_map_attachment" },
	{ 0x8fc1ff74, "dma_buf_export" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x3e69b741, "dma_buf_attach" },
	{ 0xb521eb78, "gnttab_dma_free_pages" },
	{ 0x37a0cba, "kfree" },
	{ 0x6a9a5a6c, "dma_direct_map_sg" },
	{ 0x731dba7a, "xen_domain_type" },
	{ 0xf5785b42, "evtchn_get" },
	{ 0xeaa5f763, "sg_alloc_table_from_pages" },
	{ 0x5a4896a8, "__put_user_2" },
	{ 0x3362b03c, "xen_p2m_size" },
	{ 0x7f5b4fe4, "sg_free_table" },
	{ 0x3165daa3, "arbitrary_virt_to_machine" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x35775925, "misc_deregister" },
	{ 0x9fe59f14, "dma_ops" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x75942744, "__put_page" },
	{ 0x6b060c79, "get_user_pages_fast" },
	{ 0x587f22d7, "devmap_managed_key" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "1C8DCD88D2A412D741751F2");
