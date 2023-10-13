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
	{ 0x8b95e7b, "pci_unregister_driver" },
	{ 0xf354855a, "__pci_register_driver" },
	{ 0x3686ea09, "spi_print_msg" },
	{ 0x87b8798d, "sg_next" },
	{ 0xf0f65023, "scmd_printk" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x3e0b548e, "scsi_eh_prep_cmnd" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0xf9a482f9, "msleep" },
	{ 0xc7ba3d4e, "dev_printk" },
	{ 0xc5850110, "printk" },
	{ 0xf8c6e3da, "scsi_scan_host" },
	{ 0xa33bf30d, "scsi_add_host_with_dma" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x8ed9fa14, "scsi_host_alloc" },
	{ 0x85bd1608, "__request_region" },
	{ 0xf51bf8b0, "pci_enable_device" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x151f4898, "schedule_timeout_uninterruptible" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x7371f00b, "scsi_eh_restore_cmnd" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0xc5846169, "pci_disable_device" },
	{ 0x1035c7c2, "__release_region" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0xf4e6656e, "scsi_host_put" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x665ec217, "scsi_remove_host" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "scsi_transport_spi");

MODULE_ALIAS("pci:v0000134Ad00000001sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "D723D98F8B80778ABCAAF38");
