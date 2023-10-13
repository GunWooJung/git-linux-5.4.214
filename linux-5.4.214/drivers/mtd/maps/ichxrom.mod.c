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
	{ 0x51181121, "mtd_device_parse_register" },
	{ 0xb0259c6, "do_map_probe" },
	{ 0x5ba8f35a, "simple_map_init" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x13110126, "request_resource" },
	{ 0x77358855, "iomem_resource" },
	{ 0xc5850110, "printk" },
	{ 0x37a24b11, "pci_read_config_byte" },
	{ 0xa207ea98, "pci_get_device" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xedc03953, "iounmap" },
	{ 0x37a0cba, "kfree" },
	{ 0xcfe5c5b1, "map_destroy" },
	{ 0x5ef55b4f, "mtd_device_unregister" },
	{ 0xc5e74216, "release_resource" },
	{ 0x8423aab5, "pci_dev_put" },
	{ 0xd712aabe, "pci_write_config_word" },
	{ 0xb0de39d3, "pci_read_config_word" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "mtd,chipreg,map_funcs");


MODULE_INFO(srcversion, "5D146FEDD9C839199B725FC");
