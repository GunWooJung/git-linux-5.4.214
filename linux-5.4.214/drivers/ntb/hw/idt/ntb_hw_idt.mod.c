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
	{ 0x32ee9868, "simple_open" },
	{ 0x5b1c5c13, "debugfs_remove_recursive" },
	{ 0x8b95e7b, "pci_unregister_driver" },
	{ 0xf354855a, "__pci_register_driver" },
	{ 0x7f3966fa, "debugfs_create_dir" },
	{ 0x716265c7, "debugfs_initialized" },
	{ 0xc5850110, "printk" },
	{ 0xaed06536, "_dev_warn" },
	{ 0xd0a46a6a, "debugfs_create_file" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xb1b1b641, "ntb_register_device" },
	{ 0x51765820, "devm_request_threaded_irq" },
	{ 0xbf27fdc4, "pci_alloc_irq_vectors_affinity" },
	{ 0x983c8c67, "devm_hwmon_device_register_with_groups" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x4117e0fc, "pcim_iomap_table" },
	{ 0x9424ca0a, "pcim_iomap_regions_request_all" },
	{ 0x8338fd8, "pci_set_master" },
	{ 0x27dd129b, "pcim_enable_device" },
	{ 0x4e3259ba, "pci_cleanup_aer_uncorrect_error_status" },
	{ 0x70ad0c76, "pci_enable_pcie_error_reporting" },
	{ 0x91e0d49, "dma_set_coherent_mask" },
	{ 0xf2d62900, "dma_set_mask" },
	{ 0xd0c1e622, "pci_read_config_dword" },
	{ 0x37a0cba, "kfree" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0x96848186, "scnprintf" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xd111bb59, "_dev_info" },
	{ 0xfb3e1b0e, "ntb_unregister_device" },
	{ 0x67ba7ebf, "debugfs_remove" },
	{ 0xe0a388bf, "pcibios_resource_to_bus" },
	{ 0x25d74d33, "ntb_msg_event" },
	{ 0xf9f2dd03, "ntb_db_event" },
	{ 0x4d64d639, "ntb_link_event" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x3854774b, "kstrtoll" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x3eb71684, "pci_disable_pcie_error_reporting" },
	{ 0x9d766f4b, "pci_clear_master" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x339a5a9a, "pci_free_irq_vectors" },
	{ 0x7cf7aeda, "devm_free_irq" },
	{ 0x226f7074, "pci_irq_vector" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x4a453f53, "iowrite32" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xe484e35f, "ioread32" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "ntb");

MODULE_ALIAS("pci:v0000111Dd00008091sv*sd*bc06sc80i*");
MODULE_ALIAS("pci:v0000111Dd0000808Fsv*sd*bc06sc80i*");
MODULE_ALIAS("pci:v0000111Dd00008088sv*sd*bc06sc80i*");
MODULE_ALIAS("pci:v0000111Dd00008092sv*sd*bc06sc80i*");
MODULE_ALIAS("pci:v0000111Dd00008090sv*sd*bc06sc80i*");
MODULE_ALIAS("pci:v0000111Dd0000808Esv*sd*bc06sc80i*");
MODULE_ALIAS("pci:v0000111Dd0000808Csv*sd*bc06sc80i*");
MODULE_ALIAS("pci:v0000111Dd0000808Asv*sd*bc06sc80i*");

MODULE_INFO(srcversion, "E85DC9AF68EAB9ADCEFD735");
