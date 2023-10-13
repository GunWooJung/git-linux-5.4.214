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
	{ 0xe93e49c3, "devres_free" },
	{ 0x54f4505f, "iio_kfifo_allocate" },
	{ 0x8b1b1560, "devres_alloc_node" },
	{ 0xe5110010, "devm_iio_device_match" },
	{ 0xed9d766e, "iio_triggered_buffer_postenable" },
	{ 0xa1b7f476, "iio_device_attach_buffer" },
	{ 0x398c9016, "devres_release" },
	{ 0xb813aac1, "iio_triggered_buffer_predisable" },
	{ 0x87036eb1, "iio_kfifo_free" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xa619e2b0, "devres_add" },
	{ 0x55f4530a, "iio_alloc_pollfunc" },
	{ 0x1505e8e2, "iio_dealloc_pollfunc" },
};

MODULE_INFO(depends, "kfifo_buf,industrialio");


MODULE_INFO(srcversion, "22C108E890DC32A58054AC2");
