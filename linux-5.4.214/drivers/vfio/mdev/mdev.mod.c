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
	{ 0xe7750f8, "kobject_put" },
	{ 0x91d56fe1, "kset_create_and_add" },
	{ 0xdc274b8f, "bus_register" },
	{ 0x1a216676, "iommu_group_remove_device" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x34d3b8d1, "driver_register" },
	{ 0x53b954a2, "up_read" },
	{ 0x6b5fb61f, "iommu_group_add_device" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xffa827, "sysfs_create_files" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xb89b6e6b, "guid_parse" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2aad1fd8, "kobject_del" },
	{ 0x20b41469, "kobject_create_and_add" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0xaed06536, "_dev_warn" },
	{ 0xce2f01d5, "device_del" },
	{ 0xc5850110, "printk" },
	{ 0xfe9c1129, "class_compat_create_link" },
	{ 0xcccf7597, "kobject_init_and_add" },
	{ 0x4a53deab, "class_compat_remove_link" },
	{ 0x86f434e2, "driver_unregister" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x70f7f79, "sysfs_remove_link" },
	{ 0x5fe1c3f, "device_add" },
	{ 0xce807a25, "up_write" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x57bc19d2, "down_write" },
	{ 0xc94d2bd9, "bus_unregister" },
	{ 0x6e7943ec, "iommu_group_id" },
	{ 0x2b4d03e0, "kobject_uevent_env" },
	{ 0x9eacf8a5, "kstrndup" },
	{ 0xcfe9b0cc, "sysfs_create_link" },
	{ 0xd111bb59, "_dev_info" },
	{ 0xe173653a, "sysfs_remove_file_ns" },
	{ 0x8e17faf3, "put_device" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xecadd7c7, "dev_driver_string" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xc3ff38c2, "down_read_trylock" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x89485687, "iommu_group_put" },
	{ 0xe7a7a03f, "get_device" },
	{ 0x32c3cb4e, "class_compat_register" },
	{ 0xdbee0aaf, "sysfs_remove_files" },
	{ 0xfddb53c8, "device_for_each_child" },
	{ 0x5ae189e3, "kset_unregister" },
	{ 0x37a0cba, "kfree" },
	{ 0xd3a720f3, "sysfs_create_groups" },
	{ 0x8d22bb58, "iommu_group_alloc" },
	{ 0x535449e7, "device_initialize" },
	{ 0x58f308eb, "sysfs_remove_groups" },
	{ 0xe5883bd9, "class_compat_unregister" },
	{ 0xdb2d5c16, "dev_set_name" },
	{ 0x6dc65c0a, "sysfs_create_file_ns" },
	{ 0xa825e587, "device_remove_file_self" },
	{ 0x7b4da6ff, "__init_rwsem" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "FCEB6364FD2AA5C6050AADB");
