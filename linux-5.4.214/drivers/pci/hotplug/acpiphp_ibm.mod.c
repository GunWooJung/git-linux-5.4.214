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
	{ 0xdeb089a7, "sysfs_remove_bin_file" },
	{ 0x1c58427f, "acpi_remove_notify_handler" },
	{ 0x74dbd78d, "sysfs_create_bin_file" },
	{ 0xe513fca8, "acpiphp_unregister_attention" },
	{ 0x170ddf79, "acpi_install_notify_handler" },
	{ 0x506e8db0, "acpiphp_register_attention" },
	{ 0xae7be25, "acpi_bus_get_device" },
	{ 0xec2b8a42, "acpi_walk_namespace" },
	{ 0x6fe4f5a1, "pci_slots_kset" },
	{ 0x735e6a81, "acpi_evaluate_integer" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x69acdf38, "memcpy" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xd92deb6b, "acpi_evaluate_object" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x37a0cba, "kfree" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xf04429b4, "acpi_bus_get_status_handle" },
	{ 0xc5850110, "printk" },
	{ 0xded6a415, "acpi_get_object_info" },
	{ 0x74754435, "acpi_bus_generate_netlink_event" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "724EDBD49B849B592138709");
