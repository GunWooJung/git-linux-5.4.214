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
	{ 0x735e6a81, "acpi_evaluate_integer" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xdaa06dc1, "acpi_lpat_raw_to_temp" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xc9d174fb, "thermal_zone_device_register" },
	{ 0xb4043948, "acpi_execute_simple_method" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xdb63a944, "acpi_lpat_get_conversion_table" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0x7de65a03, "acpi_lpat_free_conversion_table" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x92920cb2, "thermal_zone_device_unregister" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "4812104825B1721DB07AAEA");
