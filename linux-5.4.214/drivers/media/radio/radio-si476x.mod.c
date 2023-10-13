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
	{ 0x92d40b1d, "video_ioctl2" },
	{ 0xe21f5ff5, "v4l2_event_unsubscribe" },
	{ 0x443b047d, "v4l2_ctrl_subscribe_event" },
	{ 0xb087e664, "video_device_release_empty" },
	{ 0x32ee9868, "simple_open" },
	{ 0xc2448345, "default_llseek" },
	{ 0xd47ed2b, "si476x_core_cmd_agc_status" },
	{ 0x212e4f97, "si476x_core_cmd_fm_acf_status" },
	{ 0xea62f443, "si476x_core_cmd_fm_phase_div_status" },
	{ 0xee9726b, "si476x_core_cmd_fm_rds_blockcount" },
	{ 0x41ebdc6d, "si476x_core_cmd_fm_rsq_status" },
	{ 0x19ee7fd2, "si476x_core_cmd_fm_seek_start" },
	{ 0x5bba8f1d, "si476x_core_cmd_fm_tune_freq" },
	{ 0xa868e9cf, "si476x_core_cmd_am_acf_status" },
	{ 0x3c769615, "si476x_core_cmd_am_rsq_status" },
	{ 0xf2bfc63c, "si476x_core_cmd_am_seek_start" },
	{ 0x688053c1, "si476x_core_cmd_am_tune_freq" },
	{ 0xa99a62a3, "platform_driver_unregister" },
	{ 0x19af53eb, "__platform_driver_register" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0xd0a46a6a, "debugfs_create_file" },
	{ 0x7f3966fa, "debugfs_create_dir" },
	{ 0xa6bdc59e, "__video_register_device" },
	{ 0x74539d3e, "v4l2_ctrl_new_std" },
	{ 0x54e64078, "v4l2_ctrl_new_std_menu" },
	{ 0x43ced180, "v4l2_ctrl_handler_init_class" },
	{ 0xb898d39, "v4l2_device_register" },
	{ 0xd6077178, "v4l2_device_set_name" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x5f25279b, "v4l2_ctrl_new_custom" },
	{ 0xfad44aac, "v4l2_ctrl_handler_setup" },
	{ 0xcfec4305, "v4l2_fh_open" },
	{ 0x9b6613d6, "si476x_core_is_a_primary_tuner" },
	{ 0x69044b9a, "si476x_core_is_a_secondary_tuner" },
	{ 0x36f1a2b6, "regmap_read" },
	{ 0x58e78f91, "si476x_core_has_am" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xc4f3acd9, "regcache_cache_only" },
	{ 0xc1889514, "regmap_update_bits_base" },
	{ 0x8379527c, "si476x_core_cmd_fm_rds_status" },
	{ 0x72450e62, "si476x_core_is_in_am_receiver_mode" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x904a8908, "regmap_write" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xaed06536, "_dev_warn" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x1000e51, "schedule" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x4578f528, "__kfifo_to_user" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xbb6b99bc, "v4l2_ctrl_poll" },
	{ 0xd1a6dd8c, "si476x_core_set_power_state" },
	{ 0xacaf737c, "v4l2_fh_release" },
	{ 0x3530ac2, "v4l2_fh_is_singular" },
	{ 0x4eecb342, "si476x_core_start" },
	{ 0xe79794fa, "si476x_core_stop" },
	{ 0x2e9c93df, "si476x_core_cmd_fm_phase_diversity" },
	{ 0x53ca073e, "si476x_core_has_diversity" },
	{ 0x56470118, "__warn_printk" },
	{ 0xa4d5d350, "regcache_sync_region" },
	{ 0x5b1c5c13, "debugfs_remove_recursive" },
	{ 0x28a89cfd, "v4l2_device_unregister" },
	{ 0x2bd4d994, "video_unregister_device" },
	{ 0x75a26f52, "v4l2_ctrl_handler_free" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xdd64e639, "strscpy" },
	{ 0x5cde1a19, "video_devdata" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "videodev,si476x-core");


MODULE_INFO(srcversion, "5640999F8DB1B7D164E8CB2");
