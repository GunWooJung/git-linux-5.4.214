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
	{ 0x6bc3fbc0, "__unregister_chrdev" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x558a4438, "scsi_change_queue_depth" },
	{ 0xdeb089a7, "sysfs_remove_bin_file" },
	{ 0xe37407fe, "pci_release_region" },
	{ 0x8ed9fa14, "scsi_host_alloc" },
	{ 0x765395c3, "param_ops_int" },
	{ 0xa33bf30d, "scsi_add_host_with_dma" },
	{ 0x71746698, "scsi_remove_device" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xf2d62900, "dma_set_mask" },
	{ 0xe35ed617, "seq_puts" },
	{ 0xc5846169, "pci_disable_device" },
	{ 0x47939e0d, "__tasklet_hi_schedule" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x6bd0e573, "down_interruptible" },
	{ 0x58f84c2d, "seq_printf" },
	{ 0x5b55e1a4, "pcie_capability_read_dword" },
	{ 0xcbaa4b74, "remove_proc_entry" },
	{ 0xbce3803, "__register_chrdev" },
	{ 0x87b8798d, "sg_next" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x3c0222d0, "pci_enable_wake" },
	{ 0x5c75775f, "dma_free_attrs" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x953e1b9e, "ktime_get_real_seconds" },
	{ 0x21271fd0, "copy_user_enhanced_fast_string" },
	{ 0x91e0d49, "dma_set_coherent_mask" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x38b5452a, "dma_get_required_mask" },
	{ 0x8338fd8, "pci_set_master" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xfb578fc5, "memset" },
	{ 0x921f329, "pci_restore_state" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x1f199d24, "copy_user_generic_string" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x3885862f, "seq_putc" },
	{ 0xf8c6e3da, "scsi_scan_host" },
	{ 0x532b1a31, "dma_alloc_attrs" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0x24d273d1, "add_timer" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xf4e6656e, "scsi_host_put" },
	{ 0xa0dd6d5a, "pci_enable_msi" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x278c6f8a, "scsi_device_put" },
	{ 0xecdcabd2, "copy_user_generic_unrolled" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0xcffbc9e1, "scsi_add_device" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0xa916b694, "strnlen" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0xa0316fe8, "scsi_device_lookup" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xd0c1e622, "pci_read_config_dword" },
	{ 0xed8da4e6, "scsi_device_set_state" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x8b95e7b, "pci_unregister_driver" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x9ea53d7f, "vsnprintf" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x74c790d2, "pci_set_power_state" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x54496b4, "schedule_timeout_interruptible" },
	{ 0x37a0cba, "kfree" },
	{ 0x2c93838f, "scsi_dma_unmap" },
	{ 0x69acdf38, "memcpy" },
	{ 0x28fe4c90, "pci_disable_msi" },
	{ 0x35a218ab, "param_ops_long" },
	{ 0xedc03953, "iounmap" },
	{ 0x74dbd78d, "sysfs_create_bin_file" },
	{ 0xcf2a6966, "up" },
	{ 0xf354855a, "__pci_register_driver" },
	{ 0x53632dee, "scsi_report_bus_reset" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x665ec217, "scsi_remove_host" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x9dc6d8c9, "pci_choose_state" },
	{ 0x960650ec, "proc_create" },
	{ 0xf51bf8b0, "pci_enable_device" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0xb23de490, "pci_request_region" },
	{ 0x96e57448, "pcie_capability_write_word" },
	{ 0xec734f3a, "pcie_capability_read_word" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x200dc428, "pci_save_state" },
	{ 0xe914e41e, "strcpy" },
	{ 0x1fce84d7, "scsi_dma_map" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v0000117Cd00000049sv0000117Csd00000049bc*sc*i*");
MODULE_ALIAS("pci:v0000117Cd00000049sv0000117Csd0000004Abc*sc*i*");
MODULE_ALIAS("pci:v0000117Cd00000049sv0000117Csd0000004Bbc*sc*i*");
MODULE_ALIAS("pci:v0000117Cd00000049sv0000117Csd0000004Cbc*sc*i*");
MODULE_ALIAS("pci:v0000117Cd00000049sv0000117Csd0000004Dbc*sc*i*");
MODULE_ALIAS("pci:v0000117Cd00000049sv0000117Csd0000004Ebc*sc*i*");

MODULE_INFO(srcversion, "6FD17F8E8CC404B05896F70");
