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
	{ 0x204c5067, "scsi_dev_info_add_list" },
	{ 0x7b40cb30, "transport_class_register" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x754d539c, "strlen" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xc7ba3d4e, "dev_printk" },
	{ 0x3c24bc86, "scsi_get_device_flags_keyed" },
	{ 0xbd5bb644, "scsi_target_resume" },
	{ 0x20000329, "simple_strtoul" },
	{ 0xdc93b34b, "anon_transport_class_register" },
	{ 0xeef16a02, "attribute_container_unregister" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x97bdfa60, "scsi_dev_info_remove_list" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xdb4450e7, "scsi_autopm_get_device" },
	{ 0xe8ed73e8, "scsi_device_quiesce" },
	{ 0xd6d0f7d4, "scsi_is_host_device" },
	{ 0xfb578fc5, "memset" },
	{ 0x46643670, "sysfs_chmod_file" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x17d0ff05, "__scsi_execute" },
	{ 0x5a921311, "strncmp" },
	{ 0x4007983b, "sdev_prefix_printk" },
	{ 0x690737c8, "attribute_container_register" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x1c2a4651, "transport_class_unregister" },
	{ 0x2d721cca, "sysfs_update_group" },
	{ 0x7b178afe, "unlock_system_sleep" },
	{ 0xebc9a09f, "lock_system_sleep" },
	{ 0x278c6f8a, "scsi_device_put" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x2733eaf7, "scsi_dev_info_list_add_keyed" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xed8da4e6, "scsi_device_set_state" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xfddb53c8, "device_for_each_child" },
	{ 0x37a0cba, "kfree" },
	{ 0x32b9a45a, "scsi_target_quiesce" },
	{ 0x78ddafb2, "scsi_is_target_device" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xbacd3b42, "scsi_device_get" },
	{ 0x30c88773, "scsi_autopm_put_device" },
	{ 0xf3ae612c, "anon_transport_class_unregister" },
	{ 0x2c42c58e, "scsi_is_sdev_device" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "DF85DE377092F32A8FF325C");
