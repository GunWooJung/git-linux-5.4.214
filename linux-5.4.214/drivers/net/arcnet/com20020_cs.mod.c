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
	{ 0x8a1d6948, "_dev_notice" },
	{ 0x21d3b421, "__dynamic_netdev_dbg" },
	{ 0xd37024c5, "com20020_found" },
	{ 0x1c50751a, "com20020_check" },
	{ 0xb55067d3, "pcmcia_enable_device" },
	{ 0x32dce1b0, "pcmcia_request_io" },
	{ 0x6203fabf, "alloc_arcdev" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x37a0cba, "kfree" },
	{ 0x2816d12d, "free_netdev" },
	{ 0x8acf4ec6, "unregister_netdev" },
	{ 0x7ad55ce3, "netif_device_detach" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x19c85322, "pcmcia_disable_device" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "pcmcia,com20020,arcnet");

MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa59991666pb95DFFFAFpc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paF8991729pb69DFF0C7pc*pd*");

MODULE_INFO(srcversion, "600A4397ABFD74D6F75A439");
