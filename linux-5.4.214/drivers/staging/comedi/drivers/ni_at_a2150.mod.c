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
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x75846027, "comedi_isadma_alloc" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x12a38747, "usleep_range" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x390a0822, "comedi_alloc_subdevices" },
	{ 0x69d0eaa1, "comedi_8254_init" },
	{ 0x264153bb, "comedi_request_region" },
	{ 0xe17d701, "comedi_alloc_devpriv" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9b6c9ca8, "comedi_handle_events" },
	{ 0x689f67a5, "comedi_buf_write_samples" },
	{ 0xc15e9f12, "comedi_timeout" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xe186f776, "comedi_8254_load" },
	{ 0xea878430, "comedi_isadma_program" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x12fba874, "comedi_isadma_disable" },
	{ 0xce6c434a, "comedi_legacy_detach" },
	{ 0x27fd24f1, "comedi_isadma_free" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "comedi,comedi_isadma,comedi_8254");


MODULE_INFO(srcversion, "B073AC92AC98E6DD664640D");
