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
	{ 0x68a41536, "param_ops_bool" },
	{ 0x8ce08cc0, "single_release" },
	{ 0x21ba44a5, "seq_read" },
	{ 0xda2b5d09, "seq_lseek" },
	{ 0x5b1c5c13, "debugfs_remove_recursive" },
	{ 0x7681946c, "unregister_pm_notifier" },
	{ 0xa82f8d7f, "sysfs_remove_group" },
	{ 0x472afdf9, "backlight_device_unregister" },
	{ 0x9cc4f70a, "register_pm_notifier" },
	{ 0xd0a46a6a, "debugfs_create_file" },
	{ 0xef80c44, "debugfs_create_blob" },
	{ 0x98d5d311, "debugfs_create_u8" },
	{ 0x57d403e2, "debugfs_create_u32" },
	{ 0xe8febb33, "debugfs_create_u16" },
	{ 0x7f3966fa, "debugfs_create_dir" },
	{ 0xb372d8f7, "led_classdev_register_ext" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xdf8165bf, "backlight_device_register" },
	{ 0xc2107c52, "sysfs_create_group" },
	{ 0x37a0cba, "kfree" },
	{ 0x74e831b6, "platform_device_unregister" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x11089ac7, "_ctype" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x56cf6cd9, "platform_device_register_full" },
	{ 0x6de7f7ff, "acpi_video_get_backlight_type" },
	{ 0xe92ca535, "acpi_video_set_dmi_backlight_type" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xd4835ef8, "dmi_check_system" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xa0f493d9, "efi" },
	{ 0x58f84c2d, "seq_printf" },
	{ 0x8a490c90, "rfkill_set_sw_state" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xedc03953, "iounmap" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x96b29254, "strncasecmp" },
	{ 0x754d539c, "strlen" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xc5850110, "printk" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x83eb21c, "rfkill_unregister" },
	{ 0x7ee415d5, "single_open" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x6b2998d4, "led_classdev_unregister" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xdb68bbad, "rfkill_destroy" },
	{ 0xff282521, "rfkill_register" },
	{ 0xaad6d92f, "rfkill_init_sw_state" },
	{ 0xe5b440f1, "rfkill_alloc" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "video");

MODULE_ALIAS("dmi*:svn*SAMSUNGELECTRONICSCO.,LTD.*:ct*8*:");
MODULE_ALIAS("dmi*:svn*SAMSUNGELECTRONICSCO.,LTD.*:ct*9*:");
MODULE_ALIAS("dmi*:svn*SAMSUNGELECTRONICSCO.,LTD.*:ct*10*:");
MODULE_ALIAS("dmi*:svn*SAMSUNGELECTRONICSCO.,LTD.*:ct*14*:");
MODULE_ALIAS("dmi*:svn*SAMSUNGELECTRONICSCO.,LTD.*:pn*R40/R41*:rn*R40/R41*:");
MODULE_ALIAS("dmi*:svn*SAMSUNGELECTRONICSCO.,LTD.*:pn*N150P*:rn*N150P*:");
MODULE_ALIAS("dmi*:svn*SAMSUNGELECTRONICSCO.,LTD.*:pn*N145P/N250P/N260P*:rn*N145P/N250P/N260P*:");
MODULE_ALIAS("dmi*:svn*SAMSUNGELECTRONICSCO.,LTD.*:pn*N150/N210/N220*:rn*N150/N210/N220*:");
MODULE_ALIAS("dmi*:svn*SAMSUNGELECTRONICSCO.,LTD.*:pn*NF110/NF210/NF310*:rn*NF110/NF210/NF310*:");
MODULE_ALIAS("dmi*:svn*SAMSUNGELECTRONICSCO.,LTD.*:pn*X360*:rn*X360*:");
MODULE_ALIAS("dmi*:svn*SAMSUNGELECTRONICSCO.,LTD.*:pn*N250P*:rn*N250P*:");
MODULE_ALIAS("dmi*:svn*SAMSUNGELECTRONICSCO.,LTD.*:pn*NC210/NC110*:rn*NC210/NC110*:");
MODULE_ALIAS("dmi*:svn*SAMSUNGELECTRONICSCO.,LTD.*:pn*730U3E/740U3E*:");
MODULE_ALIAS("dmi*:svn*SAMSUNGELECTRONICSCO.,LTD.*:pn*300V3Z/300V4Z/300V5Z*:");

MODULE_INFO(srcversion, "C694A32E3BE203AA30FDAF3");
