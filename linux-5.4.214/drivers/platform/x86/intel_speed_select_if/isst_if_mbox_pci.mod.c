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
	{ 0xcbb9f1c1, "isst_if_cdev_register" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x27dd129b, "pcim_enable_device" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9a5c38f2, "isst_store_cmd" },
	{ 0xc6cbbc89, "capable" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xd0bb4ec1, "pci_write_config_dword" },
	{ 0xd0c1e622, "pci_read_config_dword" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x7886981, "isst_if_get_pci_dev" },
	{ 0x6f7821f, "isst_if_mbox_cmd_set_req" },
	{ 0x58a8261f, "isst_if_mbox_cmd_invalid" },
	{ 0xe18f42a5, "isst_if_cdev_unregister" },
	{ 0x861369f8, "isst_resume_common" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "isst_if_common");

MODULE_ALIAS("pci:v00008086d00003459sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003259sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "DA1BCD8BCB672F06D9CC383");
