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
	{ 0xcfe5c5b1, "map_destroy" },
	{ 0x5ef55b4f, "mtd_device_unregister" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x51181121, "mtd_device_parse_register" },
	{ 0xb0259c6, "do_map_probe" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xd712aabe, "pci_write_config_word" },
	{ 0xb0de39d3, "pci_read_config_word" },
	{ 0xd0bb4ec1, "pci_write_config_dword" },
	{ 0xedc03953, "iounmap" },
	{ 0x2a1eb746, "pci_assign_resource" },
	{ 0xd0c1e622, "pci_read_config_dword" },
	{ 0x5ba8f35a, "simple_map_init" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0xc5850110, "printk" },
	{ 0x8423aab5, "pci_dev_put" },
	{ 0xa207ea98, "pci_get_device" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "chipreg,mtd,map_funcs");


MODULE_INFO(srcversion, "40EED9593657446D970FF15");
