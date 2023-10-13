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
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xf9a482f9, "msleep" },
	{ 0xb4e2add, "cec_notifier_put" },
	{ 0x127260fc, "gpiod_direction_output" },
	{ 0xd5b2b0c3, "drm_hdmi_vendor_infoframe_from_display_mode" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x9c2fdbd4, "component_add" },
	{ 0x875d03e0, "i2c_del_driver" },
	{ 0x245db7c2, "drm_atomic_helper_connector_reset" },
	{ 0xb02f5088, "drm_bridge_attach" },
	{ 0xb35586ed, "i2c_transfer" },
	{ 0x648d26a3, "drm_hdmi_avi_infoframe_quant_range" },
	{ 0x1f781d68, "drm_default_rgb_quant_range" },
	{ 0x42b6a7c2, "drm_helper_probe_single_connector_modes" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x609b2853, "hdmi_infoframe_pack" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x7634b843, "drm_kms_helper_hotplug_event" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x56cf6cd9, "platform_device_register_full" },
	{ 0x52e0db4b, "drm_encoder_init" },
	{ 0x90677a7d, "cec_notifier_set_phys_addr_from_edid" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x60373db5, "drm_detect_monitor_audio" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xf7ac2a86, "drm_connector_cleanup" },
	{ 0x72fd5740, "drm_do_get_edid" },
	{ 0xc21d3207, "drm_atomic_helper_connector_duplicate_state" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x9ae7dda8, "drm_connector_update_edid_property" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xaed06536, "_dev_warn" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xa35e10d1, "gpiod_direction_input" },
	{ 0xb662a539, "irq_get_irq_data" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x4c2cd0cc, "drm_add_edid_modes" },
	{ 0x74e831b6, "platform_device_unregister" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x2b55d71e, "i2c_unregister_device" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x83598232, "drm_connector_init" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xb1a20db, "i2c_register_driver" },
	{ 0xd111bb59, "_dev_info" },
	{ 0xb71a4554, "drm_atomic_helper_connector_destroy_state" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1000e51, "schedule" },
	{ 0xff4f8ad5, "cec_notifier_get_conn" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x4d14b2c8, "drm_connector_attach_encoder" },
	{ 0x5c6e7a88, "drm_bridge_remove" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x2538dd86, "drm_encoder_cleanup" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x4fc58c0c, "i2c_transfer_buffer_flags" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x37a0cba, "kfree" },
	{ 0xb6605c5e, "drm_hdmi_avi_infoframe_from_display_mode" },
	{ 0x2bed3a52, "component_del" },
	{ 0xa01fbb6b, "cec_notifier_set_phys_addr" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x34a4640a, "drm_dbg" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xe23f1472, "gpiod_set_value" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0xa1d6c8f1, "i2c_new_device" },
	{ 0x6264cd69, "drm_bridge_add" },
	{ 0xe22cbce1, "gpiod_put" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x251e6613, "gpiod_get" },
};

MODULE_INFO(depends, "drm,drm_kms_helper");

MODULE_ALIAS("i2c:tda998x");

MODULE_INFO(srcversion, "A000EDDB944F503BB944AED");
