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
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x94589e9e, "dma_direct_unmap_sg" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x6a9a5a6c, "dma_direct_map_sg" },
	{ 0x9fe59f14, "dma_ops" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x6d3954a4, "mmc_add_host" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x947fbbbc, "mmc_alloc_host" },
	{ 0x928d7386, "pci_write_config_byte" },
	{ 0x4a5eb426, "pci_request_regions" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x2cbcc89, "mmc_detect_change" },
	{ 0x40ca826f, "mmc_request_done" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0xc5850110, "printk" },
	{ 0x982ccbd5, "pci_release_regions" },
	{ 0x8bd4fa4f, "mmc_free_host" },
	{ 0xedc03953, "iounmap" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xb846722a, "mmc_remove_host" },
	{ 0xf51bf8b0, "pci_enable_device" },
	{ 0x921f329, "pci_restore_state" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xf9a482f9, "msleep" },
	{ 0x74c790d2, "pci_set_power_state" },
	{ 0xc5846169, "pci_disable_device" },
	{ 0x3c0222d0, "pci_enable_wake" },
	{ 0x9dc6d8c9, "pci_choose_state" },
	{ 0x200dc428, "pci_save_state" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xfaef0ed, "__tasklet_schedule" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00001106d00009530sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "51D9CCEA2EFE7498A58E55C");
