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
	{ 0x33560c9e, "devm_add_action" },
	{ 0xbbfe175a, "pci_get_slot" },
	{ 0x5f130ba8, "pcim_iomap_regions" },
	{ 0x27dd129b, "pcim_enable_device" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x56cf6cd9, "platform_device_register_full" },
	{ 0xb44f5231, "clk_register_fixed_rate" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x226f7074, "pci_irq_vector" },
	{ 0xbf27fdc4, "pci_alloc_irq_vectors_affinity" },
	{ 0x8338fd8, "pci_set_master" },
	{ 0x4117e0fc, "pcim_iomap_table" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x7757b51a, "clk_unregister" },
	{ 0x74e831b6, "platform_device_unregister" },
	{ 0x8423aab5, "pci_dev_put" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00008086d00000935sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000F0Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001194sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000228Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002290sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000022ACsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002E6Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009CE5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009CE6sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "7AB749945E210597A478F7E");
