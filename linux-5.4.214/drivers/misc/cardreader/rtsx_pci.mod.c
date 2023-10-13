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
	{ 0x2d3385d3, "system_wq" },
	{ 0x94589e9e, "dma_direct_unmap_sg" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x37a24b11, "pci_read_config_byte" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xf2d62900, "dma_set_mask" },
	{ 0xc0c3028b, "mfd_remove_devices" },
	{ 0xc5846169, "pci_disable_device" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x87b8798d, "sg_next" },
	{ 0x928d7386, "pci_write_config_byte" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x982ccbd5, "pci_release_regions" },
	{ 0x68a41536, "param_ops_bool" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x3c0222d0, "pci_enable_wake" },
	{ 0x5c75775f, "dma_free_attrs" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x8338fd8, "pci_set_master" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0xf10de535, "ioread8" },
	{ 0x921f329, "pci_restore_state" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xf74bb274, "mod_delayed_work_on" },
	{ 0xa55d7e61, "mfd_add_devices" },
	{ 0x532b1a31, "dma_alloc_attrs" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x954f099c, "idr_preload" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xb8f11603, "idr_alloc" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xa0dd6d5a, "pci_enable_msi" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0x7665a95b, "idr_remove" },
	{ 0x4f587cb4, "pci_find_capability" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xc9aba70, "pci_intx" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xa33c0eac, "wait_for_completion_interruptible_timeout" },
	{ 0xd0c1e622, "pci_read_config_dword" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x8b95e7b, "pci_unregister_driver" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x74c790d2, "pci_set_power_state" },
	{ 0x37a0cba, "kfree" },
	{ 0x6a9a5a6c, "dma_direct_map_sg" },
	{ 0x4a5eb426, "pci_request_regions" },
	{ 0x28fe4c90, "pci_disable_msi" },
	{ 0xedc03953, "iounmap" },
	{ 0xf354855a, "__pci_register_driver" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0x29361773, "complete" },
	{ 0x9dc6d8c9, "pci_choose_state" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x4a453f53, "iowrite32" },
	{ 0xf51bf8b0, "pci_enable_device" },
	{ 0x9fe59f14, "dma_ops" },
	{ 0xe484e35f, "ioread32" },
	{ 0xec734f3a, "pcie_capability_read_word" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x200dc428, "pci_save_state" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v000010ECd00005209sv*sd*bcFFsc*i*");
MODULE_ALIAS("pci:v000010ECd00005229sv*sd*bcFFsc*i*");
MODULE_ALIAS("pci:v000010ECd00005289sv*sd*bcFFsc*i*");
MODULE_ALIAS("pci:v000010ECd00005227sv*sd*bcFFsc*i*");
MODULE_ALIAS("pci:v000010ECd0000522Asv*sd*bcFFsc*i*");
MODULE_ALIAS("pci:v000010ECd00005249sv*sd*bcFFsc*i*");
MODULE_ALIAS("pci:v000010ECd00005287sv*sd*bcFFsc*i*");
MODULE_ALIAS("pci:v000010ECd00005286sv*sd*bcFFsc*i*");
MODULE_ALIAS("pci:v000010ECd0000524Asv*sd*bcFFsc*i*");
MODULE_ALIAS("pci:v000010ECd0000525Asv*sd*bcFFsc*i*");
MODULE_ALIAS("pci:v000010ECd00005260sv*sd*bcFFsc*i*");

MODULE_INFO(srcversion, "10392644A926043D548CFFD");
