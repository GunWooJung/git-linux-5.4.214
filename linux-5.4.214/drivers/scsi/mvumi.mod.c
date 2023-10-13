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
	{ 0x8b95e7b, "pci_unregister_driver" },
	{ 0xf354855a, "__pci_register_driver" },
	{ 0xd0c1e622, "pci_read_config_dword" },
	{ 0xabaae129, "kthread_create_on_node" },
	{ 0xa33bf30d, "scsi_add_host_with_dma" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x8ed9fa14, "scsi_host_alloc" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x4a5eb426, "pci_request_regions" },
	{ 0x921f329, "pci_restore_state" },
	{ 0x3c0222d0, "pci_enable_wake" },
	{ 0xd0bb4ec1, "pci_write_config_dword" },
	{ 0xf51bf8b0, "pci_enable_device" },
	{ 0x12a38747, "usleep_range" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xab37f21b, "wake_up_process" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x69acdf38, "memcpy" },
	{ 0xb352177e, "find_first_bit" },
	{ 0xfe5d4bb2, "sys_tz" },
	{ 0x953e1b9e, "ktime_get_real_seconds" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x1000e51, "schedule" },
	{ 0xacc03556, "scsi_rescan_device" },
	{ 0xf9a482f9, "msleep" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0xaf7d0f48, "current_task" },
	{ 0x479c3c86, "find_next_zero_bit" },
	{ 0xc5850110, "printk" },
	{ 0xf4e6656e, "scsi_host_put" },
	{ 0x665ec217, "scsi_remove_host" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x85e73dd7, "kthread_stop" },
	{ 0x74c790d2, "pci_set_power_state" },
	{ 0x9dc6d8c9, "pci_choose_state" },
	{ 0xc5846169, "pci_disable_device" },
	{ 0x200dc428, "pci_save_state" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x532b1a31, "dma_alloc_attrs" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x94589e9e, "dma_direct_unmap_sg" },
	{ 0x87b8798d, "sg_next" },
	{ 0x6a9a5a6c, "dma_direct_map_sg" },
	{ 0x9fe59f14, "dma_ops" },
	{ 0x8112b3d2, "scsi_build_sense_buffer" },
	{ 0xaed06536, "_dev_warn" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xf0f65023, "scmd_printk" },
	{ 0x982ccbd5, "pci_release_regions" },
	{ 0x5c4e734e, "pci_iomap" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x3bffcc92, "pci_iounmap" },
	{ 0xf2d62900, "dma_set_mask" },
	{ 0x8338fd8, "pci_set_master" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x4a453f53, "iowrite32" },
	{ 0xe484e35f, "ioread32" },
	{ 0x278c6f8a, "scsi_device_put" },
	{ 0x71746698, "scsi_remove_device" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0xcffbc9e1, "scsi_add_device" },
	{ 0xa0316fe8, "scsi_device_lookup" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x37a0cba, "kfree" },
	{ 0x5c75775f, "dma_free_attrs" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00001B4Bd00009143sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001B4Bd00009580sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "89176CE19EA25297AC1B395");
