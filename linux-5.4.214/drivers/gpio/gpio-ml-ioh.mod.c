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
	{ 0x51765820, "devm_request_threaded_irq" },
	{ 0x711aeee, "devm_irq_setup_generic_chip" },
	{ 0xae30cb2c, "devm_irq_alloc_generic_chip" },
	{ 0x96a44dfb, "handle_simple_irq" },
	{ 0x7467fc7b, "__devm_irq_alloc_descs" },
	{ 0x52ac9eed, "gpiochip_add_data_with_key" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x5c4e734e, "pci_iomap" },
	{ 0x4a5eb426, "pci_request_regions" },
	{ 0x787bfb4b, "gpiochip_get_data" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x7ceaf0d5, "generic_handle_irq" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0xaed06536, "_dev_warn" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x37a0cba, "kfree" },
	{ 0x982ccbd5, "pci_release_regions" },
	{ 0x3bffcc92, "pci_iounmap" },
	{ 0xf4b0582f, "gpiochip_remove" },
	{ 0xc5846169, "pci_disable_device" },
	{ 0x200dc428, "pci_save_state" },
	{ 0xe484e35f, "ioread32" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x4a453f53, "iowrite32" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x921f329, "pci_restore_state" },
	{ 0xf51bf8b0, "pci_enable_device" },
	{ 0x74c790d2, "pci_set_power_state" },
	{ 0x3c0222d0, "pci_enable_wake" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v000010DBd0000802Esv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "F76E5214B60C88300E4B45B");
