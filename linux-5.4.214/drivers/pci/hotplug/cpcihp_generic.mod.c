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
	{ 0x131e5561, "param_ops_charp" },
	{ 0xdc67eaad, "param_ops_byte" },
	{ 0xcce57a7f, "param_ops_ushort" },
	{ 0x1cd6f316, "param_ops_uint" },
	{ 0x1035c7c2, "__release_region" },
	{ 0x94ef4d05, "cpci_hp_stop" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xbe1a5cb8, "cpci_hp_unregister_controller" },
	{ 0x87a39e0d, "cpci_hp_unregister_bus" },
	{ 0x6a8441be, "cpci_hp_start" },
	{ 0x4cbd3c8f, "cpci_hp_register_bus" },
	{ 0x1218fd92, "cpci_hp_register_controller" },
	{ 0x8423aab5, "pci_dev_put" },
	{ 0x961509ac, "pci_get_domain_bus_and_slot" },
	{ 0x85bd1608, "__request_region" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x20000329, "simple_strtoul" },
	{ 0xc5850110, "printk" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "5A9D3739A5FF2F382DD199A");
