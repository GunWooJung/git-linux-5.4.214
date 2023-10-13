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
	{ 0xe60548f0, "__cpuhp_remove_state" },
	{ 0xa99a62a3, "platform_driver_unregister" },
	{ 0x7c941d6, "__cpuhp_setup_state" },
	{ 0x19af53eb, "__platform_driver_register" },
	{ 0x8303ac5, "x86_match_cpu" },
	{ 0xc5850110, "printk" },
	{ 0xaf465642, "platform_device_put" },
	{ 0xf14ea0e9, "platform_device_add" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xd73c36a2, "platform_device_alloc" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x2f9e7f8e, "vid_which_vrm" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xd1c6a314, "hwmon_device_register" },
	{ 0x5748356e, "device_create_file" },
	{ 0xc2107c52, "sysfs_create_group" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0xee86bd09, "cpu_info" },
	{ 0x446615bd, "vid_from_reg" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xf80be44e, "rdmsr_safe_on_cpu" },
	{ 0x174e203e, "device_remove_file" },
	{ 0xa82f8d7f, "sysfs_remove_group" },
	{ 0xd3f5b56e, "hwmon_device_unregister" },
	{ 0x37a0cba, "kfree" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x74e831b6, "platform_device_unregister" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "hwmon-vid");

MODULE_ALIAS("cpu:type:x86,ven0005fam0006mod000A:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0005fam0006mod000D:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0005fam0006mod000F:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0005fam0007mod*:feature:*");

MODULE_INFO(srcversion, "C27DC61C8BA39765B93B519");
