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

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xed93c0b3, "module_layout" },
	{ 0x3d1960e2, "acpi_bus_unregister_driver" },
	{ 0x56975ed9, "acpi_bus_register_driver" },
	{ 0xff282521, "rfkill_register" },
	{ 0xe5b440f1, "rfkill_alloc" },
	{ 0xdf8165bf, "backlight_device_register" },
	{ 0x8a490c90, "rfkill_set_sw_state" },
	{ 0xdb68bbad, "rfkill_destroy" },
	{ 0x83eb21c, "rfkill_unregister" },
	{ 0x472afdf9, "backlight_device_unregister" },
	{ 0x735e6a81, "acpi_evaluate_integer" },
	{ 0x5748356e, "device_create_file" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x4e97c8d9, "input_free_device" },
	{ 0x94a09154, "input_register_device" },
	{ 0xce8b1878, "__x86_indirect_thunk_r14" },
	{ 0x4f55cb4, "input_allocate_device" },
	{ 0xd4419732, "input_set_abs_params" },
	{ 0x2ab40469, "input_unregister_device" },
	{ 0x174e203e, "device_remove_file" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xa916b694, "strnlen" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x37a0cba, "kfree" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x66c54ff1, "input_event" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xd92deb6b, "acpi_evaluate_object" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("acpi*:ACCE0000:*");
MODULE_ALIAS("acpi*:ACCE0001:*");
MODULE_ALIAS("acpi*:TBLT0000:*");
MODULE_ALIAS("acpi*:IPML200:*");
MODULE_ALIAS("acpi*:FNBT0000:*");

MODULE_INFO(srcversion, "038DF892B270FC485D7CFF0");
