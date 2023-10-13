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
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0x7f3966fa, "debugfs_create_dir" },
	{ 0x765395c3, "param_ops_int" },
	{ 0xfb3e1b0e, "ntb_unregister_device" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x37a24b11, "pci_read_config_byte" },
	{ 0xf2d62900, "dma_set_mask" },
	{ 0xc5846169, "pci_disable_device" },
	{ 0xf98f4135, "pci_disable_msix" },
	{ 0x928d7386, "pci_write_config_byte" },
	{ 0x982ccbd5, "pci_release_regions" },
	{ 0xd0a46a6a, "debugfs_create_file" },
	{ 0xb1b1b641, "ntb_register_device" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x5b1c5c13, "debugfs_remove_recursive" },
	{ 0x91e0d49, "dma_set_coherent_mask" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x8338fd8, "pci_set_master" },
	{ 0xaed06536, "_dev_warn" },
	{ 0x3bffcc92, "pci_iounmap" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xc5850110, "printk" },
	{ 0xb0de39d3, "pci_read_config_word" },
	{ 0x3c457453, "ioread64_lo_hi" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x32ee9868, "simple_open" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xa0dd6d5a, "pci_enable_msi" },
	{ 0x9d766f4b, "pci_clear_master" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xd5968a27, "pci_select_bars" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x3e8deedf, "kmem_cache_alloc_node_trace" },
	{ 0x8ad5db9f, "pci_enable_msix_range" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xc9aba70, "pci_intx" },
	{ 0x848d372e, "iowrite8" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xd0c1e622, "pci_read_config_dword" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x8b95e7b, "pci_unregister_driver" },
	{ 0x716265c7, "debugfs_initialized" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x6a86bc1, "iowrite16" },
	{ 0x37a0cba, "kfree" },
	{ 0x4a5eb426, "pci_request_regions" },
	{ 0x28fe4c90, "pci_disable_msi" },
	{ 0xf354855a, "__pci_register_driver" },
	{ 0x96848186, "scnprintf" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0xc5534d64, "ioread16" },
	{ 0xd21c5139, "iowrite64_lo_hi" },
	{ 0x1ba59527, "__kmalloc_node" },
	{ 0x5c4e734e, "pci_iomap" },
	{ 0x4a453f53, "iowrite32" },
	{ 0xf51bf8b0, "pci_enable_device" },
	{ 0x1cd6f316, "param_ops_uint" },
	{ 0xf9f2dd03, "ntb_db_event" },
	{ 0x4d64d639, "ntb_link_event" },
	{ 0xe484e35f, "ioread32" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xbf367777, "param_ops_ullong" },
};

MODULE_INFO(depends, "ntb");

MODULE_ALIAS("pci:v00008086d00003725sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003C0Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000E0Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002F0Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00006F0Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003726sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003C0Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000E0Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002F0Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00006F0Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003727sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003C0Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000E0Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002F0Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00006F0Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000201Csv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "8B1C714F8182AE603F53976");
