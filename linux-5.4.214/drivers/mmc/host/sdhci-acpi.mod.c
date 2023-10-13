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
	{ 0x46fa96de, "sdhci_set_uhs_signaling" },
	{ 0x8076132, "sdhci_set_bus_width" },
	{ 0xe0c73956, "sdhci_set_clock" },
	{ 0xa99a62a3, "platform_driver_unregister" },
	{ 0x19af53eb, "__platform_driver_register" },
	{ 0xfb4ec2db, "__pm_runtime_disable" },
	{ 0x8bdf333d, "__pm_runtime_resume" },
	{ 0x487ebde6, "sdhci_remove_host" },
	{ 0xaed06536, "_dev_warn" },
	{ 0x9962bc44, "pm_runtime_enable" },
	{ 0x18ed72f8, "__pm_runtime_use_autosuspend" },
	{ 0x11c66087, "pm_runtime_set_autosuspend_delay" },
	{ 0xb98c9772, "__pm_runtime_set_status" },
	{ 0x343af8d, "sdhci_cleanup_host" },
	{ 0x8423aab5, "pci_dev_put" },
	{ 0xa207ea98, "pci_get_device" },
	{ 0xafdaeb2c, "sdhci_free_host" },
	{ 0xd66fada1, "__sdhci_add_host" },
	{ 0x4dfe6e84, "sdhci_setup_host" },
	{ 0xae539c6e, "mmc_gpiod_request_cd" },
	{ 0x189a3237, "devm_ioremap_nocache" },
	{ 0xd7e53063, "sdhci_alloc_host" },
	{ 0xc7c073b7, "__devm_request_region" },
	{ 0x77358855, "iomem_resource" },
	{ 0xd072dc20, "platform_get_resource" },
	{ 0x28e09af1, "iosf_mbi_available" },
	{ 0x5e02d939, "acpi_device_fix_up_power" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x7fbe2548, "sdhci_start_signal_voltage_switch" },
	{ 0x37a0cba, "kfree" },
	{ 0xae5a04bb, "acpi_evaluate_dsm" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x881e0743, "sdhci_set_ios" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x9a644698, "mmc_gpio_get_cd" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x7e73a43b, "platform_get_irq" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x8b30e894, "acpi_device_hid" },
	{ 0x15cb5620, "is_acpi_device_node" },
	{ 0xfe31fa9, "__sdhci_read_caps" },
	{ 0x1bb76e14, "sdhci_reset" },
	{ 0x12a38747, "usleep_range" },
	{ 0xd2389618, "sdhci_execute_tuning" },
	{ 0x4a7165c4, "sdhci_suspend_host" },
	{ 0x40b9dda7, "sdhci_resume_host" },
	{ 0x608745f5, "sdhci_runtime_suspend_host" },
	{ 0xd42e1d5d, "sdhci_runtime_resume_host" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x7a88da87, "iosf_mbi_write" },
	{ 0x86c7272b, "iosf_mbi_read" },
	{ 0x8303ac5, "x86_match_cpu" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "sdhci");

MODULE_ALIAS("acpi*:80865ACA:*");
MODULE_ALIAS("acpi*:80865ACC:*");
MODULE_ALIAS("acpi*:80865AD0:*");
MODULE_ALIAS("acpi*:80860F14:*");
MODULE_ALIAS("acpi*:80860F16:*");
MODULE_ALIAS("acpi*:INT33BB:*");
MODULE_ALIAS("acpi*:INT33C6:*");
MODULE_ALIAS("acpi*:INT3436:*");
MODULE_ALIAS("acpi*:INT344D:*");
MODULE_ALIAS("acpi*:PNP0D40:*");
MODULE_ALIAS("acpi*:QCOM8051:*");
MODULE_ALIAS("acpi*:QCOM8052:*");
MODULE_ALIAS("acpi*:AMDI0040:*");

MODULE_INFO(srcversion, "CE6A50CD553E3E8034D8CF5");
