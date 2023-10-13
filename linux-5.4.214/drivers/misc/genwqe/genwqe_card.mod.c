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
	{ 0xad8df8fd, "cdev_del" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xbec0cf29, "cdev_init" },
	{ 0xf9a482f9, "msleep" },
	{ 0xbefb1a0e, "put_pid" },
	{ 0x7405b58d, "pci_enable_sriov" },
	{ 0x339a5a9a, "pci_free_irq_vectors" },
	{ 0x82de01e, "__put_devmap_managed_page" },
	{ 0x7f3966fa, "debugfs_create_dir" },
	{ 0x7ee415d5, "single_open" },
	{ 0x9a34a2b, "crc_itu_t" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xf2d62900, "dma_set_mask" },
	{ 0x8ce08cc0, "single_release" },
	{ 0xe35ed617, "seq_puts" },
	{ 0xc5846169, "pci_disable_device" },
	{ 0xa2926e9d, "set_page_dirty_lock" },
	{ 0x9922f9f9, "pci_disable_sriov" },
	{ 0x58f84c2d, "seq_printf" },
	{ 0x14e23ddd, "device_destroy" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x5c75775f, "dma_free_attrs" },
	{ 0xd0a46a6a, "debugfs_create_file" },
	{ 0x2fa96f27, "device_create_with_groups" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x5b1c5c13, "debugfs_remove_recursive" },
	{ 0x21ba44a5, "seq_read" },
	{ 0xabaae129, "kthread_create_on_node" },
	{ 0x91e0d49, "dma_set_coherent_mask" },
	{ 0x68eaa423, "pci_reset_function" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x57d403e2, "debugfs_create_u32" },
	{ 0x8338fd8, "pci_set_master" },
	{ 0xb8e7ce2c, "__put_user_8" },
	{ 0xbf27fdc4, "pci_alloc_irq_vectors_affinity" },
	{ 0xaed06536, "_dev_warn" },
	{ 0xfb578fc5, "memset" },
	{ 0x70ad0c76, "pci_enable_pcie_error_reporting" },
	{ 0x921f329, "pci_restore_state" },
	{ 0x11089ac7, "_ctype" },
	{ 0x3bffcc92, "pci_iounmap" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0xaf7d0f48, "current_task" },
	{ 0xc5850110, "printk" },
	{ 0x85e73dd7, "kthread_stop" },
	{ 0xf1e046cc, "panic" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x419892d3, "fasync_helper" },
	{ 0x67ba7ebf, "debugfs_remove" },
	{ 0x6dd853a6, "dma_direct_map_page" },
	{ 0x532b1a31, "dma_alloc_attrs" },
	{ 0xf459eb14, "kill_pid" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x5314ccb0, "cdev_add" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0xd5968a27, "pci_select_bars" },
	{ 0xc6cbbc89, "capable" },
	{ 0xb526d94f, "dma_direct_unmap_page" },
	{ 0xd111bb59, "_dev_info" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0xd13ad021, "pci_set_pcie_reset_state" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xcb2a3167, "debugfs_create_x64" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1000e51, "schedule" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x6d334118, "__get_user_8" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xab37f21b, "wake_up_process" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5d8ca292, "pci_cfg_access_lock" },
	{ 0x8b95e7b, "pci_unregister_driver" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xda2b5d09, "seq_lseek" },
	{ 0x48baa369, "pci_sriov_get_totalvfs" },
	{ 0x37a0cba, "kfree" },
	{ 0x82c93f75, "remap_pfn_range" },
	{ 0xf354855a, "__pci_register_driver" },
	{ 0x96848186, "scnprintf" },
	{ 0xb4b1a06b, "class_destroy" },
	{ 0xde793eab, "kill_fasync" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x5c4e734e, "pci_iomap" },
	{ 0x9ac395e0, "pci_enable_device_mem" },
	{ 0x731cdee3, "pci_release_selected_regions" },
	{ 0x2ca6d6fe, "pci_request_selected_regions" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x5328374d, "__class_create" },
	{ 0xd2db26d7, "pci_cfg_access_unlock" },
	{ 0x9fe59f14, "dma_ops" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0x75942744, "__put_page" },
	{ 0x6b060c79, "get_user_pages_fast" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x200dc428, "pci_save_state" },
	{ 0x587f22d7, "devmap_managed_key" },
};

MODULE_INFO(depends, "crc-itu-t");

MODULE_ALIAS("pci:v00001014d0000044Bsv00001014sd0000035Fbc12sc00i00*");
MODULE_ALIAS("pci:v00001014d0000044Bsv00000000sd00000000bc12sc00i00*");
MODULE_ALIAS("pci:v00001014d00000000sv00000000sd00000000bc12sc00i00*");
MODULE_ALIAS("pci:v00001014d0000044Bsv00000000sd0000035Fbc12sc00i00*");
MODULE_ALIAS("pci:v00001014d00000000sv00000000sd0000035Fbc12sc00i00*");
MODULE_ALIAS("pci:v00001014d0000044Bsv00001014sd0000044Bbc12sc00i00*");

MODULE_INFO(srcversion, "170A733E5498B9E40468C1E");
