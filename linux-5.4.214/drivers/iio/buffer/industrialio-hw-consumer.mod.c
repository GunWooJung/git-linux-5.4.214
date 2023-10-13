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
	{ 0xeb233a45, "__kmalloc" },
	{ 0x851495c6, "iio_channel_release_all" },
	{ 0xe93e49c3, "devres_free" },
	{ 0x8b1b1560, "devres_alloc_node" },
	{ 0x9dc1c357, "iio_buffer_init" },
	{ 0x6e38edf9, "iio_update_buffers" },
	{ 0x398c9016, "devres_release" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xa619e2b0, "devres_add" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x1d7e340d, "iio_channel_get_all" },
	{ 0x37a0cba, "kfree" },
	{ 0x5a55af81, "iio_buffer_put" },
};

MODULE_INFO(depends, "industrialio");


MODULE_INFO(srcversion, "FDADE3D25FB1900198AE832");
