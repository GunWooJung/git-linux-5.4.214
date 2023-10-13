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
	{ 0x8b95e7b, "pci_unregister_driver" },
	{ 0xf354855a, "__pci_register_driver" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xbf2005c7, "memstick_remove_host" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x982ccbd5, "pci_release_regions" },
	{ 0x37a0cba, "kfree" },
	{ 0xf77a6fdd, "memstick_free_host" },
	{ 0xedc03953, "iounmap" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x79ccebe5, "memstick_alloc_host" },
	{ 0xcd4f9fbb, "memstick_add_host" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x4a5eb426, "pci_request_regions" },
	{ 0xf2d62900, "dma_set_mask" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x94589e9e, "dma_direct_unmap_sg" },
	{ 0xa92287e6, "memstick_next_req" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x6a9a5a6c, "dma_direct_map_sg" },
	{ 0x9fe59f14, "dma_ops" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xf9a482f9, "msleep" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0xaf7d0f48, "current_task" },
	{ 0xc5846169, "pci_disable_device" },
	{ 0x3c0222d0, "pci_enable_wake" },
	{ 0x9dc6d8c9, "pci_choose_state" },
	{ 0x200dc428, "pci_save_state" },
	{ 0x4c4f5f5c, "memstick_suspend_host" },
	{ 0x4eb75b00, "memstick_detect_change" },
	{ 0xc01efa8a, "memstick_resume_host" },
	{ 0x8338fd8, "pci_set_master" },
	{ 0xf51bf8b0, "pci_enable_device" },
	{ 0x921f329, "pci_restore_state" },
	{ 0x74c790d2, "pci_set_power_state" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x928d7386, "pci_write_config_byte" },
	{ 0x37a24b11, "pci_read_config_byte" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "memstick");

MODULE_ALIAS("pci:v0000197Bd00002383sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000197Bd00002388sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000197Bd00002393sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "EE0B1D5FBD9248F39FE12EF");
