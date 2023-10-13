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
	{ 0x2ecea361, "mptscsih_host_attrs" },
	{ 0x6648ca52, "mptscsih_show_info" },
	{ 0x10b58b4b, "mptscsih_bios_param" },
	{ 0xcde5795f, "mptscsih_change_queue_depth" },
	{ 0xbc163f7c, "mptscsih_slave_destroy" },
	{ 0xb070f590, "mptscsih_host_reset" },
	{ 0x7cff314, "mptscsih_dev_reset" },
	{ 0xa532e216, "mptscsih_abort" },
	{ 0x983931c4, "mptscsih_info" },
	{ 0xba6cf1e1, "mptscsih_resume" },
	{ 0x2c448d2b, "mptscsih_suspend" },
	{ 0x981efe92, "mpt_deregister" },
	{ 0xe6c1e126, "mpt_event_deregister" },
	{ 0x610b257e, "mpt_reset_deregister" },
	{ 0x8b95e7b, "pci_unregister_driver" },
	{ 0x7c18f158, "sas_release_transport" },
	{ 0xf354855a, "__pci_register_driver" },
	{ 0xf2d1bc1c, "mpt_reset_register" },
	{ 0x9e32efee, "mpt_event_register" },
	{ 0xd608879a, "mptscsih_scandv_complete" },
	{ 0x799332d8, "mptscsih_taskmgmt_complete" },
	{ 0x7e50fed2, "mpt_register" },
	{ 0xaf28bfb4, "mptscsih_io_done" },
	{ 0xedf7703f, "sas_attach_transport" },
	{ 0xecf1c741, "mpt_GetIocState" },
	{ 0x38e6e23e, "mptscsih_get_scsi_lookup" },
	{ 0x9edf6a30, "scsi_track_queue_full" },
	{ 0x8d8b870b, "mpt_raid_phys_disk_pg1" },
	{ 0x85afd560, "mpt_raid_phys_disk_get_num_paths" },
	{ 0x71746698, "scsi_remove_device" },
	{ 0x4953fc75, "mpt_findImVolumes" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xfac73794, "mptbase_sas_persist_operation" },
	{ 0xa33bf30d, "scsi_add_host_with_dma" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x8ed9fa14, "scsi_host_alloc" },
	{ 0xdcadcb27, "mptscsih_flush_running_cmds" },
	{ 0x79bdd1f4, "mpt_attach" },
	{ 0xcffbc9e1, "scsi_add_device" },
	{ 0x278c6f8a, "scsi_device_put" },
	{ 0xa0316fe8, "scsi_device_lookup" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x9cf23d91, "starget_for_each_device" },
	{ 0x9166fada, "strncpy" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x6b3eed9b, "scsi_is_sas_rphy" },
	{ 0x351e7a5f, "sas_expander_alloc" },
	{ 0x51221720, "sas_phy_free" },
	{ 0xb4f6243e, "sas_port_add" },
	{ 0xe6270791, "sas_port_alloc_num" },
	{ 0xc9f6f0f4, "sas_phy_alloc" },
	{ 0xae9dbc5f, "sas_phy_add" },
	{ 0x7e8562ce, "sas_port_mark_backlink" },
	{ 0xb4b78d35, "sas_port_add_phy" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x437729d5, "mptscsih_taskmgmt_response_code" },
	{ 0x4007983b, "sdev_prefix_printk" },
	{ 0x4c86cb0f, "mptscsih_slave_configure" },
	{ 0xbbbfb7b9, "sas_read_port_mode_page" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x94589e9e, "dma_direct_unmap_sg" },
	{ 0x6a9a5a6c, "dma_direct_map_sg" },
	{ 0x9fe59f14, "dma_ops" },
	{ 0x5c7c59ab, "bsg_job_done" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xf3f11507, "mptscsih_raid_id_to_num" },
	{ 0xd7a9514e, "mptscsih_is_phys_disk" },
	{ 0xc8b79c12, "mptscsih_ioc_reset" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x36a86c1d, "mpt_Soft_Hard_ResetHandler" },
	{ 0xe55b100e, "mpt_put_msg_frame" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0x9074dd1f, "sas_port_delete_phy" },
	{ 0xd1b98941, "sas_port_delete" },
	{ 0x2dd79e14, "mpt_detach" },
	{ 0x4425205e, "mptscsih_remove" },
	{ 0x67d1160d, "sas_remove_host" },
	{ 0x96ad65c8, "mpt_free_msg_frame" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x5ed90adc, "int_to_scsilun" },
	{ 0xb83f306e, "scsi_print_command" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xf52942fe, "mptscsih_qcmd" },
	{ 0x8e674b81, "mpt_raid_phys_disk_pg0" },
	{ 0xa2c02dde, "sas_rphy_free" },
	{ 0xe9f30502, "sas_rphy_add" },
	{ 0xa9e26a7a, "sas_end_device_alloc" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x625e56ad, "mpt_clear_taskmgmt_in_progress_flag" },
	{ 0x872731ea, "mpt_put_msg_frame_hi_pri" },
	{ 0xb2279e87, "mpt_get_msg_frame" },
	{ 0x60332888, "mpt_set_taskmgmt_in_progress_flag" },
	{ 0xed8da4e6, "scsi_device_set_state" },
	{ 0x7f7c7415, "device_reprobe" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x29361773, "complete" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x5c75775f, "dma_free_attrs" },
	{ 0x532b1a31, "dma_alloc_attrs" },
	{ 0x44529937, "mpt_config" },
	{ 0x1b6694f0, "__scsi_iterate_devices" },
	{ 0xc7ba3d4e, "dev_printk" },
	{ 0xd6d0f7d4, "scsi_is_host_device" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x37a0cba, "kfree" },
	{ 0xc5850110, "printk" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "mptscsih,mptbase,scsi_transport_sas");

MODULE_ALIAS("pci:v00001000d00000050sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000054sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000056sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000058sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000062sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000059sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "B28ED34A9501F84023B5850");
