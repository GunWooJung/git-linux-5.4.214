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
	{ 0x85bd1608, "__request_region" },
	{ 0x765395c3, "param_ops_int" },
	{ 0x77358855, "iomem_resource" },
	{ 0x37a24b11, "pci_read_config_byte" },
	{ 0xc5846169, "pci_disable_device" },
	{ 0x928d7386, "pci_write_config_byte" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x5c75775f, "dma_free_attrs" },
	{ 0x11dc4b6d, "bttv_gpio_enable" },
	{ 0x8338fd8, "pci_set_master" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0xc5850110, "printk" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0x532b1a31, "dma_alloc_attrs" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8ecf4acc, "bttv_write_gpio" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x1035c7c2, "__release_region" },
	{ 0x8b95e7b, "pci_unregister_driver" },
	{ 0xedc03953, "iounmap" },
	{ 0xf354855a, "__pci_register_driver" },
	{ 0xbcf2d2fb, "bttv_read_gpio" },
	{ 0xf51bf8b0, "pci_enable_device" },
	{ 0xc1514a3b, "free_irq" },
};

MODULE_INFO(depends, "bttv");

MODULE_ALIAS("pci:v0000109Ed00000878sv00000071sd00000101bc*sc*i*");
MODULE_ALIAS("pci:v0000109Ed00000878sv00001461sd00000761bc*sc*i*");
MODULE_ALIAS("pci:v0000109Ed00000878sv000011BDsd0000001Cbc*sc*i*");
MODULE_ALIAS("pci:v0000109Ed00000878sv000011BDsd00000026bc*sc*i*");
MODULE_ALIAS("pci:v0000109Ed00000878sv00001822sd00000001bc*sc*i*");
MODULE_ALIAS("pci:v0000109Ed00000878sv0000270Fsd0000FC00bc*sc*i*");
MODULE_ALIAS("pci:v0000109Ed00000878sv00001461sd00000771bc*sc*i*");
MODULE_ALIAS("pci:v0000109Ed00000878sv000018ACsd0000DB10bc*sc*i*");
MODULE_ALIAS("pci:v0000109Ed00000878sv000018ACsd0000DB11bc*sc*i*");
MODULE_ALIAS("pci:v0000109Ed00000878sv000018ACsd0000D500bc*sc*i*");
MODULE_ALIAS("pci:v0000109Ed00000878sv00007063sd00002000bc*sc*i*");
MODULE_ALIAS("pci:v0000109Ed00000878sv00001822sd00000026bc*sc*i*");

MODULE_INFO(srcversion, "45D2F03C91717AD64402E5F");
