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
	{ 0x74e831b6, "platform_device_unregister" },
	{ 0xa99a62a3, "platform_driver_unregister" },
	{ 0xaf465642, "platform_device_put" },
	{ 0xf14ea0e9, "platform_device_add" },
	{ 0xd73c36a2, "platform_device_alloc" },
	{ 0x19af53eb, "__platform_driver_register" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0xd1c6a314, "hwmon_device_register" },
	{ 0x5748356e, "device_create_file" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x85bd1608, "__request_region" },
	{ 0xd0c1e622, "pci_read_config_dword" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x848d372e, "iowrite8" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0xf10de535, "ioread8" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8423aab5, "pci_dev_put" },
	{ 0xb0de39d3, "pci_read_config_word" },
	{ 0xa207ea98, "pci_get_device" },
	{ 0x1035c7c2, "__release_region" },
	{ 0x77358855, "iomem_resource" },
	{ 0xedc03953, "iounmap" },
	{ 0x37a0cba, "kfree" },
	{ 0x174e203e, "device_remove_file" },
	{ 0xd3f5b56e, "hwmon_device_unregister" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00008086d000025F0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004030sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "46ABFA17557A5158DAF72A7");
