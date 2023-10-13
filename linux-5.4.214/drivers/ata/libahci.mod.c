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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xed93c0b3, "module_layout" },
	{ 0x672552d, "ata_dummy_port_ops" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xa8e8d29c, "ata_port_freeze" },
	{ 0xf9a482f9, "msleep" },
	{ 0xe5b6e9e8, "__pm_runtime_idle" },
	{ 0xf8f3a0fb, "ata_ratelimit" },
	{ 0x765395c3, "param_ops_int" },
	{ 0x2a0f8ca2, "dev_attr_sw_activity" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x64f3ac90, "ata_port_printk" },
	{ 0x2db64d39, "sata_pmp_error_handler" },
	{ 0x696b4c37, "sata_link_scr_lpm" },
	{ 0x6b86a4e2, "sata_pmp_qc_defer_cmd_switch" },
	{ 0x87b8798d, "sg_next" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x68a41536, "param_ops_bool" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x8bdf333d, "__pm_runtime_resume" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x33f57d5a, "ata_port_desc" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x31244e9a, "dev_attr_ncq_prio_enable" },
	{ 0x9c164ed6, "dev_attr_em_message" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x4fdc945d, "sata_deb_timing_normal" },
	{ 0xf2fe7dd, "sata_pmp_port_ops" },
	{ 0xb1d51891, "ata_ehi_push_desc" },
	{ 0xaed06536, "_dev_warn" },
	{ 0x1b3ad8a1, "ata_dev_set_feature" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x486e2fb3, "ata_dev_printk" },
	{ 0xe10ca535, "ata_wait_register" },
	{ 0xe8ed0bc8, "ata_std_qc_defer" },
	{ 0xf182e64b, "ata_host_start" },
	{ 0xbb1eacb3, "ata_link_abort" },
	{ 0xc8f68925, "dev_attr_unload_heads" },
	{ 0x668f1837, "ata_msleep" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xcccfb2fa, "sata_deb_timing_hotplug" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xca944cd, "devm_kfree" },
	{ 0x663b8498, "ata_ehi_clear_desc" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x76593689, "sata_link_hardreset" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x5ec62549, "ata_dev_classify" },
	{ 0x56ce6cd8, "ata_host_activate" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7646cee, "ata_tf_to_fis" },
	{ 0xc1751eb7, "ata_host_register" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xe9078949, "dev_attr_em_message_type" },
	{ 0x924b81d3, "sata_lpm_ignore_phy_events" },
	{ 0xecadd7c7, "dev_driver_string" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x40a69247, "ata_link_printk" },
	{ 0xd00e54e9, "ata_wait_after_reset" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x71d267b6, "ata_qc_complete_multiple" },
	{ 0x6910d253, "ata_link_next" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x69acdf38, "memcpy" },
	{ 0x9384cd49, "ata_tf_from_fis" },
	{ 0x6128b5fc, "__printk_ratelimit" },
	{ 0x2f90d71d, "ata_std_postreset" },
	{ 0x9ed02ae3, "dmam_alloc_attrs" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xc43da649, "dev_attr_link_power_management_policy" },
	{ 0xe0a55c86, "ata_port_abort" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x51765820, "devm_request_threaded_irq" },
	{ 0x20ad258, "sata_async_notification" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "B5DF0D8392F122B6FD0AF54");
