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
	{ 0x68a41536, "param_ops_bool" },
	{ 0x8b95e7b, "pci_unregister_driver" },
	{ 0xf354855a, "__pci_register_driver" },
	{ 0x86d7c783, "scsi_esp_register" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x4a29ab38, "scsi_esp_intr" },
	{ 0x532b1a31, "dma_alloc_attrs" },
	{ 0x8338fd8, "pci_set_master" },
	{ 0x5c4e734e, "pci_iomap" },
	{ 0x4a5eb426, "pci_request_regions" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x8ed9fa14, "scsi_host_alloc" },
	{ 0xde12e03, "scsi_esp_template" },
	{ 0xf2d62900, "dma_set_mask" },
	{ 0xf51bf8b0, "pci_enable_device" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x43544b9, "scsi_esp_cmd" },
	{ 0x4a453f53, "iowrite32" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xc7ba3d4e, "dev_printk" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x37a24b11, "pci_read_config_byte" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x928d7386, "pci_write_config_byte" },
	{ 0x848d372e, "iowrite8" },
	{ 0xf10de535, "ioread8" },
	{ 0xf4e6656e, "scsi_host_put" },
	{ 0x37a0cba, "kfree" },
	{ 0xc5846169, "pci_disable_device" },
	{ 0x982ccbd5, "pci_release_regions" },
	{ 0x3bffcc92, "pci_iounmap" },
	{ 0x5c75775f, "dma_free_attrs" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x704d221, "scsi_esp_unregister" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "esp_scsi");

MODULE_ALIAS("pci:v00001022d00002020sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "1FB80BCF227603A92B03E1A");
