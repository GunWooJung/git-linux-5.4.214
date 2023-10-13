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
	{ 0xa24f23d8, "__request_module" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x7f3966fa, "debugfs_create_dir" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xf2d62900, "dma_set_mask" },
	{ 0xc5846169, "pci_disable_device" },
	{ 0x43a1e90, "adf_dev_init" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0x514f3e85, "adf_enable_vf2pf_comms" },
	{ 0x3b68324a, "adf_vf_isr_resource_free" },
	{ 0x93bf511b, "adf_devmgr_update_class_index" },
	{ 0x982ccbd5, "pci_release_regions" },
	{ 0xfd7b02e7, "adf_dev_stop" },
	{ 0x4f9075f3, "adf_devmgr_rm_dev" },
	{ 0x91e0d49, "dma_set_coherent_mask" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x8338fd8, "pci_set_master" },
	{ 0xd9e4e349, "adf_dev_shutdown" },
	{ 0x603e5f0d, "adf_cfg_dev_add" },
	{ 0x538eae37, "adf_vf2pf_notify_init" },
	{ 0x3bffcc92, "pci_iounmap" },
	{ 0xc5850110, "printk" },
	{ 0x67ba7ebf, "debugfs_remove" },
	{ 0x2b093155, "adf_cfg_dev_remove" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x34bbd350, "adf_devmgr_add_dev" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xd5968a27, "pci_select_bars" },
	{ 0x3e8deedf, "kmem_cache_alloc_node_trace" },
	{ 0xe6947154, "adf_dev_start" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xf6cc622f, "qat_crypto_dev_config" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x8b95e7b, "pci_unregister_driver" },
	{ 0x37a0cba, "kfree" },
	{ 0xcc3b167a, "adf_clean_vf_map" },
	{ 0xa003f659, "adf_vf2pf_notify_shutdown" },
	{ 0x4a5eb426, "pci_request_regions" },
	{ 0xf354855a, "__pci_register_driver" },
	{ 0xb352177e, "find_first_bit" },
	{ 0x27d4025e, "adf_devmgr_pci_to_accel_dev" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x5c4e734e, "pci_iomap" },
	{ 0x7b59429b, "adf_vf_isr_resource_alloc" },
	{ 0xf51bf8b0, "pci_enable_device" },
};

MODULE_INFO(depends, "intel_qat");

MODULE_ALIAS("pci:v00008086d000037C9sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "35B91ED138AAF37AF77DF1C");
