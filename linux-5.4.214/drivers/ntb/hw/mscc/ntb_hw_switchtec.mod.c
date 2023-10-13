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
	{ 0xc371bb96, "param_ops_ulong" },
	{ 0x68a41536, "param_ops_bool" },
	{ 0x4f4feb31, "class_interface_unregister" },
	{ 0x4b17f185, "class_interface_register" },
	{ 0x542e2c12, "switchtec_class" },
	{ 0x867afcc9, "pci_iomap_range" },
	{ 0x6a86bc1, "iowrite16" },
	{ 0xb1b1b641, "ntb_register_device" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x226f7074, "pci_irq_vector" },
	{ 0x5c4e734e, "pci_iomap" },
	{ 0xfb578fc5, "memset" },
	{ 0x532b1a31, "dma_alloc_attrs" },
	{ 0xc5534d64, "ioread16" },
	{ 0x3e8deedf, "kmem_cache_alloc_node_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x4d64d639, "ntb_link_event" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0xf10de535, "ioread8" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xf9f2dd03, "ntb_db_event" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x848d372e, "iowrite8" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xd21c5139, "iowrite64_lo_hi" },
	{ 0x4a453f53, "iowrite32" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x3c457453, "ioread64_lo_hi" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xe484e35f, "ioread32" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x37a0cba, "kfree" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xfb3e1b0e, "ntb_unregister_device" },
	{ 0x5c75775f, "dma_free_attrs" },
	{ 0x3bffcc92, "pci_iounmap" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "switchtec,ntb");


MODULE_INFO(srcversion, "D763E46C4D5F87944B2EC3D");
