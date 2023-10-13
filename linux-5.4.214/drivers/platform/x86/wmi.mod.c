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
	{ 0xdc274b8f, "bus_register" },
	{ 0xfc4152fc, "ec_read" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x34d3b8d1, "driver_register" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0x1c58427f, "acpi_remove_notify_handler" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x170ddf79, "acpi_install_notify_handler" },
	{ 0xdbcf041a, "acpi_install_address_space_handler" },
	{ 0x92e26bf, "acpi_remove_address_space_handler" },
	{ 0x14e23ddd, "device_destroy" },
	{ 0xd92deb6b, "acpi_evaluate_object" },
	{ 0xded6a415, "acpi_get_object_info" },
	{ 0xb89b6e6b, "guid_parse" },
	{ 0x68a41536, "param_ops_bool" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x19af53eb, "__platform_driver_register" },
	{ 0xebb33591, "nonseekable_open" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xfb384d37, "kasprintf" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x4b2e0ffe, "misc_register" },
	{ 0xaed06536, "_dev_warn" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xa191fd37, "class_unregister" },
	{ 0x86f434e2, "driver_unregister" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xb4043948, "acpi_execute_simple_method" },
	{ 0x1a45cb6c, "acpi_disabled" },
	{ 0xd267dbfb, "device_create" },
	{ 0xce8b1878, "__x86_indirect_thunk_r14" },
	{ 0x5fe1c3f, "device_add" },
	{ 0x5fd264df, "__class_register" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xc94d2bd9, "bus_unregister" },
	{ 0x9975dc22, "acpi_get_handle" },
	{ 0xdf46d4f1, "module_put" },
	{ 0xa916b694, "strnlen" },
	{ 0x8e17faf3, "put_device" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x6d334118, "__get_user_8" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x74754435, "acpi_bus_generate_netlink_event" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x535449e7, "device_initialize" },
	{ 0x5a4e4713, "device_unregister" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xa99a62a3, "platform_driver_unregister" },
	{ 0xdb2d5c16, "dev_set_name" },
	{ 0xc708f1fe, "ec_write" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x35775925, "misc_deregister" },
	{ 0x15cb5620, "is_acpi_device_node" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x6d71399f, "try_module_get" },
	{ 0x719e0e44, "add_uevent_var" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("acpi*:PNP0C14:*");
MODULE_ALIAS("acpi*:pnp0c14:*");

MODULE_INFO(srcversion, "72FBC03E21A8513B5E04943");
