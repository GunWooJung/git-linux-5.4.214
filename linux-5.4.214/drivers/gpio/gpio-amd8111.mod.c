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
	{ 0xf4b0582f, "gpiochip_remove" },
	{ 0xfc39e32f, "ioport_unmap" },
	{ 0x52ac9eed, "gpiochip_add_data_with_key" },
	{ 0xc5850110, "printk" },
	{ 0x594bf15b, "ioport_map" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xc7c073b7, "__devm_request_region" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0xd0c1e622, "pci_read_config_dword" },
	{ 0x51a3dae5, "pci_match_id" },
	{ 0xa207ea98, "pci_get_device" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x848d372e, "iowrite8" },
	{ 0xf10de535, "ioread8" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x787bfb4b, "gpiochip_get_data" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00001022d0000746Bsv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "C16EC3F7B5F2BA3E75B8136");
