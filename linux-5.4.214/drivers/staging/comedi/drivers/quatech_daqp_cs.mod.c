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
	{ 0x7873ab2c, "comedi_pcmcia_disable" },
	{ 0x5f3937e, "comedi_pcmcia_auto_unconfig" },
	{ 0xb4f5d012, "comedi_pcmcia_driver_unregister" },
	{ 0x749a6ba7, "comedi_pcmcia_driver_register" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xa33acd7f, "comedi_alloc_subdev_readback" },
	{ 0x2f0ad9d3, "range_bipolar5" },
	{ 0x390a0822, "comedi_alloc_subdevices" },
	{ 0xc9c33c90, "pcmcia_request_irq" },
	{ 0xb77c45ff, "comedi_pcmcia_enable" },
	{ 0xe17d701, "comedi_alloc_devpriv" },
	{ 0xae412ca8, "comedi_to_pcmcia_dev" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xaed06536, "_dev_warn" },
	{ 0x9b6c9ca8, "comedi_handle_events" },
	{ 0x689f67a5, "comedi_buf_write_samples" },
	{ 0xc15e9f12, "comedi_timeout" },
	{ 0x64cb354c, "comedi_dio_update_state" },
	{ 0xe212ce60, "comedi_pcmcia_auto_config" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "comedi_pcmcia,comedi,pcmcia");

MODULE_ALIAS("pcmcia:m0137c0027f*fn*pfn*pa*pb*pc*pd*");

MODULE_INFO(srcversion, "E05BF286CE7A81CC7FB973F");
