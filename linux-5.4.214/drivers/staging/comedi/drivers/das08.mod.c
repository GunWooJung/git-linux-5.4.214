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
	{ 0x2f0ad9d3, "range_bipolar5" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xa33acd7f, "comedi_alloc_subdev_readback" },
	{ 0xc15e9f12, "comedi_timeout" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x64cb354c, "comedi_dio_update_state" },
	{ 0xdb2044b2, "range_unipolar5" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x69d0eaa1, "comedi_8254_init" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xd111bb59, "_dev_info" },
	{ 0xcd330f4, "range_unknown" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x307233a, "comedi_8254_subdevice_init" },
	{ 0xbbedef75, "subdev_8255_init" },
	{ 0x390a0822, "comedi_alloc_subdevices" },
};

MODULE_INFO(depends, "comedi,comedi_8254,comedi_8255");


MODULE_INFO(srcversion, "313578986B5B1FA98FEF863");
