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
	{ 0xc2107c52, "sysfs_create_group" },
	{ 0xdf8165bf, "backlight_device_register" },
	{ 0x94a09154, "input_register_device" },
	{ 0x4e97c8d9, "input_free_device" },
	{ 0xd549d4ef, "sparse_keymap_setup" },
	{ 0x4f55cb4, "input_allocate_device" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x37a0cba, "kfree" },
	{ 0x2ab40469, "input_unregister_device" },
	{ 0x472afdf9, "backlight_device_unregister" },
	{ 0xa82f8d7f, "sysfs_remove_group" },
	{ 0x9ba870e8, "sparse_keymap_report_event" },
	{ 0x735e6a81, "acpi_evaluate_integer" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xd92deb6b, "acpi_evaluate_object" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "sparse-keymap");

MODULE_ALIAS("acpi*:MAT0012:*");
MODULE_ALIAS("acpi*:MAT0013:*");
MODULE_ALIAS("acpi*:MAT0018:*");
MODULE_ALIAS("acpi*:MAT0019:*");

MODULE_INFO(srcversion, "7FB1AE779AF3634143F5D52");
