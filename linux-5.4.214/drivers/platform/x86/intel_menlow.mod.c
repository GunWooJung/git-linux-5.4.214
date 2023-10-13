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
	{ 0xec2b8a42, "acpi_walk_namespace" },
	{ 0x56975ed9, "acpi_bus_register_driver" },
	{ 0x1a45cb6c, "acpi_disabled" },
	{ 0x9975dc22, "acpi_get_handle" },
	{ 0x6c389761, "acpi_bus_get_private_data" },
	{ 0x5748356e, "device_create_file" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xc5850110, "printk" },
	{ 0xcfe9b0cc, "sysfs_create_link" },
	{ 0x970d5a4a, "thermal_cooling_device_register" },
	{ 0x509b64ea, "acpi_has_method" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x37a0cba, "kfree" },
	{ 0x174e203e, "device_remove_file" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xebdd1a34, "thermal_cooling_device_unregister" },
	{ 0x70f7f79, "sysfs_remove_link" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x735e6a81, "acpi_evaluate_integer" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "87ECFFD0166DC564077026E");
