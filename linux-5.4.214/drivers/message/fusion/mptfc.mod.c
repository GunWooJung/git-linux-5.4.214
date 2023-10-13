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
	{ 0xfd4d4661, "fc_eh_timed_out" },
	{ 0x6648ca52, "mptscsih_show_info" },
	{ 0x10b58b4b, "mptscsih_bios_param" },
	{ 0xcde5795f, "mptscsih_change_queue_depth" },
	{ 0xbc163f7c, "mptscsih_slave_destroy" },
	{ 0x4c86cb0f, "mptscsih_slave_configure" },
	{ 0xb070f590, "mptscsih_host_reset" },
	{ 0x983931c4, "mptscsih_info" },
	{ 0x7bc03351, "mptscsih_shutdown" },
	{ 0xba6cf1e1, "mptscsih_resume" },
	{ 0x2c448d2b, "mptscsih_suspend" },
	{ 0x981efe92, "mpt_deregister" },
	{ 0xe6c1e126, "mpt_event_deregister" },
	{ 0x610b257e, "mpt_reset_deregister" },
	{ 0x8b95e7b, "pci_unregister_driver" },
	{ 0x4f46dbf7, "fc_release_transport" },
	{ 0xf354855a, "__pci_register_driver" },
	{ 0xf2d1bc1c, "mpt_reset_register" },
	{ 0x9e32efee, "mpt_event_register" },
	{ 0xd608879a, "mptscsih_scandv_complete" },
	{ 0x799332d8, "mptscsih_taskmgmt_complete" },
	{ 0x7e50fed2, "mpt_register" },
	{ 0xaf28bfb4, "mptscsih_io_done" },
	{ 0x71cf52c6, "fc_attach_transport" },
	{ 0xe3a53f4c, "sort" },
	{ 0x65517eef, "fc_remote_port_rolechg" },
	{ 0x21c6c379, "fc_remote_port_add" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xa532e216, "mptscsih_abort" },
	{ 0x7cff314, "mptscsih_dev_reset" },
	{ 0x65a89543, "mptscsih_bus_reset" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xa33bf30d, "scsi_add_host_with_dma" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x8ed9fa14, "scsi_host_alloc" },
	{ 0x79bdd1f4, "mpt_attach" },
	{ 0xc8b79c12, "mptscsih_ioc_reset" },
	{ 0xf52942fe, "mptscsih_qcmd" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xa1f30350, "mptscsih_event_process" },
	{ 0xf9a482f9, "msleep" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x532b1a31, "dma_alloc_attrs" },
	{ 0xfb578fc5, "memset" },
	{ 0x44529937, "mpt_config" },
	{ 0xc32d0a02, "scsi_is_fc_rport" },
	{ 0xc5850110, "printk" },
	{ 0x1d756705, "fc_remote_port_delete" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x4425205e, "mptscsih_remove" },
	{ 0x665ec217, "scsi_remove_host" },
	{ 0x5c75775f, "dma_free_attrs" },
	{ 0x37a0cba, "kfree" },
	{ 0x9b67b4a0, "fc_remove_host" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "mptscsih,scsi_transport_fc,mptbase");

MODULE_ALIAS("pci:v00001000d00000621sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000624sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000622sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000628sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000626sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000642sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000640sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000646sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001657d00000646sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "920CF1515116B36A2B57F88");
