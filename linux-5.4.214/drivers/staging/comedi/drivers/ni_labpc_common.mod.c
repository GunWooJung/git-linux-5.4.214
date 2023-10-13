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
	{ 0xe17d701, "comedi_alloc_devpriv" },
	{ 0x33773306, "labpc_drain_dma" },
	{ 0xdc699967, "comedi_8254_cascade_ns_to_timer" },
	{ 0xa33acd7f, "comedi_alloc_subdev_readback" },
	{ 0xe186f776, "comedi_8254_load" },
	{ 0xc15e9f12, "comedi_timeout" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x9f24264c, "comedi_8254_set_mode" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x689f67a5, "comedi_buf_write_samples" },
	{ 0x28af4d5, "labpc_setup_dma" },
	{ 0x311c9949, "comedi_8254_update_divisors" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0x5755c86e, "labpc_handle_dma_status" },
	{ 0x75e10c44, "subdev_8255_mm_init" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x69d0eaa1, "comedi_8254_init" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xf918605c, "comedi_8254_write" },
	{ 0x37a0cba, "kfree" },
	{ 0x898b29f2, "comedi_8254_mm_init" },
	{ 0xbbedef75, "subdev_8255_init" },
	{ 0x9b6c9ca8, "comedi_handle_events" },
	{ 0x390a0822, "comedi_alloc_subdevices" },
};

MODULE_INFO(depends, "comedi,ni_labpc_isadma,comedi_8254,comedi_8255");


MODULE_INFO(srcversion, "CE3196CE7BE4B35EB688A89");
