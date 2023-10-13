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
	{ 0xd1f20976, "init_airo_card" },
	{ 0xb55067d3, "pcmcia_enable_device" },
	{ 0x6af95259, "pcmcia_loop_config" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x32dce1b0, "pcmcia_request_io" },
	{ 0x37a0cba, "kfree" },
	{ 0x8c43949, "stop_airo_card" },
	{ 0x7ad55ce3, "netif_device_detach" },
	{ 0xc5f6f445, "netif_device_attach" },
	{ 0x8c58adb2, "reset_airo_card" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x19c85322, "pcmcia_disable_device" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "pcmcia,airo");

MODULE_ALIAS("pcmcia:m015Fc000Af*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m015Fc0005f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m015Fc0007f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m0105c0007f*fn*pfn*pa*pb*pc*pd*");

MODULE_INFO(srcversion, "CA70EA8B11622E0D568D467");
