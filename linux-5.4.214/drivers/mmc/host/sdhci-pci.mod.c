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
	{ 0x4af563a3, "cqhci_resume" },
	{ 0x30e73de8, "sdhci_enable_v4_mode" },
	{ 0x487ebde6, "sdhci_remove_host" },
	{ 0xd0bb4ec1, "pci_write_config_dword" },
	{ 0xf9a482f9, "msleep" },
	{ 0x4279f83, "sdhci_set_power" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0x339a5a9a, "pci_free_irq_vectors" },
	{ 0x2cbcc89, "mmc_detect_change" },
	{ 0x27dd129b, "pcim_enable_device" },
	{ 0x18ed72f8, "__pm_runtime_use_autosuspend" },
	{ 0x735e6a81, "acpi_evaluate_integer" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x37a24b11, "pci_read_config_byte" },
	{ 0x7c60d490, "__pm_runtime_suspend" },
	{ 0x4117e0fc, "pcim_iomap_table" },
	{ 0xd0412609, "sdhci_cqe_enable" },
	{ 0x66dd140b, "mmc_send_tuning" },
	{ 0xd7e53063, "sdhci_alloc_host" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x40b9dda7, "sdhci_resume_host" },
	{ 0xf37d2c0b, "gpio_to_desc" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x343af8d, "sdhci_cleanup_host" },
	{ 0x928d7386, "pci_write_config_byte" },
	{ 0xfb7bf9f8, "dev_pm_qos_hide_latency_tolerance" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xe8830b36, "debugfs_create_x32" },
	{ 0x8bdf333d, "__pm_runtime_resume" },
	{ 0xa453352, "pm_runtime_allow" },
	{ 0x5e02d939, "acpi_device_fix_up_power" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x6d253dca, "dmi_match" },
	{ 0x2b6f0008, "pm_runtime_forbid" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xdf25be12, "sdhci_add_host" },
	{ 0xafdaeb2c, "sdhci_free_host" },
	{ 0x276eb269, "cqhci_deactivate" },
	{ 0x27aed7b8, "devm_gpio_free" },
	{ 0xd2389618, "sdhci_execute_tuning" },
	{ 0xab8e0cbb, "sdhci_start_tuning" },
	{ 0x8338fd8, "pci_set_master" },
	{ 0xbf27fdc4, "pci_alloc_irq_vectors_affinity" },
	{ 0xaed06536, "_dev_warn" },
	{ 0xe0c73956, "sdhci_set_clock" },
	{ 0x921f329, "pci_restore_state" },
	{ 0x991e9f04, "sdhci_abort_tuning" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xc5850110, "printk" },
	{ 0xd83d8766, "sdhci_reset_tuning" },
	{ 0xd66fada1, "__sdhci_add_host" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x1cc0ff91, "sdhci_cqe_disable" },
	{ 0xf3e51392, "sdhci_dumpregs" },
	{ 0xa35e10d1, "gpiod_direction_input" },
	{ 0x4dfe6e84, "sdhci_setup_host" },
	{ 0xe66f8cb1, "gpiod_direction_output_raw" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x4fc0c5ca, "device_init_wakeup" },
	{ 0xd9996d5a, "device_wakeup_enable" },
	{ 0x608745f5, "sdhci_runtime_suspend_host" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xae5a04bb, "acpi_evaluate_dsm" },
	{ 0x9d766f4b, "pci_clear_master" },
	{ 0x5f130ba8, "pcim_iomap_regions" },
	{ 0xd42e1d5d, "sdhci_runtime_resume_host" },
	{ 0x4f587cb4, "pci_find_capability" },
	{ 0xf9301932, "device_wakeup_disable" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x4a7165c4, "sdhci_suspend_host" },
	{ 0x9a644698, "mmc_gpio_get_cd" },
	{ 0x7a88da87, "iosf_mbi_write" },
	{ 0xd111bb59, "_dev_info" },
	{ 0xcb15eee9, "sdhci_pci_get_data" },
	{ 0xacdeb71f, "device_property_read_u32_array" },
	{ 0x86c7272b, "iosf_mbi_read" },
	{ 0x12a38747, "usleep_range" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xd0c1e622, "pci_read_config_dword" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x8b95e7b, "pci_unregister_driver" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x88ee7386, "mmc_gpio_set_cd_wake" },
	{ 0x226f7074, "pci_irq_vector" },
	{ 0x74c790d2, "pci_set_power_state" },
	{ 0xd6cc0537, "sdhci_calc_clk" },
	{ 0x1bb76e14, "sdhci_reset" },
	{ 0x37a0cba, "kfree" },
	{ 0x4fe5cd42, "cqhci_irq" },
	{ 0x46fa96de, "sdhci_set_uhs_signaling" },
	{ 0xef3fd222, "gpiod_to_irq" },
	{ 0xf354855a, "__pci_register_driver" },
	{ 0xa207ea98, "pci_get_device" },
	{ 0x11c66087, "pm_runtime_set_autosuspend_delay" },
	{ 0x727b6403, "gpiod_set_raw_value_cansleep" },
	{ 0x8423aab5, "pci_dev_put" },
	{ 0x82fa8e, "dev_pm_qos_expose_latency_tolerance" },
	{ 0x5734faf4, "cqhci_init" },
	{ 0xae539c6e, "mmc_gpiod_request_cd" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0xdda54c2c, "devm_gpio_request" },
	{ 0x7fbe2548, "sdhci_start_signal_voltage_switch" },
	{ 0x2017ba83, "sdhci_cqe_irq" },
	{ 0xaf558486, "sdhci_send_tuning" },
	{ 0x15cb5620, "is_acpi_device_node" },
	{ 0x8076132, "sdhci_set_bus_width" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x200dc428, "pci_save_state" },
	{ 0x1dd5c642, "sdhci_end_tuning" },
};

MODULE_INFO(depends, "cqhci,sdhci");

MODULE_ALIAS("pci:v00001180d00000822sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001180d00000843sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001180d0000E822sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001180d0000E823sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001524d00000550sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001524d00000551sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001524d00000750sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001524d00000751sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00004101sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000197Bd00002381sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000197Bd00002382sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000197Bd00002391sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000197Bd00002392sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001148d00008000sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001106d000095D0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010ECd00005250sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000008A7sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000807sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000808sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000084Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000820sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000821sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000822sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000823sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000824sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00008809sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000880Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000F14sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000F15sv00001093sd00007884bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000F15sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000F16sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000F50sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002294sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002295sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002296sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000008F9sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000008FAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000008FBsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000008E5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000008E6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001190sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009D2Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009D2Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009D2Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000019DBsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000018DBsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000ACCsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000AD0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000ACAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001ACCsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001AD0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001ACAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00005ACCsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00005AD0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00005ACAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000031CCsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000031D0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000031CAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009DC4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009DF5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A375sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000034C4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000034F8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004B47sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004B48sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000002C4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000002F5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000006F5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004DC4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004DF8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000098C4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000098F8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000054C4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001217d00008120sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001217d00008220sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001217d00008221sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001217d00008320sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001217d00008321sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001217d00008520sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001217d00008420sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001217d00008421sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001217d00008620sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001217d00008621sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000016E6d00000670sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000016C3d0000C202sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000017A0d00009750sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000017A0d00009755sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001022d*sv*sd*bc08sc05i*");
MODULE_ALIAS("pci:v*d*sv*sd*bc08sc05i*");

MODULE_INFO(srcversion, "7BB84FE0DD1B53FE2A3D50D");
