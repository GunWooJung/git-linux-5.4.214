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
	{ 0xf354855a, "__pci_register_driver" },
	{ 0x1fff58f3, "blk_queue_max_hw_sectors" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xf8c6e3da, "scsi_scan_host" },
	{ 0xa33bf30d, "scsi_add_host_with_dma" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xfb578fc5, "memset" },
	{ 0x8ed9fa14, "scsi_host_alloc" },
	{ 0x4a5eb426, "pci_request_regions" },
	{ 0xf2d62900, "dma_set_mask" },
	{ 0x8338fd8, "pci_set_master" },
	{ 0xf51bf8b0, "pci_enable_device" },
	{ 0x87b8798d, "sg_next" },
	{ 0x1fce84d7, "scsi_dma_map" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x558a4438, "scsi_change_queue_depth" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xf4e6656e, "scsi_host_put" },
	{ 0xc5846169, "pci_disable_device" },
	{ 0x982ccbd5, "pci_release_regions" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x665ec217, "scsi_remove_host" },
	{ 0x7d628444, "memcpy_fromio" },
	{ 0xb9e7429c, "memcpy_toio" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x532b1a31, "dma_alloc_attrs" },
	{ 0x5c75775f, "dma_free_attrs" },
	{ 0xc5850110, "printk" },
	{ 0xedc03953, "iounmap" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x2c93838f, "scsi_dma_unmap" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0xf9a482f9, "msleep" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00001103d00003220sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001103d00003320sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001103d00003410sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001103d00003510sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001103d00003511sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001103d00003520sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001103d00003521sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001103d00003522sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001103d00003530sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001103d00003540sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001103d00003560sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001103d00004210sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001103d00004211sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001103d00004310sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001103d00004311sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001103d00004320sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001103d00004321sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001103d00004322sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001103d00004400sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001103d00003120sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001103d00003122sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001103d00003020sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001103d00004520sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001103d00004522sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001103d00003610sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001103d00003611sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001103d00003620sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001103d00003622sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001103d00003640sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001103d00003660sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001103d00003680sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001103d00003690sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "61AA4A76FAA0087CB9D8D00");
