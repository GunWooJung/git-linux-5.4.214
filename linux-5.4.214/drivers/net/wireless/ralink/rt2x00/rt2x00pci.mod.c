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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xed93c0b3, "module_layout" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf2d62900, "dma_set_mask" },
	{ 0xc5846169, "pci_disable_device" },
	{ 0xf2ab1070, "rt2x00lib_resume" },
	{ 0x982ccbd5, "pci_release_regions" },
	{ 0x8338fd8, "pci_set_master" },
	{ 0x921f329, "pci_restore_state" },
	{ 0x12422e18, "ieee80211_alloc_hw_nm" },
	{ 0xc5850110, "printk" },
	{ 0xb0de39d3, "pci_read_config_word" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x319010b4, "pci_set_mwi" },
	{ 0x103fb469, "rt2x00lib_remove_dev" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x33130ff7, "pci_ioremap_bar" },
	{ 0x74c790d2, "pci_set_power_state" },
	{ 0x34acb3f8, "pci_clear_mwi" },
	{ 0x37a0cba, "kfree" },
	{ 0x4a5eb426, "pci_request_regions" },
	{ 0xedc03953, "iounmap" },
	{ 0x510d772f, "ieee80211_free_hw" },
	{ 0x9dc6d8c9, "pci_choose_state" },
	{ 0xf51bf8b0, "pci_enable_device" },
	{ 0x2fbcc23d, "rt2x00lib_probe_dev" },
	{ 0x3bfa9c99, "rt2x00lib_suspend" },
	{ 0x200dc428, "pci_save_state" },
};

MODULE_INFO(depends, "rt2x00lib,mac80211");


MODULE_INFO(srcversion, "C0CFF0F20CF7B9E0650CCCB");
