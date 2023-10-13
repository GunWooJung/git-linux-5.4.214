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
	{ 0x765395c3, "param_ops_int" },
	{ 0x8b95e7b, "pci_unregister_driver" },
	{ 0xf354855a, "__pci_register_driver" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x33130ff7, "pci_ioremap_bar" },
	{ 0x532b1a31, "dma_alloc_attrs" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x4a5eb426, "pci_request_regions" },
	{ 0xf2d62900, "dma_set_mask" },
	{ 0x8338fd8, "pci_set_master" },
	{ 0xf51bf8b0, "pci_enable_device" },
	{ 0xfb578fc5, "memset" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x56470118, "__warn_printk" },
	{ 0xecadd7c7, "dev_driver_string" },
	{ 0x6dd853a6, "dma_direct_map_page" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x29361773, "complete" },
	{ 0xb526d94f, "dma_direct_unmap_page" },
	{ 0x9fe59f14, "dma_ops" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x39059c3b, "nand_status_op" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc023706f, "nand_read_oob_op" },
	{ 0x5748356e, "device_create_file" },
	{ 0x96ef6a79, "sm_register_device" },
	{ 0xc5850110, "printk" },
	{ 0x982ccbd5, "pci_release_regions" },
	{ 0x5c75775f, "dma_free_attrs" },
	{ 0x3bffcc92, "pci_iounmap" },
	{ 0x37a0cba, "kfree" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xa916b694, "strnlen" },
	{ 0x3ae5364c, "nand_release" },
	{ 0x174e203e, "device_remove_file" },
	{ 0xc5846169, "pci_disable_device" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xb96ec09d, "nand_deselect_target" },
	{ 0xb9ac09f0, "nand_reset_op" },
	{ 0x8b7d9244, "nand_select_target" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xf9a482f9, "msleep" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "nand,sm_common");

MODULE_ALIAS("pci:v00001180d00000852sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "8A129D9BECCC0FB08369DD2");
