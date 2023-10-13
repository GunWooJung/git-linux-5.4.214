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
	{ 0x27dd129b, "pcim_enable_device" },
	{ 0x66432aba, "serial8250_register_8250_port" },
	{ 0x6c3b0324, "dw8250_setup_port" },
	{ 0x46c5e2e4, "pcim_iomap" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xcefcd99a, "serial8250_unregister_port" },
	{ 0xe549079f, "pci_try_set_mwi" },
	{ 0xe8217b18, "dw_dma_probe" },
	{ 0x33130ff7, "pci_ioremap_bar" },
	{ 0x226f7074, "pci_irq_vector" },
	{ 0xbf27fdc4, "pci_alloc_irq_vectors_affinity" },
	{ 0x8338fd8, "pci_set_master" },
	{ 0x3bffcc92, "pci_iounmap" },
	{ 0x6259fd79, "dw_dma_remove" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x4673660a, "serial8250_do_set_termios" },
	{ 0xb0a0da0c, "rational_best_approximation" },
	{ 0x409873e3, "tty_termios_baud_rate" },
	{ 0xbbfe175a, "pci_get_slot" },
	{ 0x6e5dc4ab, "serial8250_do_get_mctrl" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "dw_dmac_core");

MODULE_ALIAS("pci:v00008086d00000936sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004B96sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004B97sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004B98sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004B99sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004B9Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004B9Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000F0Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000F0Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000228Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000228Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009CE3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009CE4sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "DD9B9F46E67D6A98910FD17");
