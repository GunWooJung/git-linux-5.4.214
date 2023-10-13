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
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xb55067d3, "pcmcia_enable_device" },
	{ 0x8ed9fa14, "scsi_host_alloc" },
	{ 0xa33bf30d, "scsi_add_host_with_dma" },
	{ 0x63e8e038, "qlogicfas408_queuecommand" },
	{ 0xfd864eaf, "pcmcia_register_driver" },
	{ 0x13ce8b8f, "qlogicfas408_abort" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x32dce1b0, "pcmcia_request_io" },
	{ 0xc5850110, "printk" },
	{ 0xf8c6e3da, "scsi_scan_host" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x6af95259, "pcmcia_loop_config" },
	{ 0xf4e6656e, "scsi_host_put" },
	{ 0xe76b3b20, "qlogicfas408_get_chip_type" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x1f55cd70, "qlogicfas408_ihandl" },
	{ 0x37a0cba, "kfree" },
	{ 0xb9262523, "pcmcia_unregister_driver" },
	{ 0x5cf037ba, "qlogicfas408_host_reset" },
	{ 0x665ec217, "scsi_remove_host" },
	{ 0xf2b95199, "qlogicfas408_setup" },
	{ 0xed859a48, "qlogicfas408_biosparam" },
	{ 0x19c85322, "pcmcia_disable_device" },
	{ 0x8f1d805e, "qlogicfas408_info" },
	{ 0xc1514a3b, "free_irq" },
};

MODULE_INFO(depends, "pcmcia,qlogicfas408");

MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa88395FA7pb33B7A5E6pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paD361772Fpb299D1751pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa20841B68pbAB3C3B6Dpc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa6534382ApbD67EEE79pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa18DF0BA0pb24662E8Apc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa82375A27pbF68E5BF7pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa82375A27pb68EACE54pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa3FAEE676pb194250ECpc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paD77B2930pbA85B2735pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paD77B2930pb70F8B5F8pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa3FAEE676pb81896B61pcF99F065Fpd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa85C10E17pb1A2640C1pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paB4585A1ApbA6F06EBEpc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paB4585A1Apb0A88DEA0pc*pd*");

MODULE_INFO(srcversion, "43DE8513532043DB0824EC6");
