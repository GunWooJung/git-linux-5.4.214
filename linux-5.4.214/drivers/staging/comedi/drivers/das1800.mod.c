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
	{ 0x758f081b, "comedi_driver_unregister" },
	{ 0xe73c2838, "comedi_driver_register" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x78a49a48, "__comedi_request_region" },
	{ 0xa33acd7f, "comedi_alloc_subdev_readback" },
	{ 0xbb52fc7f, "range_bipolar10" },
	{ 0xaed06536, "_dev_warn" },
	{ 0x75846027, "comedi_isadma_alloc" },
	{ 0xdb2044b2, "range_unipolar5" },
	{ 0x390a0822, "comedi_alloc_subdevices" },
	{ 0x69d0eaa1, "comedi_8254_init" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x264153bb, "comedi_request_region" },
	{ 0xe17d701, "comedi_alloc_devpriv" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0xe186f776, "comedi_8254_load" },
	{ 0xa304c2d6, "comedi_8254_pacer_enable" },
	{ 0x311c9949, "comedi_8254_update_divisors" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xea878430, "comedi_isadma_program" },
	{ 0x49951708, "sev_enable_key" },
	{ 0x9b6c9ca8, "comedi_handle_events" },
	{ 0xb0b4e3f9, "comedi_nsamples_left" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xc15e9f12, "comedi_timeout" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0xdc699967, "comedi_8254_cascade_ns_to_timer" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x689f67a5, "comedi_buf_write_samples" },
	{ 0x12fba874, "comedi_isadma_disable" },
	{ 0x64cb354c, "comedi_dio_update_state" },
	{ 0x1035c7c2, "__release_region" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0xce6c434a, "comedi_legacy_detach" },
	{ 0x37a0cba, "kfree" },
	{ 0x27fd24f1, "comedi_isadma_free" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "comedi,comedi_isadma,comedi_8254");


MODULE_INFO(srcversion, "AC5C11B8CAB656EDAFE746E");
