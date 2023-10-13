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
	{ 0xe0a388bf, "pcibios_resource_to_bus" },
	{ 0x2cee9b6a, "pcmcia_register_socket" },
	{ 0xc34614e0, "pccard_nonstatic_ops" },
	{ 0x1035c7c2, "__release_region" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x928d7386, "pci_write_config_byte" },
	{ 0xc5846169, "pci_disable_device" },
	{ 0x85bd1608, "__request_region" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x37a24b11, "pci_read_config_byte" },
	{ 0xf51bf8b0, "pci_enable_device" },
	{ 0xcca5ec56, "pcmcia_unregister_socket" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xc5850110, "printk" },
	{ 0x9eab43ac, "pcmcia_parse_events" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "pcmcia_core,pcmcia_rsrc");

MODULE_ALIAS("pci:v00008086d00001221sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "94F082A850F840D92C007BE");
