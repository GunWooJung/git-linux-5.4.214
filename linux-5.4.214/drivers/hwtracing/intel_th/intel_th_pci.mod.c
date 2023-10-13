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
	{ 0xd0bb4ec1, "pci_write_config_dword" },
	{ 0x339a5a9a, "pci_free_irq_vectors" },
	{ 0x27dd129b, "pcim_enable_device" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xc0988cc1, "intel_th_alloc" },
	{ 0x8338fd8, "pci_set_master" },
	{ 0xbf27fdc4, "pci_alloc_irq_vectors_affinity" },
	{ 0x9424ca0a, "pcim_iomap_regions_request_all" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8e70859c, "intel_th_free" },
	{ 0xd0c1e622, "pci_read_config_dword" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x8b95e7b, "pci_unregister_driver" },
	{ 0x226f7074, "pci_irq_vector" },
	{ 0xf354855a, "__pci_register_driver" },
};

MODULE_INFO(depends, "intel_th");

MODULE_ALIAS("pci:v00008086d00009D26sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A126sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00005A8Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000A80sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001A8Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A2A6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000019E1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A1A6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A226sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000318Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A326sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009DA6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000018E1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000034A6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000002A6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000006A6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A3A6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000045C5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00008A29sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009A33sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A0A6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000043A6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004DA6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004E29sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004529sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004B26sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000051A6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001BCCsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000054A6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A76Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00007E24sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00007A26sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004C19sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "85648C2A767FC028FB87F99");
