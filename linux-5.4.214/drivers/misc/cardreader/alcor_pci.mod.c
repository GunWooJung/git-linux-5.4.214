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
	{ 0x27dd129b, "pcim_enable_device" },
	{ 0x37a24b11, "pci_read_config_byte" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xf2d62900, "dma_set_mask" },
	{ 0xc0c3028b, "mfd_remove_devices" },
	{ 0x46c5e2e4, "pcim_iomap" },
	{ 0x928d7386, "pci_write_config_byte" },
	{ 0x982ccbd5, "pci_release_regions" },
	{ 0x91e0d49, "dma_set_coherent_mask" },
	{ 0x8338fd8, "pci_set_master" },
	{ 0xfdb9b629, "ioread32be" },
	{ 0xa55d7e61, "mfd_add_devices" },
	{ 0xffb7c514, "ida_free" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xe419bc99, "iowrite32be" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xd0c1e622, "pci_read_config_dword" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x8b95e7b, "pci_unregister_driver" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x4a5eb426, "pci_request_regions" },
	{ 0xf354855a, "__pci_register_driver" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0xe7a02573, "ida_alloc_range" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00001AEAd00006601sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001AEAd00006621sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "E1A785A3F5785B76ED66296");
