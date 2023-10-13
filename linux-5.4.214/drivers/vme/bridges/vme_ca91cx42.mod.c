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
	{ 0x765395c3, "param_ops_int" },
	{ 0x8b95e7b, "pci_unregister_driver" },
	{ 0xf354855a, "__pci_register_driver" },
	{ 0x848d372e, "iowrite8" },
	{ 0x6a86bc1, "iowrite16" },
	{ 0xf10de535, "ioread8" },
	{ 0xc5534d64, "ioread16" },
	{ 0xc5e74216, "release_resource" },
	{ 0x477e94aa, "pci_bus_alloc_resource" },
	{ 0x3da171f9, "pci_mem_start" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x721a6218, "vme_register_bridge" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x4a5eb426, "pci_request_regions" },
	{ 0xf51bf8b0, "pci_enable_device" },
	{ 0x1666d586, "vme_init_bridge" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xfaaa4ee1, "vme_irq_handler" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x1000e51, "schedule" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xc5846169, "pci_disable_device" },
	{ 0x982ccbd5, "pci_release_regions" },
	{ 0xedc03953, "iounmap" },
	{ 0x975869a5, "vme_unregister_bridge" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x4a453f53, "iowrite32" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xe484e35f, "ioread32" },
	{ 0x37a0cba, "kfree" },
	{ 0x532b1a31, "dma_alloc_attrs" },
	{ 0x5c75775f, "dma_free_attrs" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xc22cd4dd, "pv_ops" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v000010E3d00000000sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "041590C2A705E7BE55AFF55");
