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
	{ 0xd111bb59, "_dev_info" },
	{ 0x689f67a5, "comedi_buf_write_samples" },
	{ 0x9b6c9ca8, "comedi_handle_events" },
	{ 0xea878430, "comedi_isadma_program" },
	{ 0xca784d4b, "comedi_isadma_set_mode" },
	{ 0x9b2f554d, "comedi_buf_read_samples" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x75846027, "comedi_isadma_alloc" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xdb2044b2, "range_unipolar5" },
	{ 0xa33acd7f, "comedi_alloc_subdev_readback" },
	{ 0x390a0822, "comedi_alloc_subdevices" },
	{ 0xe17d701, "comedi_alloc_devpriv" },
	{ 0x264153bb, "comedi_request_region" },
	{ 0xc15e9f12, "comedi_timeout" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x12fba874, "comedi_isadma_disable" },
	{ 0x64cb354c, "comedi_dio_update_state" },
	{ 0xf3aa101d, "comedi_dio_insn_config" },
	{ 0xce6c434a, "comedi_legacy_detach" },
	{ 0x27fd24f1, "comedi_isadma_free" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "comedi,comedi_isadma");


MODULE_INFO(srcversion, "2569AC92DA22295DF8E9C17");
