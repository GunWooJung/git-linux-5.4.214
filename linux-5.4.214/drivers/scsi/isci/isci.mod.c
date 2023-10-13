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
	{ 0x2f8dd6d2, "sas_change_queue_depth" },
	{ 0x94589e9e, "dma_direct_unmap_sg" },
	{ 0x7c18f158, "sas_release_transport" },
	{ 0x339a5a9a, "pci_free_irq_vectors" },
	{ 0x8ed9fa14, "scsi_host_alloc" },
	{ 0x27dd129b, "pcim_enable_device" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xa33bf30d, "scsi_add_host_with_dma" },
	{ 0x4117e0fc, "pcim_iomap_table" },
	{ 0x210139ed, "sas_drain_work" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xf2d62900, "dma_set_mask" },
	{ 0x3cdea3fa, "sas_ssp_task_response" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0xc5846169, "pci_disable_device" },
	{ 0x9a44951a, "sas_suspend_ha" },
	{ 0x56470118, "__warn_printk" },
	{ 0x87b8798d, "sg_next" },
	{ 0xe8eac546, "sas_task_abort" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xa99d2066, "pci_biosrom_size" },
	{ 0x817a1ece, "sas_phy_reset" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x1b52d46b, "sas_eh_target_reset_handler" },
	{ 0x91e0d49, "dma_set_coherent_mask" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x9cf8ea41, "sas_get_local_phy" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x8338fd8, "pci_set_master" },
	{ 0x4a8e3d34, "try_test_sas_gpio_gp_bit" },
	{ 0xd6d0f7d4, "scsi_is_host_device" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xbf27fdc4, "pci_alloc_irq_vectors_affinity" },
	{ 0xaed06536, "_dev_warn" },
	{ 0x45545df8, "sas_target_alloc" },
	{ 0x921f329, "pci_restore_state" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xaf7d0f48, "current_task" },
	{ 0xc5850110, "printk" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xe7b00dfb, "__x86_indirect_thunk_r13" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x7830e26a, "sas_ioctl" },
	{ 0x6dd853a6, "dma_direct_map_page" },
	{ 0xf8c6e3da, "scsi_scan_host" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xf4e6656e, "scsi_host_put" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xa0f493d9, "efi" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x94cf0662, "sas_unregister_ha" },
	{ 0x5f130ba8, "pcim_iomap_regions" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xb526d94f, "dma_direct_unmap_page" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x238746ab, "sas_register_ha" },
	{ 0x3db78030, "pci_map_biosrom" },
	{ 0xb5197d6, "sas_eh_abort_handler" },
	{ 0x76f87014, "sas_resume_ha" },
	{ 0x7cf7aeda, "devm_free_irq" },
	{ 0x8e17faf3, "put_device" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x82c9eb09, "sas_target_destroy" },
	{ 0x1000e51, "schedule" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x3d7aecc0, "sas_eh_device_reset_handler" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0xe14384d5, "sas_queuecommand" },
	{ 0xecadd7c7, "dev_driver_string" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x8b95e7b, "pci_unregister_driver" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xcedb223f, "sas_ata_schedule_reset" },
	{ 0x67d1160d, "sas_remove_host" },
	{ 0xdc67eaad, "param_ops_byte" },
	{ 0x226f7074, "pci_irq_vector" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x74c790d2, "pci_set_power_state" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x22203c3d, "sas_bios_param" },
	{ 0x6a9a5a6c, "dma_direct_map_sg" },
	{ 0x69acdf38, "memcpy" },
	{ 0x7d628444, "memcpy_fromio" },
	{ 0x8f884424, "sas_prep_resume_ha" },
	{ 0xf354855a, "__pci_register_driver" },
	{ 0x70d49a51, "sas_slave_alloc" },
	{ 0x80500894, "request_firmware" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x326425ca, "pci_unmap_biosrom" },
	{ 0x665ec217, "scsi_remove_host" },
	{ 0x9ed02ae3, "dmam_alloc_attrs" },
	{ 0x29361773, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xcce57a7f, "param_ops_ushort" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xff370275, "sas_slave_configure" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x1cd6f316, "param_ops_uint" },
	{ 0x51765820, "devm_request_threaded_irq" },
	{ 0x5c9109de, "release_firmware" },
	{ 0x59bde386, "sas_domain_attach_transport" },
	{ 0x9fe59f14, "dma_ops" },
	{ 0x200dc428, "pci_save_state" },
};

MODULE_INFO(depends, "libsas,scsi_transport_sas");

MODULE_ALIAS("pci:v00008086d00001D61sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001D63sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001D65sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001D67sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001D69sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001D6Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001D60sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001D62sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001D64sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001D66sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001D68sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001D6Asv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "CADE0A235448805F290D8DE");
