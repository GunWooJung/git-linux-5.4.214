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
	{ 0x5ae8a115, "noop_llseek" },
	{ 0xf4e6656e, "scsi_host_put" },
	{ 0xd522f41c, "pci_dev_get" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x665ec217, "scsi_remove_host" },
	{ 0xf8c6e3da, "scsi_scan_host" },
	{ 0xa33bf30d, "scsi_add_host_with_dma" },
	{ 0xd267dbfb, "device_create" },
	{ 0x8ed9fa14, "scsi_host_alloc" },
	{ 0xbce3803, "__register_chrdev" },
	{ 0x5328374d, "__class_create" },
	{ 0x91e0d49, "dma_set_coherent_mask" },
	{ 0xf2d62900, "dma_set_mask" },
	{ 0x38b5452a, "dma_get_required_mask" },
	{ 0x8338fd8, "pci_set_master" },
	{ 0x4a5eb426, "pci_request_regions" },
	{ 0xf51bf8b0, "pci_enable_device" },
	{ 0xa207ea98, "pci_get_device" },
	{ 0x56470118, "__warn_printk" },
	{ 0xd21e4276, "scsi_block_requests" },
	{ 0x5ed822bf, "scsi_unblock_requests" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0x9166fada, "strncpy" },
	{ 0x1b6694f0, "__scsi_iterate_devices" },
	{ 0xed8da4e6, "scsi_device_set_state" },
	{ 0xea3c8e4e, "scsilun_to_int" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x2c93838f, "scsi_dma_unmap" },
	{ 0x4d2f8209, "blk_mq_tag_to_rq" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x7d628444, "memcpy_fromio" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x87b8798d, "sg_next" },
	{ 0x1fce84d7, "scsi_dma_map" },
	{ 0x69acdf38, "memcpy" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x1000e51, "schedule" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0xaf7d0f48, "current_task" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xb9e7429c, "memcpy_toio" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xb4b1a06b, "class_destroy" },
	{ 0x6bc3fbc0, "__unregister_chrdev" },
	{ 0x14e23ddd, "device_destroy" },
	{ 0x8423aab5, "pci_dev_put" },
	{ 0x37a0cba, "kfree" },
	{ 0x982ccbd5, "pci_release_regions" },
	{ 0xedc03953, "iounmap" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xfb578fc5, "memset" },
	{ 0x5c75775f, "dma_free_attrs" },
	{ 0x532b1a31, "dma_alloc_attrs" },
	{ 0xc5850110, "printk" },
	{ 0x151f4898, "schedule_timeout_uninterruptible" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x558a4438, "scsi_change_queue_depth" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xe35ed617, "seq_puts" },
	{ 0x58f84c2d, "seq_printf" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00001044d0000A501sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001044d0000A511sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "0859761106C00AE9D68CC65");
