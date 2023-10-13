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
	{ 0x765395c3, "param_ops_int" },
	{ 0x5ef55b4f, "mtd_device_unregister" },
	{ 0x8423aab5, "pci_dev_put" },
	{ 0xd522f41c, "pci_dev_get" },
	{ 0x3bffcc92, "pci_iounmap" },
	{ 0x51181121, "mtd_device_parse_register" },
	{ 0x37a0cba, "kfree" },
	{ 0x5c4e734e, "pci_iomap" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xd0c1e622, "pci_read_config_dword" },
	{ 0xd712aabe, "pci_write_config_word" },
	{ 0xb0de39d3, "pci_read_config_word" },
	{ 0x37a24b11, "pci_read_config_byte" },
	{ 0x928d7386, "pci_write_config_byte" },
	{ 0xa207ea98, "pci_get_device" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xc5850110, "printk" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xfb578fc5, "memset" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x69acdf38, "memcpy" },
	{ 0xd0bb4ec1, "pci_write_config_dword" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "mtd");


MODULE_INFO(srcversion, "8257AEB7FEF35C80E7EF1E3");
