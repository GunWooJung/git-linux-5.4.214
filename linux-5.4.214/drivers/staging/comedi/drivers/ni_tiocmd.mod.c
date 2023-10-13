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

MODULE_INFO(staging, "Y");

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xed93c0b3, "module_layout" },
	{ 0x815e6b34, "ni_tio_write" },
	{ 0x35ae1ca1, "mite_dma_arm" },
	{ 0x4f122c31, "mite_dma_disarm" },
	{ 0xd49e7b9a, "ni_tio_set_gate_src_raw" },
	{ 0x8a1d6948, "_dev_notice" },
	{ 0x5f42f5b4, "ni_tio_set_gate_src" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x86ac2c84, "ni_tio_get_soft_copy" },
	{ 0x76bc308, "ni_find_route_source" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x11bf1b95, "mite_prep_dma" },
	{ 0xd111bb59, "_dev_info" },
	{ 0xb3e302a3, "ni_route_to_register" },
	{ 0xcc649136, "mite_ack_linkc" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xb99602db, "ni_tio_read" },
	{ 0x96de0371, "comedi_buf_write_alloc" },
	{ 0x985ad9bf, "ni_tio_set_bits" },
	{ 0xd824ece2, "mite_done" },
	{ 0xc65e4c80, "ni_tio_arm" },
};

MODULE_INFO(depends, "ni_tio,mite,ni_routing,comedi");


MODULE_INFO(srcversion, "C0CBDA81FC9C6783709381C");
