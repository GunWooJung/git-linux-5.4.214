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
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xf9a482f9, "msleep" },
	{ 0xe37407fe, "pci_release_region" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xf2d62900, "dma_set_mask" },
	{ 0x8b666025, "mwifiex_cancel_hs" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0xc5846169, "pci_disable_device" },
	{ 0xf98f4135, "pci_disable_msix" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x3bd23fd8, "dma_direct_sync_single_for_cpu" },
	{ 0xb128d0fe, "mwifiex_disable_auto_ds" },
	{ 0x18038ce3, "pci_try_reset_function" },
	{ 0xa6a40b7a, "__dev_kfree_skb_any" },
	{ 0xd2e2781a, "mwifiex_write_data_complete" },
	{ 0x6cc6cc89, "mwifiex_process_sleep_confirm_resp" },
	{ 0x999e8297, "vfree" },
	{ 0x5c75775f, "dma_free_attrs" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xe7898423, "mwifiex_queue_main_work" },
	{ 0x60d5aa23, "mwifiex_prepare_fw_dump_info" },
	{ 0x91e0d49, "dma_set_coherent_mask" },
	{ 0xbe92ed72, "skb_trim" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0x120103ea, "__netdev_alloc_skb" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xc1a408ef, "_mwifiex_dbg" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0x8338fd8, "pci_set_master" },
	{ 0xc1f3f43, "mwifiex_add_card" },
	{ 0xf10de535, "ioread8" },
	{ 0x3bffcc92, "pci_iounmap" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0xc5850110, "printk" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x6dd853a6, "dma_direct_map_page" },
	{ 0x532b1a31, "dma_alloc_attrs" },
	{ 0xd523d85d, "skb_push" },
	{ 0xfd471ad8, "mwifiex_shutdown_sw" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xbed6138e, "skb_pull" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xa0dd6d5a, "pci_enable_msi" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x9d766f4b, "pci_clear_master" },
	{ 0xd4dad9f3, "mwifiex_alloc_dma_align_buf" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xc502ef3, "skb_queue_tail" },
	{ 0xb526d94f, "dma_direct_unmap_page" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x12a38747, "usleep_range" },
	{ 0x8ad5db9f, "pci_enable_msix_range" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0xd8e6cdd2, "kfree_skb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xecadd7c7, "dev_driver_string" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x8b95e7b, "pci_unregister_driver" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x28fe4c90, "pci_disable_msi" },
	{ 0xfc9354e8, "mwifiex_reinit_sw" },
	{ 0xc1d7d8bf, "dma_direct_sync_single_for_device" },
	{ 0xf354855a, "__pci_register_driver" },
	{ 0x33379d1f, "mwifiex_handle_rx_packet" },
	{ 0x2a09341, "mwifiex_deauthenticate_all" },
	{ 0x9299d243, "mwifiex_remove_card" },
	{ 0x8c863dbc, "mwifiex_enable_hs" },
	{ 0x3b15fae, "mwifiex_upload_device_dump" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xb0e602eb, "memmove" },
	{ 0x5c4e734e, "pci_iomap" },
	{ 0x9fd206d0, "mwifiex_drv_info_dump" },
	{ 0x4a453f53, "iowrite32" },
	{ 0xf89bc02c, "skb_put" },
	{ 0xf51bf8b0, "pci_enable_device" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x447f543d, "mwifiex_init_shutdown_fw" },
	{ 0xb23de490, "pci_request_region" },
	{ 0x9fe59f14, "dma_ops" },
	{ 0xe484e35f, "ioread32" },
	{ 0xc1514a3b, "free_irq" },
};

MODULE_INFO(depends, "mwifiex");

MODULE_ALIAS("pci:v000011ABd00002B30sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00002B38sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00002B42sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001B4Bd00002B42sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "6D070075A72C818882D286B");
