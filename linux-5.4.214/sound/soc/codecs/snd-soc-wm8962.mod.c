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
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xe56a9336, "snd_pcm_format_width" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x174e203e, "device_remove_file" },
	{ 0xf9a482f9, "msleep" },
	{ 0xe5b6e9e8, "__pm_runtime_idle" },
	{ 0xe54f5faf, "pm_runtime_force_suspend" },
	{ 0x47884890, "system_power_efficient_wq" },
	{ 0xeb711ae7, "snd_soc_params_to_bclk" },
	{ 0x815588a6, "clk_enable" },
	{ 0xfb4ec2db, "__pm_runtime_disable" },
	{ 0x37cfb285, "snd_soc_dapm_get_enum_double" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x3854774b, "kstrtoll" },
	{ 0xea124bd1, "gcd" },
	{ 0xa90a5211, "regmap_register_patch" },
	{ 0x875d03e0, "i2c_del_driver" },
	{ 0x7c127637, "snd_soc_dapm_get_volsw" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xc1889514, "regmap_update_bits_base" },
	{ 0x76af1d0e, "_dev_crit" },
	{ 0x6b6947f4, "regcache_cache_bypass" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xb2400ab0, "pm_runtime_force_resume" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x50ab54a2, "snd_soc_dapm_new_controls" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x8bdf333d, "__pm_runtime_resume" },
	{ 0x149bc626, "snd_soc_component_update_bits" },
	{ 0x4209bc59, "snd_soc_put_volsw" },
	{ 0x36f1a2b6, "regmap_read" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x6973328c, "snd_soc_get_volsw" },
	{ 0xf4b0582f, "gpiochip_remove" },
	{ 0x70e19381, "snd_soc_dapm_nc_pin" },
	{ 0x52ac9eed, "gpiochip_add_data_with_key" },
	{ 0xec688f13, "devm_regulator_bulk_get" },
	{ 0xeb94b6dd, "regulator_bulk_enable" },
	{ 0x7f00dd01, "snd_soc_info_enum_double" },
	{ 0x66c54ff1, "input_event" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xf13afacc, "snd_soc_dapm_add_routes" },
	{ 0xaed06536, "_dev_warn" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x68493967, "snd_soc_add_component_controls" },
	{ 0x2188c5a7, "snd_soc_dapm_disable_pin_unlocked" },
	{ 0xfee4d3c0, "snd_soc_bytes_info" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xc476bfb9, "snd_soc_dapm_put_volsw" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x787bfb4b, "gpiochip_get_data" },
	{ 0x32ed740, "snd_soc_info_volsw" },
	{ 0xb1a20db, "i2c_register_driver" },
	{ 0x5748356e, "device_create_file" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xd111bb59, "_dev_info" },
	{ 0xa71e1311, "snd_soc_get_enum_double" },
	{ 0x5bb6172e, "regulator_bulk_disable" },
	{ 0x9962bc44, "pm_runtime_enable" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb8b5aa45, "__devm_regmap_init_i2c" },
	{ 0x94a09154, "input_register_device" },
	{ 0x30c1302a, "pm_wakeup_dev_event" },
	{ 0x72d05e2a, "devm_regulator_register_notifier" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x3d160fb1, "devm_snd_soc_register_component" },
	{ 0xf9863ee8, "snd_soc_dapm_sync" },
	{ 0xf5361e58, "snd_soc_component_write" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x6164d63, "devm_clk_get" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0xddcaca64, "snd_soc_dapm_force_enable_pin_unlocked" },
	{ 0x8c41dd8e, "regcache_mark_dirty" },
	{ 0xdba17987, "snd_soc_put_enum_double" },
	{ 0xf30d78a0, "snd_soc_dapm_disable_pin" },
	{ 0x5f4e9bc4, "snd_soc_bytes_get" },
	{ 0xa4d5d350, "regcache_sync_region" },
	{ 0x2cc132c2, "devm_input_allocate_device" },
	{ 0x7a215233, "snd_soc_dapm_enable_pin" },
	{ 0x98ac0136, "snd_soc_bytes_put" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x4102c82b, "snd_soc_jack_report" },
	{ 0x29361773, "complete" },
	{ 0xe37f87b8, "snd_soc_component_read32" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x51765820, "devm_request_threaded_irq" },
	{ 0x904a8908, "regmap_write" },
	{ 0x532a4e22, "regcache_sync" },
	{ 0xc4f3acd9, "regcache_cache_only" },
	{ 0x8879827b, "snd_soc_dapm_put_enum_double" },
};

MODULE_INFO(depends, "snd-pcm,snd-soc-core");

MODULE_ALIAS("of:N*T*Cwlf,wm8962");
MODULE_ALIAS("of:N*T*Cwlf,wm8962C*");
MODULE_ALIAS("i2c:wm8962");

MODULE_INFO(srcversion, "D722A927974CDFD86A714F7");
