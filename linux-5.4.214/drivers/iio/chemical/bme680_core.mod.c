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
	{ 0xd3bc5fa0, "iio_read_const_attr" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xc1889514, "regmap_update_bits_base" },
	{ 0xd9729ca4, "regmap_bulk_read" },
	{ 0x36f1a2b6, "regmap_read" },
	{ 0xeee38cc9, "acpi_match_device" },
	{ 0x53c6e7a4, "devm_iio_device_alloc" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0x1a0f5952, "__devm_iio_device_register" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xe1b1c080, "regmap_get_device" },
	{ 0x904a8908, "regmap_write" },
	{ 0x15cb5620, "is_acpi_device_node" },
};

MODULE_INFO(depends, "industrialio");


MODULE_INFO(srcversion, "D9DD809574246BA0694731A");
