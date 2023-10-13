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
	{ 0xeb233a45, "__kmalloc" },
	{ 0x5c42b5ca, "no_llseek" },
	{ 0xae7be25, "acpi_bus_get_device" },
	{ 0x56470118, "__warn_printk" },
	{ 0xd92deb6b, "acpi_evaluate_object" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0xebb33591, "nonseekable_open" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x4b2e0ffe, "misc_register" },
	{ 0xb8e7ce2c, "__put_user_8" },
	{ 0xc5850110, "printk" },
	{ 0x5f93525c, "acpi_extract_package" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xaebd12f0, "acpi_get_name" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x37a0cba, "kfree" },
	{ 0x35775925, "misc_deregister" },
	{ 0x88db9f48, "__check_object_size" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "039927A9722BED6E29FABEC");
