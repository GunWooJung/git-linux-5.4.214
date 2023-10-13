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
	{ 0xe7750f8, "kobject_put" },
	{ 0xa52ae5eb, "alloc_pages_current" },
	{ 0x92a881bb, "kmem_cache_destroy" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xd0bb4ec1, "pci_write_config_dword" },
	{ 0x6d00f69e, "pci_bus_type" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0x12e4f015, "alloc_dca_provider" },
	{ 0x27dd129b, "pcim_enable_device" },
	{ 0x765395c3, "param_ops_int" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x4117e0fc, "pcim_iomap_table" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xf2d62900, "dma_set_mask" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3bd23fd8, "dma_direct_sync_single_for_cpu" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xbdf15930, "dma_async_tx_descriptor_init" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x2aad1fd8, "kobject_del" },
	{ 0x5c75775f, "dma_free_attrs" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0xb5aa7165, "dma_pool_destroy" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x91e0d49, "dma_set_coherent_mask" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc9d8b484, "param_ops_string" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x72914782, "dma_async_device_register" },
	{ 0x5b5f7e89, "dmaengine_unmap_put" },
	{ 0x8338fd8, "pci_set_master" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xaed06536, "_dev_warn" },
	{ 0x70ad0c76, "pci_enable_pcie_error_reporting" },
	{ 0x921f329, "pci_restore_state" },
	{ 0xa50bcff0, "x86_cpu_to_apicid" },
	{ 0xc5850110, "printk" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xcccf7597, "kobject_init_and_add" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0xb0de39d3, "pci_read_config_word" },
	{ 0x6dd853a6, "dma_direct_map_page" },
	{ 0x532b1a31, "dma_alloc_attrs" },
	{ 0xb566a6c3, "kmem_cache_free" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x2f7754a8, "dma_pool_free" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xa0dd6d5a, "pci_enable_msi" },
	{ 0x5f130ba8, "pcim_iomap_regions" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xb526d94f, "dma_direct_unmap_page" },
	{ 0x76d451c4, "add_taint" },
	{ 0x7ccefd28, "kmem_cache_alloc" },
	{ 0x7ea3fb3a, "__free_pages" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x8ad5db9f, "pci_enable_msix_range" },
	{ 0x7cf7aeda, "devm_free_irq" },
	{ 0x81dfc2a9, "register_dca_provider" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xd0c1e622, "pci_read_config_dword" },
	{ 0xecadd7c7, "dev_driver_string" },
	{ 0x678b96ec, "dma_pool_alloc" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x8b95e7b, "pci_unregister_driver" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x9866a8f2, "unregister_dca_provider" },
	{ 0x51624e26, "kmem_cache_create" },
	{ 0x91249553, "free_dca_provider" },
	{ 0x3eb71684, "pci_disable_pcie_error_reporting" },
	{ 0x37a0cba, "kfree" },
	{ 0x28fe4c90, "pci_disable_msi" },
	{ 0xc1d7d8bf, "dma_direct_sync_single_for_device" },
	{ 0xf354855a, "__pci_register_driver" },
	{ 0xb352177e, "find_first_bit" },
	{ 0x29361773, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xe09a762, "dma_async_device_unregister" },
	{ 0x9ac395e0, "pci_enable_device_mem" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xf7c519d5, "pci_wake_from_d3" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x5dfee392, "dma_pool_create" },
	{ 0x51765820, "devm_request_threaded_irq" },
	{ 0x96e57448, "pcie_capability_write_word" },
	{ 0x9fe59f14, "dma_ops" },
	{ 0xec734f3a, "pcie_capability_read_word" },
	{ 0xce4dd865, "dmam_pool_create" },
	{ 0x200dc428, "pci_save_state" },
};

MODULE_INFO(depends, "dca");

MODULE_ALIAS("pci:v00008086d00003430sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003431sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003432sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003433sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003429sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000342Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000342Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000342Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003710sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003711sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003712sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003713sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003714sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003715sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003716sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003717sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003718sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003719sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003C20sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003C21sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003C22sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003C23sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003C24sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003C25sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003C26sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003C27sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003C2Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003C2Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000E20sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000E21sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000E22sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000E23sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000E24sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000E25sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000E26sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000E27sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000E2Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000E2Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002F20sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002F21sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002F22sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002F23sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002F24sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002F25sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002F26sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002F27sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002F2Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002F2Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00006F20sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00006F21sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00006F22sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00006F23sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00006F24sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00006F25sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00006F26sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00006F27sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00006F2Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00006F2Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002021sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000C50sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000C51sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000C52sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000C53sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00006F50sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00006F51sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00006F52sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00006F53sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000B00sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "58E4DBBA3E9D6AEC5804013");
