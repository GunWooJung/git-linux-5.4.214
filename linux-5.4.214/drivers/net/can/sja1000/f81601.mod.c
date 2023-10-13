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
	{ 0x68a41536, "param_ops_bool" },
	{ 0x1cd6f316, "param_ops_uint" },
	{ 0x8b95e7b, "pci_unregister_driver" },
	{ 0xf354855a, "__pci_register_driver" },
	{ 0xe1451398, "register_sja1000dev" },
	{ 0x9c9734f3, "alloc_sja1000dev" },
	{ 0x37a24b11, "pci_read_config_byte" },
	{ 0x46c5e2e4, "pcim_iomap" },
	{ 0x928d7386, "pci_write_config_byte" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x27dd129b, "pcim_enable_device" },
	{ 0x2deca308, "free_sja1000dev" },
	{ 0xdc94a391, "unregister_sja1000dev" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "sja1000");

MODULE_ALIAS("pci:v00001C29d00001703sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "C3B985D17D55F05D5C3FC60");
