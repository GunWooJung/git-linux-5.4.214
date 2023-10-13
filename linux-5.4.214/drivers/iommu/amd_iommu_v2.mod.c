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
	{ 0x6d00f69e, "pci_bus_type" },
	{ 0xf09b5d9a, "get_zeroed_page" },
	{ 0xd4ac9607, "amd_iommu_rlookup_table" },
	{ 0x53b954a2, "up_read" },
	{ 0xefc574a, "amd_iommu_domain_clear_gcr3" },
	{ 0x864739ce, "amd_iommu_domain_direct_map" },
	{ 0x944b247f, "iommu_attach_group" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xaf56002d, "amd_iommu_domain_enable_v2" },
	{ 0x74576ed3, "translation_pre_enabled" },
	{ 0x912441de, "mmu_notifier_register" },
	{ 0xda5e5b2f, "amd_iommu_flush_page" },
	{ 0xa39281d5, "mmput" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x668b19a1, "down_read" },
	{ 0xdfc7f719, "amd_iommu_complete_ppr" },
	{ 0xbdd28134, "amd_iommu_flush_tlb" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xc5850110, "printk" },
	{ 0xf8cde60, "get_task_mm" },
	{ 0xd6f1e526, "mmu_notifier_unregister" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x4dcf3000, "get_dev_data" },
	{ 0x961509ac, "pci_get_domain_bus_and_slot" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x37d3dd7f, "iommu_domain_alloc" },
	{ 0xed98e7a2, "iommu_domain_free" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x15e9f423, "amd_iommu_domain_set_gcr3" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7525215c, "iommu_detach_group" },
	{ 0x1000e51, "schedule" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x89485687, "iommu_group_put" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8072efed, "handle_mm_fault" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x76fb08a7, "amd_iommu_unregister_ppr_notifier" },
	{ 0x37a0cba, "kfree" },
	{ 0x48d50e79, "amd_iommu_register_ppr_notifier" },
	{ 0xafd5ff2c, "amd_iommu_v2_supported" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x1b64a532, "iommu_group_get" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x9446d6f9, "find_extend_vma" },
	{ 0x8a35b432, "sme_me_mask" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "F1A1E550D21D17AAEA44F0B");
