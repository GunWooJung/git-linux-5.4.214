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
	{ 0xb070f590, "mptscsih_host_reset" },
	{ 0x65a89543, "mptscsih_bus_reset" },
	{ 0x7cff314, "mptscsih_dev_reset" },
	{ 0xa532e216, "mptscsih_abort" },
	{ 0x983931c4, "mptscsih_info" },
	{ 0x7bc03351, "mptscsih_shutdown" },
	{ 0x2c448d2b, "mptscsih_suspend" },
	{ 0x981efe92, "mpt_deregister" },
	{ 0xe6c1e126, "mpt_event_deregister" },
	{ 0x610b257e, "mpt_reset_deregister" },
	{ 0x8b95e7b, "pci_unregister_driver" },
	{ 0x25d158c1, "spi_release_transport" },
	{ 0xf354855a, "__pci_register_driver" },
	{ 0xf2d1bc1c, "mpt_reset_register" },
	{ 0x9e32efee, "mpt_event_register" },
	{ 0xd608879a, "mptscsih_scandv_complete" },
	{ 0x799332d8, "mptscsih_taskmgmt_complete" },
	{ 0x7e50fed2, "mpt_register" },
	{ 0xaf28bfb4, "mptscsih_io_done" },
	{ 0x174fb4fc, "spi_attach_transport" },
	{ 0x4c86cb0f, "mptscsih_slave_configure" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x454c31a4, "mptscsih_IssueTaskMgmt" },
	{ 0xf8c6e3da, "scsi_scan_host" },
	{ 0xa33bf30d, "scsi_add_host_with_dma" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x8ed9fa14, "scsi_host_alloc" },
	{ 0x79bdd1f4, "mpt_attach" },
	{ 0xf3f11507, "mptscsih_raid_id_to_num" },
	{ 0xbc163f7c, "mptscsih_slave_destroy" },
	{ 0x4007983b, "sdev_prefix_printk" },
	{ 0xec9a40ad, "scsi_device_lookup_by_target" },
	{ 0xc8b79c12, "mptscsih_ioc_reset" },
	{ 0x9e169519, "scsi_scan_target" },
	{ 0x1b6694f0, "__scsi_iterate_devices" },
	{ 0x4953fc75, "mpt_findImVolumes" },
	{ 0xa1f30350, "mptscsih_event_process" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xd7a9514e, "mptscsih_is_phys_disk" },
	{ 0xb83f306e, "scsi_print_command" },
	{ 0xf52942fe, "mptscsih_qcmd" },
	{ 0x4425205e, "mptscsih_remove" },
	{ 0x665ec217, "scsi_remove_host" },
	{ 0xba6cf1e1, "mptscsih_resume" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xc81d549b, "spi_display_xfer_agreement" },
	{ 0x92a1a377, "spi_dv_device" },
	{ 0x96ad65c8, "mpt_free_msg_frame" },
	{ 0x46526b90, "mpt_HardResetHandler" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xe55b100e, "mpt_put_msg_frame" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xb2279e87, "mpt_get_msg_frame" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xc7ba3d4e, "dev_printk" },
	{ 0xc5850110, "printk" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x5c75775f, "dma_free_attrs" },
	{ 0x44529937, "mpt_config" },
	{ 0x532b1a31, "dma_alloc_attrs" },
	{ 0xd6d0f7d4, "scsi_is_host_device" },
	{ 0x37a0cba, "kfree" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "mptscsih,mptbase,scsi_transport_spi");

MODULE_ALIAS("pci:v00001000d00000030sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000117Cd00000030sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000040sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "CA585F517EE6F59C8BD3064");
