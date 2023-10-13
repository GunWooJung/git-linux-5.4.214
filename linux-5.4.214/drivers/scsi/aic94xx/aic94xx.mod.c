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
	{ 0x92a881bb, "kmem_cache_destroy" },
	{ 0x94589e9e, "dma_direct_unmap_sg" },
	{ 0x174e203e, "device_remove_file" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xd0bb4ec1, "pci_write_config_dword" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x7c18f158, "sas_release_transport" },
	{ 0xe37407fe, "pci_release_region" },
	{ 0x8ed9fa14, "scsi_host_alloc" },
	{ 0x765395c3, "param_ops_int" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x754d539c, "strlen" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xa33bf30d, "scsi_add_host_with_dma" },
	{ 0x210139ed, "sas_drain_work" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xf2d62900, "dma_set_mask" },
	{ 0xc7ba3d4e, "dev_printk" },
	{ 0x3cdea3fa, "sas_ssp_task_response" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0xc5846169, "pci_disable_device" },
	{ 0x2ce40fa8, "sas_request_addr" },
	{ 0x56470118, "__warn_printk" },
	{ 0x87b8798d, "sg_next" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xe8eac546, "sas_task_abort" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x5c75775f, "dma_free_attrs" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0xb5aa7165, "dma_pool_destroy" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x817a1ece, "sas_phy_reset" },
	{ 0x1b52d46b, "sas_eh_target_reset_handler" },
	{ 0x91e0d49, "dma_set_coherent_mask" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x9cf8ea41, "sas_get_local_phy" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0x8338fd8, "pci_set_master" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0x45545df8, "sas_target_alloc" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xc5850110, "printk" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0x7830e26a, "sas_ioctl" },
	{ 0xb0de39d3, "pci_read_config_word" },
	{ 0x6dd853a6, "dma_direct_map_page" },
	{ 0xf8c6e3da, "scsi_scan_host" },
	{ 0x532b1a31, "dma_alloc_attrs" },
	{ 0xb566a6c3, "kmem_cache_free" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0x2f7754a8, "dma_pool_free" },
	{ 0x24d273d1, "add_timer" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xf4e6656e, "scsi_host_put" },
	{ 0xa0dd6d5a, "pci_enable_msi" },
	{ 0x94cf0662, "sas_unregister_ha" },
	{ 0xf11543ff, "find_first_zero_bit" },
	{ 0x5748356e, "device_create_file" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xb526d94f, "dma_direct_unmap_page" },
	{ 0x7ccefd28, "kmem_cache_alloc" },
	{ 0x238746ab, "sas_register_ha" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x4c99581b, "driver_create_file" },
	{ 0x8e17faf3, "put_device" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x82c9eb09, "sas_target_destroy" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x3d7aecc0, "sas_eh_device_reset_handler" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xd0c1e622, "pci_read_config_dword" },
	{ 0xe14384d5, "sas_queuecommand" },
	{ 0xecadd7c7, "dev_driver_string" },
	{ 0x678b96ec, "dma_pool_alloc" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x8b95e7b, "pci_unregister_driver" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x51624e26, "kmem_cache_create" },
	{ 0x67d1160d, "sas_remove_host" },
	{ 0x22203c3d, "sas_bios_param" },
	{ 0x37a0cba, "kfree" },
	{ 0x6a9a5a6c, "dma_direct_map_sg" },
	{ 0x69acdf38, "memcpy" },
	{ 0x28fe4c90, "pci_disable_msi" },
	{ 0xedc03953, "iounmap" },
	{ 0xf354855a, "__pci_register_driver" },
	{ 0x70d49a51, "sas_slave_alloc" },
	{ 0x80500894, "request_firmware" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0x665ec217, "scsi_remove_host" },
	{ 0x32302331, "driver_remove_file" },
	{ 0x29361773, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xff370275, "sas_slave_configure" },
	{ 0xf51bf8b0, "pci_enable_device" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x5dfee392, "dma_pool_create" },
	{ 0x5c9109de, "release_firmware" },
	{ 0x59bde386, "sas_domain_attach_transport" },
	{ 0xb23de490, "pci_request_region" },
	{ 0x9fe59f14, "dma_ops" },
	{ 0xc1514a3b, "free_irq" },
};

MODULE_INFO(depends, "libsas,scsi_transport_sas");

MODULE_ALIAS("pci:v00009005d00000410sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000412sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000416sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000041Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000041Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000430sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000432sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000043Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000043Fsv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "D1DEFEC34B9670ABB645B5A");
