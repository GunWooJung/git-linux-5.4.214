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
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x6d3954a4, "mmc_add_host" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x5c4e734e, "pci_iomap" },
	{ 0x4a5eb426, "pci_request_regions" },
	{ 0x947fbbbc, "mmc_alloc_host" },
	{ 0x6e03f850, "sg_miter_start" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xc5534d64, "ioread16" },
	{ 0x2cbcc89, "mmc_detect_change" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0xe484e35f, "ioread32" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0xaed06536, "_dev_warn" },
	{ 0xbfc177bc, "iowrite32_rep" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x90c7e35e, "sg_miter_stop" },
	{ 0x3f0546a8, "ioread32_rep" },
	{ 0x64bfff20, "sg_miter_next" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x40ca826f, "mmc_request_done" },
	{ 0x8bd4fa4f, "mmc_free_host" },
	{ 0x982ccbd5, "pci_release_regions" },
	{ 0x3bffcc92, "pci_iounmap" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xb846722a, "mmc_remove_host" },
	{ 0xc5846169, "pci_disable_device" },
	{ 0x3c0222d0, "pci_enable_wake" },
	{ 0x200dc428, "pci_save_state" },
	{ 0xf51bf8b0, "pci_enable_device" },
	{ 0x921f329, "pci_restore_state" },
	{ 0x74c790d2, "pci_set_power_state" },
	{ 0x4a453f53, "iowrite32" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x6a86bc1, "iowrite16" },
	{ 0x928d7386, "pci_write_config_byte" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00001179d00000805sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "78995BCC0E7461C33DD6301");
