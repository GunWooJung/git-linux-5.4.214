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
	{ 0xdb2044b2, "range_unipolar5" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x390a0822, "comedi_alloc_subdevices" },
	{ 0x784c1b85, "comedi_find_subdevice_by_type" },
	{ 0xf9c0b663, "strlcat" },
	{ 0xc8dcc62a, "krealloc" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x7ad0ad97, "comedi_get_n_channels" },
	{ 0xc84b6ce1, "comedi_open" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xe17d701, "comedi_alloc_devpriv" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x874cb7dc, "comedi_dio_bitfield2" },
	{ 0xc19533dc, "comedi_dio_get_config" },
	{ 0xc4d932ba, "comedi_dio_config" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x83233c55, "comedi_close" },
	{ 0x37a0cba, "kfree" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "comedi,kcomedilib");


MODULE_INFO(srcversion, "0C64EC39205DB3E3E99A2F4");
