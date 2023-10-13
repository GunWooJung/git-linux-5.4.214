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
	{ 0x68a41536, "param_ops_bool" },
	{ 0x5c42b5ca, "no_llseek" },
	{ 0x74e831b6, "platform_device_unregister" },
	{ 0xa99a62a3, "platform_driver_unregister" },
	{ 0x56cf6cd9, "platform_device_register_full" },
	{ 0x19af53eb, "__platform_driver_register" },
	{ 0x4b2e0ffe, "misc_register" },
	{ 0x85bd1608, "__request_region" },
	{ 0xa207ea98, "pci_get_device" },
	{ 0x51a3dae5, "pci_match_id" },
	{ 0x167e7f9d, "__get_user_1" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x1035c7c2, "__release_region" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0x35775925, "misc_deregister" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x6932b09e, "stream_open" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xd0bb4ec1, "pci_write_config_dword" },
	{ 0xd0c1e622, "pci_read_config_dword" },
	{ 0xc5850110, "printk" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v000010DEd00000264sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000368sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000752sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000AA2sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "8D3BC4DA2FC4372A5071DC3");
