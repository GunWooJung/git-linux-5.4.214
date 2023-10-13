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

MODULE_INFO(staging, "Y");

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xed93c0b3, "module_layout" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x5c75775f, "dma_free_attrs" },
	{ 0xa64ad921, "comedi_buf_write_free" },
	{ 0x8338fd8, "pci_set_master" },
	{ 0xaed06536, "_dev_warn" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xc5850110, "printk" },
	{ 0x532b1a31, "dma_alloc_attrs" },
	{ 0xad4615d4, "comedi_inc_scan_progress" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x8e17faf3, "put_device" },
	{ 0xfc5d3f3f, "comedi_bytes_per_scan" },
	{ 0x9044625a, "comedi_buf_read_alloc" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x33130ff7, "pci_ioremap_bar" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xe7a7a03f, "get_device" },
	{ 0x3434f51, "comedi_to_pci_dev" },
	{ 0x37a0cba, "kfree" },
	{ 0x96de0371, "comedi_buf_write_alloc" },
	{ 0xedc03953, "iounmap" },
	{ 0x8a9eed64, "comedi_buf_read_free" },
};

MODULE_INFO(depends, "comedi,comedi_pci");


MODULE_INFO(srcversion, "1ECD91AD430E45EA91B1C76");
