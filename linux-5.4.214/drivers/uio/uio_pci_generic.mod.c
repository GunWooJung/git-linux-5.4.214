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
	{ 0xaed06536, "_dev_warn" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xfac56468, "__uio_register_device" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xf51bf8b0, "pci_enable_device" },
	{ 0x9d766f4b, "pci_clear_master" },
	{ 0x2154a347, "pci_check_and_mask_intx" },
	{ 0x37a0cba, "kfree" },
	{ 0xc5846169, "pci_disable_device" },
	{ 0xfe4cdef2, "uio_unregister_device" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "uio");


MODULE_INFO(srcversion, "47B8F4AE5748F67640FFEB9");
