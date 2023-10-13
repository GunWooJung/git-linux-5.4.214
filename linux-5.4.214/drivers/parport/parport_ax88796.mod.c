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
	{ 0x1ef8f8c, "parport_ieee1284_read_byte" },
	{ 0xfa570438, "parport_ieee1284_read_nibble" },
	{ 0xe51150c1, "parport_ieee1284_write_compat" },
	{ 0x965c3321, "parport_ieee1284_ecp_write_addr" },
	{ 0xe643633c, "parport_ieee1284_ecp_read_data" },
	{ 0x3a994f54, "parport_ieee1284_ecp_write_data" },
	{ 0x854bb4e0, "parport_ieee1284_epp_read_addr" },
	{ 0xcc242564, "parport_ieee1284_epp_write_addr" },
	{ 0xff028cd3, "parport_ieee1284_epp_read_data" },
	{ 0x60e15911, "parport_ieee1284_epp_write_data" },
	{ 0xa99a62a3, "platform_driver_unregister" },
	{ 0x19af53eb, "__platform_driver_register" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xd71c099b, "parport_announce_port" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x5e3a3912, "parport_irq_handler" },
	{ 0x89c19571, "parport_register_port" },
	{ 0x7e73a43b, "platform_get_irq" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x85bd1608, "__request_region" },
	{ 0xd072dc20, "platform_get_resource" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xfcec0987, "enable_irq" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x37a0cba, "kfree" },
	{ 0x1035c7c2, "__release_region" },
	{ 0x77358855, "iomem_resource" },
	{ 0xedc03953, "iounmap" },
	{ 0x554a3a00, "parport_remove_port" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "parport");


MODULE_INFO(srcversion, "2FCBBBFDDF4069F58DE7EA0");
