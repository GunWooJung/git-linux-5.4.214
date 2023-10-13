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
	{ 0xeb233a45, "__kmalloc" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x8b4b3ac8, "__wmi_driver_register" },
	{ 0x4ece3615, "blocking_notifier_chain_unregister" },
	{ 0xce40421c, "set_required_buffer_size" },
	{ 0xa82f8d7f, "sysfs_remove_group" },
	{ 0x8eef8246, "dell_wmi_get_hotfix" },
	{ 0x19af53eb, "__platform_driver_register" },
	{ 0x9f295ff6, "wmi_driver_unregister" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xfb384d37, "kasprintf" },
	{ 0x7c983a5d, "dmi_walk" },
	{ 0xaed06536, "_dev_warn" },
	{ 0xfb578fc5, "memset" },
	{ 0xc5850110, "printk" },
	{ 0xc2107c52, "sysfs_create_group" },
	{ 0x6add5c9a, "dmi_find_device" },
	{ 0xe34d9651, "platform_device_del" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xd73c36a2, "platform_device_alloc" },
	{ 0xf14ea0e9, "platform_device_add" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xd9aac258, "wmidev_evaluate_method" },
	{ 0x74e831b6, "platform_device_unregister" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xa3dcfa65, "dell_wmi_get_descriptor_valid" },
	{ 0xa75079d6, "dcdbas_smi_request" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xc6cbbc89, "capable" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x8e17faf3, "put_device" },
	{ 0x6a5cb5ee, "__get_free_pages" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x823eae06, "blocking_notifier_call_chain" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x907d14d, "blocking_notifier_chain_register" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0xe7a7a03f, "get_device" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x96848186, "scnprintf" },
	{ 0xa167d064, "dell_wmi_get_size" },
	{ 0xa99a62a3, "platform_driver_unregister" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0xc8dcc62a, "krealloc" },
	{ 0xaf465642, "platform_device_put" },
};

MODULE_INFO(depends, "wmi,dell-wmi-descriptor,dcdbas");

MODULE_ALIAS("wmi:A80593CE-A997-11DA-B012-B622A1EF5492");
MODULE_ALIAS("dmi*:svn*DellInc.*:ct*8*:");
MODULE_ALIAS("dmi*:svn*DellInc.*:ct*9*:");
MODULE_ALIAS("dmi*:svn*DellInc.*:ct*10*:");
MODULE_ALIAS("dmi*:svn*DellComputerCorporation*:ct*8*:");

MODULE_INFO(srcversion, "68BD19B0975D52B36D88C60");
