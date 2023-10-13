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
	{ 0xb9262523, "pcmcia_unregister_driver" },
	{ 0xfd864eaf, "pcmcia_register_driver" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xe1451398, "register_sja1000dev" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x9c9734f3, "alloc_sja1000dev" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xb55067d3, "pcmcia_enable_device" },
	{ 0xcbd5b45e, "pcmcia_map_mem_page" },
	{ 0xc446ef36, "pcmcia_request_window" },
	{ 0x49ebd0d2, "sja1000_interrupt" },
	{ 0x19c85322, "pcmcia_disable_device" },
	{ 0x2deca308, "free_sja1000dev" },
	{ 0xdc94a391, "unregister_sja1000dev" },
	{ 0xc5850110, "printk" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x37a0cba, "kfree" },
	{ 0xedc03953, "iounmap" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "pcmcia,sja1000");

MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paEAB1EA23pbA338573FpcE4575800pd*");

MODULE_INFO(srcversion, "3C8E90B6F7F3BC48CBE8893");
