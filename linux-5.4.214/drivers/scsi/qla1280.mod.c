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
	{ 0x131e5561, "param_ops_charp" },
	{ 0x8b95e7b, "pci_unregister_driver" },
	{ 0xf354855a, "__pci_register_driver" },
	{ 0x5a921311, "strncmp" },
	{ 0x20000329, "simple_strtoul" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x349cba85, "strchr" },
	{ 0x91e0d49, "dma_set_coherent_mask" },
	{ 0xf8c6e3da, "scsi_scan_host" },
	{ 0xa33bf30d, "scsi_add_host_with_dma" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x33130ff7, "pci_ioremap_bar" },
	{ 0x532b1a31, "dma_alloc_attrs" },
	{ 0xf2d62900, "dma_set_mask" },
	{ 0x8ed9fa14, "scsi_host_alloc" },
	{ 0x8338fd8, "pci_set_master" },
	{ 0xf51bf8b0, "pci_enable_device" },
	{ 0xf9a482f9, "msleep" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x558a4438, "scsi_change_queue_depth" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x5c9109de, "release_firmware" },
	{ 0x80500894, "request_firmware" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x2c93838f, "scsi_dma_unmap" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x87b8798d, "sg_next" },
	{ 0x69acdf38, "memcpy" },
	{ 0x1fce84d7, "scsi_dma_map" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x29361773, "complete" },
	{ 0xc5850110, "printk" },
	{ 0xf4e6656e, "scsi_host_put" },
	{ 0xc5846169, "pci_disable_device" },
	{ 0x5c75775f, "dma_free_attrs" },
	{ 0xedc03953, "iounmap" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x665ec217, "scsi_remove_host" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00001077d00001216sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001077d00001020sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001077d00001080sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001077d00001240sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001077d00001280sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001077d00001016sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "DEEB515C4CBF911C310BCF7");
