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
	{ 0x1cd6f316, "param_ops_uint" },
	{ 0x5ae8a115, "noop_llseek" },
	{ 0x8b95e7b, "pci_unregister_driver" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x818cbb36, "genl_unregister_family" },
	{ 0xb4b1a06b, "class_destroy" },
	{ 0xf354855a, "__pci_register_driver" },
	{ 0xcea37297, "genl_register_family" },
	{ 0x5328374d, "__class_create" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x6a9a5a6c, "dma_direct_map_sg" },
	{ 0x94589e9e, "dma_direct_unmap_sg" },
	{ 0xeb9e913d, "sgl_alloc_order" },
	{ 0x6a03751f, "sgl_free_order" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xd267dbfb, "device_create" },
	{ 0x5314ccb0, "cdev_add" },
	{ 0xbec0cf29, "cdev_init" },
	{ 0xf11543ff, "find_first_zero_bit" },
	{ 0xf8c6e3da, "scsi_scan_host" },
	{ 0xa33bf30d, "scsi_add_host_with_dma" },
	{ 0x678b96ec, "dma_pool_alloc" },
	{ 0x5dfee392, "dma_pool_create" },
	{ 0x7ccefd28, "kmem_cache_alloc" },
	{ 0x51624e26, "kmem_cache_create" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x532b1a31, "dma_alloc_attrs" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xfb578fc5, "memset" },
	{ 0x8ed9fa14, "scsi_host_alloc" },
	{ 0x5c4e734e, "pci_iomap" },
	{ 0x4a5eb426, "pci_request_regions" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x56470118, "__warn_printk" },
	{ 0xecadd7c7, "dev_driver_string" },
	{ 0x6dd853a6, "dma_direct_map_page" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0xb526d94f, "dma_direct_unmap_page" },
	{ 0x9fe59f14, "dma_ops" },
	{ 0x53632dee, "scsi_report_bus_reset" },
	{ 0xf9a482f9, "msleep" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0x91e0d49, "dma_set_coherent_mask" },
	{ 0xf2d62900, "dma_set_mask" },
	{ 0x8338fd8, "pci_set_master" },
	{ 0xf51bf8b0, "pci_enable_device" },
	{ 0x3c0222d0, "pci_enable_wake" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0xd111bb59, "_dev_info" },
	{ 0xf4e6656e, "scsi_host_put" },
	{ 0x982ccbd5, "pci_release_regions" },
	{ 0xedc03953, "iounmap" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0x665ec217, "scsi_remove_host" },
	{ 0xad8df8fd, "cdev_del" },
	{ 0x14e23ddd, "device_destroy" },
	{ 0x74c790d2, "pci_set_power_state" },
	{ 0x9dc6d8c9, "pci_choose_state" },
	{ 0xc5846169, "pci_disable_device" },
	{ 0x200dc428, "pci_save_state" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x1000e51, "schedule" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x5ed822bf, "scsi_unblock_requests" },
	{ 0xd21e4276, "scsi_block_requests" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x921f329, "pci_restore_state" },
	{ 0xd8e6cdd2, "kfree_skb" },
	{ 0x2940585f, "netlink_broadcast" },
	{ 0x721c9d1f, "init_net" },
	{ 0x839e2ef7, "nla_put" },
	{ 0x8f57e5bf, "genlmsg_put" },
	{ 0x92f8784b, "__alloc_skb" },
	{ 0x4007983b, "sdev_prefix_printk" },
	{ 0xcffbc9e1, "scsi_add_device" },
	{ 0x278c6f8a, "scsi_device_put" },
	{ 0x71746698, "scsi_remove_device" },
	{ 0xbacd3b42, "scsi_device_get" },
	{ 0x2c93838f, "scsi_dma_unmap" },
	{ 0x1fce84d7, "scsi_dma_map" },
	{ 0x69acdf38, "memcpy" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x87b8798d, "sg_next" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xc6cbbc89, "capable" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x419892d3, "fasync_helper" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xf0f65023, "scmd_printk" },
	{ 0x1fff58f3, "blk_queue_max_hw_sectors" },
	{ 0x5f3d4f66, "blk_queue_rq_timeout" },
	{ 0x558a4438, "scsi_change_queue_depth" },
	{ 0x754d539c, "strlen" },
	{ 0x6a6e05bf, "kstrtou8" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x37a0cba, "kfree" },
	{ 0x5c75775f, "dma_free_attrs" },
	{ 0x92a881bb, "kmem_cache_destroy" },
	{ 0xb566a6c3, "kmem_cache_free" },
	{ 0xb5aa7165, "dma_pool_destroy" },
	{ 0x2f7754a8, "dma_pool_free" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xbf27fdc4, "pci_alloc_irq_vectors_affinity" },
	{ 0x339a5a9a, "pci_free_irq_vectors" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x226f7074, "pci_irq_vector" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x953e1b9e, "ktime_get_real_seconds" },
	{ 0x29361773, "complete" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb0de39d3, "pci_read_config_word" },
	{ 0x24d273d1, "add_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xe484e35f, "ioread32" },
	{ 0x4a453f53, "iowrite32" },
	{ 0xc5850110, "printk" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v000011F8d00005220sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "2A95A12258ECF0DA9FB0195");