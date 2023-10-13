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
	{ 0x1cd6f316, "param_ops_uint" },
	{ 0x8b95e7b, "pci_unregister_driver" },
	{ 0xb4b1a06b, "class_destroy" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0xf354855a, "__pci_register_driver" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0x5328374d, "__class_create" },
	{ 0xb9e7429c, "memcpy_toio" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xfb578fc5, "memset" },
	{ 0x532b1a31, "dma_alloc_attrs" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xad8df8fd, "cdev_del" },
	{ 0x14e23ddd, "device_destroy" },
	{ 0xf9a482f9, "msleep" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x982ccbd5, "pci_release_regions" },
	{ 0xd267dbfb, "device_create" },
	{ 0x5314ccb0, "cdev_add" },
	{ 0xbec0cf29, "cdev_init" },
	{ 0xf10de535, "ioread8" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x867afcc9, "pci_iomap_range" },
	{ 0x5c4e734e, "pci_iomap" },
	{ 0x37a0cba, "kfree" },
	{ 0x4a5eb426, "pci_request_regions" },
	{ 0x8338fd8, "pci_set_master" },
	{ 0xf51bf8b0, "pci_enable_device" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x51a3dae5, "pci_match_id" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x5c75775f, "dma_free_attrs" },
	{ 0xa4191c0b, "memset_io" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x4a453f53, "iowrite32" },
	{ 0xe484e35f, "ioread32" },
	{ 0x848d372e, "iowrite8" },
	{ 0x3bffcc92, "pci_iounmap" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00000E11d0000B204sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd00003307sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "22E5DD568C0F3A3D31DB675");
