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
	{ 0x5ae8a115, "noop_llseek" },
	{ 0x558a4438, "scsi_change_queue_depth" },
	{ 0x8b95e7b, "pci_unregister_driver" },
	{ 0xf354855a, "__pci_register_driver" },
	{ 0x921f329, "pci_restore_state" },
	{ 0x3c0222d0, "pci_enable_wake" },
	{ 0xbce3803, "__register_chrdev" },
	{ 0xa0dd6d5a, "pci_enable_msi" },
	{ 0x74dbd78d, "sysfs_create_bin_file" },
	{ 0xf8c6e3da, "scsi_scan_host" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xa33bf30d, "scsi_add_host_with_dma" },
	{ 0x5c4e734e, "pci_iomap" },
	{ 0x4a5eb426, "pci_request_regions" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x8ed9fa14, "scsi_host_alloc" },
	{ 0x91e0d49, "dma_set_coherent_mask" },
	{ 0xf2d62900, "dma_set_mask" },
	{ 0xe549079f, "pci_try_set_mwi" },
	{ 0x8338fd8, "pci_set_master" },
	{ 0xf51bf8b0, "pci_enable_device" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x4007983b, "sdev_prefix_printk" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xd21e4276, "scsi_block_requests" },
	{ 0x5ed822bf, "scsi_unblock_requests" },
	{ 0x2c93838f, "scsi_dma_unmap" },
	{ 0x28fe4c90, "pci_disable_msi" },
	{ 0xf4e6656e, "scsi_host_put" },
	{ 0x982ccbd5, "pci_release_regions" },
	{ 0xedc03953, "iounmap" },
	{ 0x6bc3fbc0, "__unregister_chrdev" },
	{ 0x665ec217, "scsi_remove_host" },
	{ 0xdeb089a7, "sysfs_remove_bin_file" },
	{ 0x74c790d2, "pci_set_power_state" },
	{ 0x9dc6d8c9, "pci_choose_state" },
	{ 0xc5846169, "pci_disable_device" },
	{ 0x200dc428, "pci_save_state" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xf9a482f9, "msleep" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x5f3d4f66, "blk_queue_rq_timeout" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x532b1a31, "dma_alloc_attrs" },
	{ 0x37a0cba, "kfree" },
	{ 0x5c75775f, "dma_free_attrs" },
	{ 0x65e0d6d7, "memory_read_from_buffer" },
	{ 0xc6cbbc89, "capable" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x69acdf38, "memcpy" },
	{ 0x754d539c, "strlen" },
	{ 0xfe5d4bb2, "sys_tz" },
	{ 0x953e1b9e, "ktime_get_real_seconds" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xc5850110, "printk" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x87b8798d, "sg_next" },
	{ 0x1fce84d7, "scsi_dma_map" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v000013C1d00001010sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "823453F4E11F88D3193957E");
