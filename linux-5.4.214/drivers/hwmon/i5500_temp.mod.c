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
	{ 0xb0de39d3, "pci_read_config_word" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x8a1d6948, "_dev_notice" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x983c8c67, "devm_hwmon_device_register_with_groups" },
	{ 0xd0c1e622, "pci_read_config_dword" },
	{ 0x37a24b11, "pci_read_config_byte" },
	{ 0xf51bf8b0, "pci_enable_device" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00008086d00003438sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "7A924C4330E9407F2D06271");
