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
	{ 0xc5850110, "printk" },
	{ 0x15b8e28e, "platform_device_register" },
	{ 0x45f3a638, "sl811h_driver" },
	{ 0xb55067d3, "pcmcia_enable_device" },
	{ 0x6af95259, "pcmcia_loop_config" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x32dce1b0, "pcmcia_request_io" },
	{ 0x37a0cba, "kfree" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x74e831b6, "platform_device_unregister" },
	{ 0x19c85322, "pcmcia_disable_device" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "pcmcia,sl811-hcd");

MODULE_ALIAS("pcmcia:mC015c0001f*fn*pfn*pa*pb*pc*pd*");

MODULE_INFO(srcversion, "52559680B903E2E39F87D40");
