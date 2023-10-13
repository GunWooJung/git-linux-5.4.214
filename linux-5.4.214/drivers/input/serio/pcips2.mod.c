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
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xc466e83f, "__serio_register_port" },
	{ 0x5792f848, "strlcpy" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x4a5eb426, "pci_request_regions" },
	{ 0xf51bf8b0, "pci_enable_device" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x27e60eae, "serio_interrupt" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xc5846169, "pci_disable_device" },
	{ 0x982ccbd5, "pci_release_regions" },
	{ 0x37a0cba, "kfree" },
	{ 0x8c039e40, "serio_unregister_port" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v000014F2d00000123sv*sd*bc09sc00i*");
MODULE_ALIAS("pci:v000014F2d00000124sv*sd*bc09sc02i*");

MODULE_INFO(srcversion, "FB3FB81BCC35CB706133DE3");
