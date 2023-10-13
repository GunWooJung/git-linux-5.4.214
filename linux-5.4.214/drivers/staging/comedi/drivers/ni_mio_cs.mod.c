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
	{ 0xbb52fc7f, "range_bipolar10" },
	{ 0x2f0ad9d3, "range_bipolar5" },
	{ 0x5f3937e, "comedi_pcmcia_auto_unconfig" },
	{ 0xb4f5d012, "comedi_pcmcia_driver_unregister" },
	{ 0x749a6ba7, "comedi_pcmcia_driver_register" },
	{ 0xcd330f4, "range_unknown" },
	{ 0xbbedef75, "subdev_8255_init" },
	{ 0x89add806, "ni_tio_insn_config" },
	{ 0x1d351d76, "ni_tio_insn_write" },
	{ 0xdf1d3a54, "ni_tio_insn_read" },
	{ 0xda23d366, "ni_tio_init_counter" },
	{ 0x5e08a876, "ni_gpct_device_construct" },
	{ 0xdb2044b2, "range_unipolar5" },
	{ 0xa33acd7f, "comedi_alloc_subdev_readback" },
	{ 0x390a0822, "comedi_alloc_subdevices" },
	{ 0xf6399e4e, "ni_assign_device_routes" },
	{ 0xe17d701, "comedi_alloc_devpriv" },
	{ 0xc9c33c90, "pcmcia_request_irq" },
	{ 0xb77c45ff, "comedi_pcmcia_enable" },
	{ 0xae412ca8, "comedi_to_pcmcia_dev" },
	{ 0x921123e, "ni_lookup_route_register" },
	{ 0x68122a0b, "ni_tio_set_routing" },
	{ 0xed7f4adb, "ni_tio_unset_routing" },
	{ 0xb3e302a3, "ni_route_to_register" },
	{ 0xbed89eef, "comedi_is_subdevice_running" },
	{ 0x72103f2a, "comedi_buf_read_n_available" },
	{ 0x9b6c9ca8, "comedi_handle_events" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xaf7d0f48, "current_task" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x1d7e9eb, "ni_tio_get_routing" },
	{ 0x76bc308, "ni_find_route_source" },
	{ 0xf3aa101d, "comedi_dio_insn_config" },
	{ 0x7873ab2c, "comedi_pcmcia_disable" },
	{ 0x3222ce8a, "ni_gpct_device_destroy" },
	{ 0x64443d67, "ni_get_valid_routes" },
	{ 0x64cb354c, "comedi_dio_update_state" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x32dce1b0, "pcmcia_request_io" },
	{ 0x9b2f554d, "comedi_buf_read_samples" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x689f67a5, "comedi_buf_write_samples" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xaed06536, "_dev_warn" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xe212ce60, "comedi_pcmcia_auto_config" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "comedi,comedi_pcmcia,comedi_8255,ni_tio,ni_routing,pcmcia");

MODULE_ALIAS("pcmcia:m010Bc010Df*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m010Bc010Cf*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m010Bc02C4f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m010Bc075Ef*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m010Bc0245f*fn*pfn*pa*pb*pc*pd*");

MODULE_INFO(srcversion, "05F5438754AB28685728E10");
