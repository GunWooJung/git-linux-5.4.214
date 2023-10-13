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
	{ 0x8b95e7b, "pci_unregister_driver" },
	{ 0x247cfc43, "isa_unregister_driver" },
	{ 0x38bd0581, "eisa_driver_unregister" },
	{ 0xf354855a, "__pci_register_driver" },
	{ 0xfb77cba3, "eisa_driver_register" },
	{ 0x3ebaac74, "isa_register_driver" },
	{ 0x85bd1608, "__request_region" },
	{ 0x928d7386, "pci_write_config_byte" },
	{ 0x8ed9fa14, "scsi_host_alloc" },
	{ 0x37a24b11, "pci_read_config_byte" },
	{ 0x8338fd8, "pci_set_master" },
	{ 0x4a5eb426, "pci_request_regions" },
	{ 0xf51bf8b0, "pci_enable_device" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xf8c6e3da, "scsi_scan_host" },
	{ 0xa33bf30d, "scsi_add_host_with_dma" },
	{ 0x5dfee392, "dma_pool_create" },
	{ 0x532b1a31, "dma_alloc_attrs" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xb0de39d3, "pci_read_config_word" },
	{ 0x33130ff7, "pci_ioremap_bar" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x678b96ec, "dma_pool_alloc" },
	{ 0xf0f65023, "scmd_printk" },
	{ 0x87b8798d, "sg_next" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x6dd853a6, "dma_direct_map_page" },
	{ 0x1fce84d7, "scsi_dma_map" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x56470118, "__warn_printk" },
	{ 0xecadd7c7, "dev_driver_string" },
	{ 0x69acdf38, "memcpy" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x1035c7c2, "__release_region" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0xc5846169, "pci_disable_device" },
	{ 0x982ccbd5, "pci_release_regions" },
	{ 0x37a0cba, "kfree" },
	{ 0xf4e6656e, "scsi_host_put" },
	{ 0xedc03953, "iounmap" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x665ec217, "scsi_remove_host" },
	{ 0xb526d94f, "dma_direct_unmap_page" },
	{ 0x9fe59f14, "dma_ops" },
	{ 0x2f7754a8, "dma_pool_free" },
	{ 0x4d2f8209, "blk_mq_tag_to_rq" },
	{ 0x558a4438, "scsi_change_queue_depth" },
	{ 0xc5850110, "printk" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x5c9109de, "release_firmware" },
	{ 0x80500894, "request_firmware" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x9da8afc8, "scsi_host_busy" },
	{ 0x3885862f, "seq_putc" },
	{ 0xe35ed617, "seq_puts" },
	{ 0x58f84c2d, "seq_printf" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xc7ba3d4e, "dev_printk" },
	{ 0xa916b694, "strnlen" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x2c93838f, "scsi_dma_unmap" },
	{ 0xb5aa7165, "dma_pool_destroy" },
	{ 0x5c75775f, "dma_free_attrs" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v000010CDd00001100sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010CDd00001200sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010CDd00001300sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010CDd00002300sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010CDd00002500sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010CDd00002700sv*sd*bc*sc*i*");
MODULE_ALIAS("eisa:sABP7401*");
MODULE_ALIAS("eisa:sABP7501*");

MODULE_INFO(srcversion, "79174F4D864ED88F75F9B54");
