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
	{ 0x9a4c322, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x56cf6cd9, "platform_device_register_full" },
	{ 0xb44f5231, "clk_register_fixed_rate" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x226f7074, "pci_irq_vector" },
	{ 0x8338fd8, "pci_set_master" },
	{ 0x27dd129b, "pcim_enable_device" },
	{ 0x74e831b6, "platform_device_unregister" },
	{ 0x7757b51a, "clk_unregister" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v000017CDd0000E007sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "B91342AEF7A9F1FD33FFE15");
