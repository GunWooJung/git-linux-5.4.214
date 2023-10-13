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
	{ 0xa317608d, "pnp_unregister_driver" },
	{ 0x5b641e8c, "pnp_register_driver" },
	{ 0x1344d7e6, "acpi_enable_gpe" },
	{ 0x5287be92, "vga_switcheroo_register_handler" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x367d4168, "bus_for_each_dev" },
	{ 0x6d00f69e, "pci_bus_type" },
	{ 0xcd8ce890, "acpi_format_exception" },
	{ 0x170ddf79, "acpi_install_notify_handler" },
	{ 0x735e6a81, "acpi_evaluate_integer" },
	{ 0x15cb5620, "is_acpi_device_node" },
	{ 0xdab0f892, "apple_bl_unregister" },
	{ 0xe92ca535, "acpi_video_set_dmi_backlight_type" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xdf8165bf, "backlight_device_register" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x85bd1608, "__request_region" },
	{ 0x20c79ab5, "pnp_get_resource" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x29361773, "complete" },
	{ 0xc5850110, "printk" },
	{ 0xa33c0eac, "wait_for_completion_interruptible_timeout" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x2c63e051, "apple_bl_register" },
	{ 0x8826c13b, "acpi_video_register" },
	{ 0x37a0cba, "kfree" },
	{ 0x1035c7c2, "__release_region" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0x472afdf9, "backlight_device_unregister" },
	{ 0x1c58427f, "acpi_remove_notify_handler" },
	{ 0xa4faf62a, "acpi_disable_gpe" },
	{ 0x8eaf2a5f, "vga_switcheroo_unregister_handler" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "apple_bl,video");

MODULE_ALIAS("pnp:dAPP000B*");
MODULE_ALIAS("acpi*:APP000B:*");

MODULE_INFO(srcversion, "F7A4BF540D78333189417F8");
