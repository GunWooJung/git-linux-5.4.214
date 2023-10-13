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
	{ 0xb9262523, "pcmcia_unregister_driver" },
	{ 0xfd864eaf, "pcmcia_register_driver" },
	{ 0xc5850110, "printk" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x51181121, "mtd_device_parse_register" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xb0259c6, "do_map_probe" },
	{ 0xb55067d3, "pcmcia_enable_device" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0xc446ef36, "pcmcia_request_window" },
	{ 0xd6a09058, "pcmcia_loop_tuple" },
	{ 0x61651be, "strcat" },
	{ 0x754d539c, "strlen" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xcbd5b45e, "pcmcia_map_mem_page" },
	{ 0x862ac2bb, "pcmcia_fixup_vpp" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x7d628444, "memcpy_fromio" },
	{ 0xb9e7429c, "memcpy_toio" },
	{ 0xd3b018f3, "pcmcia_dev_present" },
	{ 0xcfe5c5b1, "map_destroy" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x5ef55b4f, "mtd_device_unregister" },
	{ 0x19c85322, "pcmcia_disable_device" },
	{ 0xedc03953, "iounmap" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x742f5665, "pcmcia_parse_tuple" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "pcmcia,mtd,chipreg");

MODULE_ALIAS("pcmcia:m*c*f01fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa547E66DCpb1FED36CDpc36EADD21pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paB569A6E5pb36EADD21pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paB569A6E5pb8BC54D2Apc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paB569A6E5pb6DF1BE3Epc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa816CC815pbD14C9DCFpc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa816CC815pbA2D7DEDBpc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa40ADE711pb145CEA5Cpc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa40ADE711pb42064DDApc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa40ADE711pb25EE5CB0pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa40ADE711pbDF8506D8pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa54D0C69CpbAD12C29Cpc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paB68968C8pb2DFB47B0pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa7ED2AD87pb675DC3FBpc7AEF3965pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paEBF91155pb805360CApc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paEBF91155pb20B6BF17pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paF9876BAFpbAD0B207Bpc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paF9876BAFpbE8D884ADpc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa96FD8277pb737A5B05pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa05DDCA47pbE7D67BCApc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa05DDCA47pb7BC32944pc*pd*");

MODULE_INFO(srcversion, "83CB234E27EF2AB69B2C577");
