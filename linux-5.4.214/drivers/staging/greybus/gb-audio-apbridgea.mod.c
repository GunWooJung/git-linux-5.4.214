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

MODULE_INFO(staging, "Y");

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xed93c0b3, "module_layout" },
	{ 0x7c60d490, "__pm_runtime_suspend" },
	{ 0x8bdf333d, "__pm_runtime_resume" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x9ba5b54a, "gb_hd_output" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
};

MODULE_INFO(depends, "greybus");


MODULE_INFO(srcversion, "817BA3B55DD218AE5AFA206");
