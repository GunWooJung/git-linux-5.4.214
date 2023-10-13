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
	{ 0x1cd6f316, "param_ops_uint" },
	{ 0xb9262523, "pcmcia_unregister_driver" },
	{ 0xfd864eaf, "pcmcia_register_driver" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x40ca826f, "mmc_request_done" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x6d3954a4, "mmc_add_host" },
	{ 0x947fbbbc, "mmc_alloc_host" },
	{ 0x5c4e734e, "pci_iomap" },
	{ 0xa207ea98, "pci_get_device" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x19c85322, "pcmcia_disable_device" },
	{ 0x8bd4fa4f, "mmc_free_host" },
	{ 0x8423aab5, "pci_dev_put" },
	{ 0x3bffcc92, "pci_iounmap" },
	{ 0xb846722a, "mmc_remove_host" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "pcmcia");

MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paD9F522EDpbC3901202pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paD9F522EDpbACE80909pc*pd*");

MODULE_INFO(srcversion, "014806DD60080BEA5967047");
