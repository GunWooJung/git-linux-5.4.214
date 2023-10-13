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
	{ 0x5128f95e, "class_find_device" },
	{ 0xdc274b8f, "bus_register" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x4a484c85, "device_connection_find_match" },
	{ 0x34d3b8d1, "driver_register" },
	{ 0x754d539c, "strlen" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x81188c30, "match_string" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xaaf8f961, "kobject_uevent" },
	{ 0x80a3f18, "device_match_name" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x4ece3615, "blocking_notifier_chain_unregister" },
	{ 0xc70a5bf2, "fwnode_property_present" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xaed06536, "_dev_warn" },
	{ 0x169938c1, "__sysfs_match_string" },
	{ 0x124bad4d, "kstrtobool" },
	{ 0xdeeb6e3e, "device_register" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xbf1a9899, "device_find_child" },
	{ 0xa191fd37, "class_unregister" },
	{ 0x86f434e2, "driver_unregister" },
	{ 0xffb7c514, "ida_free" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xd37bcef9, "fwnode_property_read_u16_array" },
	{ 0xce8b1878, "__x86_indirect_thunk_r14" },
	{ 0x70f7f79, "sysfs_remove_link" },
	{ 0x5fe1c3f, "device_add" },
	{ 0x5fd264df, "__class_register" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xc94d2bd9, "bus_unregister" },
	{ 0xcfe9b0cc, "sysfs_create_link" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xdf46d4f1, "module_put" },
	{ 0x8e17faf3, "put_device" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x823eae06, "blocking_notifier_call_chain" },
	{ 0x3cb9463b, "device_match_fwnode" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x3adba3e3, "sysfs_notify" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x907d14d, "blocking_notifier_chain_register" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0xe7a7a03f, "get_device" },
	{ 0x37a0cba, "kfree" },
	{ 0x535449e7, "device_initialize" },
	{ 0xd0865ac4, "dev_fwnode" },
	{ 0xb4b1a06b, "class_destroy" },
	{ 0x5a4e4713, "device_unregister" },
	{ 0x222e7ce2, "sysfs_streq" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xdb2d5c16, "dev_set_name" },
	{ 0x5328374d, "__class_create" },
	{ 0xa7d5f92e, "ida_destroy" },
	{ 0x7b4da6ff, "__init_rwsem" },
	{ 0x6d71399f, "try_module_get" },
	{ 0xe7a02573, "ida_alloc_range" },
	{ 0x719e0e44, "add_uevent_var" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "E942B01E28BC2AC4FB87D34");
