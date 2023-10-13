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
	{ 0xa1f9a134, "__x86_indirect_thunk_rsi" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0xfd94814e, "complete_all" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x4a46be27, "tifm_add_adapter" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x33130ff7, "pci_ioremap_bar" },
	{ 0xfd4cad9a, "tifm_alloc_adapter" },
	{ 0x4a5eb426, "pci_request_regions" },
	{ 0xf2d62900, "dma_set_mask" },
	{ 0x5a4e4713, "device_unregister" },
	{ 0xc5850110, "printk" },
	{ 0xdeeb6e3e, "device_register" },
	{ 0x7a67d504, "tifm_alloc_device" },
	{ 0x622187df, "tifm_free_device" },
	{ 0x98ebeb2a, "tifm_free_adapter" },
	{ 0x982ccbd5, "pci_release_regions" },
	{ 0xc9aba70, "pci_intx" },
	{ 0xedc03953, "iounmap" },
	{ 0x57add7ae, "tifm_remove_adapter" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xc5846169, "pci_disable_device" },
	{ 0x3c0222d0, "pci_enable_wake" },
	{ 0x9dc6d8c9, "pci_choose_state" },
	{ 0x200dc428, "pci_save_state" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x8338fd8, "pci_set_master" },
	{ 0xf51bf8b0, "pci_enable_device" },
	{ 0x921f329, "pci_restore_state" },
	{ 0x74c790d2, "pci_set_power_state" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xffb277f, "tifm_queue_work" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xf9a482f9, "msleep" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "tifm_core");

MODULE_ALIAS("pci:v0000104Cd00008033sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000104Cd0000803Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000104Cd0000AC8Fsv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "4C4C8AB9E7B18130DD29FF8");
