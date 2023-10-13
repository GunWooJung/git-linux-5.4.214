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
	{ 0x765395c3, "param_ops_int" },
	{ 0x68a41536, "param_ops_bool" },
	{ 0x8b95e7b, "pci_unregister_driver" },
	{ 0xf354855a, "__pci_register_driver" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x56470118, "__warn_printk" },
	{ 0xecadd7c7, "dev_driver_string" },
	{ 0x87b8798d, "sg_next" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x6dd853a6, "dma_direct_map_page" },
	{ 0x1fce84d7, "scsi_dma_map" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x665ec217, "scsi_remove_host" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xf0f65023, "scmd_printk" },
	{ 0x29361773, "complete" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xb526d94f, "dma_direct_unmap_page" },
	{ 0x9fe59f14, "dma_ops" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x2c93838f, "scsi_dma_unmap" },
	{ 0xf8c6e3da, "scsi_scan_host" },
	{ 0xd111bb59, "_dev_info" },
	{ 0xa33bf30d, "scsi_add_host_with_dma" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xbf27fdc4, "pci_alloc_irq_vectors_affinity" },
	{ 0x6a5cb5ee, "__get_free_pages" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x8ed9fa14, "scsi_host_alloc" },
	{ 0xaed06536, "_dev_warn" },
	{ 0x532b1a31, "dma_alloc_attrs" },
	{ 0x8338fd8, "pci_set_master" },
	{ 0x5c4e734e, "pci_iomap" },
	{ 0xc5846169, "pci_disable_device" },
	{ 0x4a5eb426, "pci_request_regions" },
	{ 0x91e0d49, "dma_set_coherent_mask" },
	{ 0xf2d62900, "dma_set_mask" },
	{ 0xf51bf8b0, "pci_enable_device" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xfb578fc5, "memset" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x278c6f8a, "scsi_device_put" },
	{ 0x71746698, "scsi_remove_device" },
	{ 0xf4e6656e, "scsi_host_put" },
	{ 0xcffbc9e1, "scsi_add_device" },
	{ 0xa0316fe8, "scsi_device_lookup" },
	{ 0x6b6ac946, "scsi_host_get" },
	{ 0xc5850110, "printk" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x5c75775f, "dma_free_attrs" },
	{ 0x37a0cba, "kfree" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x982ccbd5, "pci_release_regions" },
	{ 0x3bffcc92, "pci_iounmap" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x339a5a9a, "pci_free_irq_vectors" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x226f7074, "pci_irq_vector" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x558a4438, "scsi_change_queue_depth" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v000015ADd000007C0sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "1AC48583C3D0D6103190702");
