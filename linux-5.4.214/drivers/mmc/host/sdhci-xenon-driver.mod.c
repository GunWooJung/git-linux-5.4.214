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
	{ 0x487ebde6, "sdhci_remove_host" },
	{ 0xe54f5faf, "pm_runtime_force_suspend" },
	{ 0x815588a6, "clk_enable" },
	{ 0xfb4ec2db, "__pm_runtime_disable" },
	{ 0x18ed72f8, "__pm_runtime_use_autosuspend" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x81188c30, "match_string" },
	{ 0x7c60d490, "__pm_runtime_suspend" },
	{ 0x3c63b286, "sdhci_pltfm_init" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xfbb04d31, "sdhci_set_power_noreg" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xb2400ab0, "pm_runtime_force_resume" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x987c0d, "sdhci_enable_sdio_irq" },
	{ 0x8bdf333d, "__pm_runtime_resume" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xa72adc36, "mmc_of_parse" },
	{ 0x32802eb3, "sdhci_pltfm_clk_get_max_clock" },
	{ 0xdf25be12, "sdhci_add_host" },
	{ 0x19af53eb, "__platform_driver_register" },
	{ 0xd2389618, "sdhci_execute_tuning" },
	{ 0xaed06536, "_dev_warn" },
	{ 0xe0c73956, "sdhci_set_clock" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0xbf46d014, "sdhci_get_property" },
	{ 0x881e0743, "sdhci_set_ios" },
	{ 0x608745f5, "sdhci_runtime_suspend_host" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xd42e1d5d, "sdhci_runtime_resume_host" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x12a38747, "usleep_range" },
	{ 0x9962bc44, "pm_runtime_enable" },
	{ 0xe7f5d7e4, "mmc_regulator_set_ocr" },
	{ 0x5a30b386, "sdhci_pltfm_free" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xb98c9772, "__pm_runtime_set_status" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x6164d63, "devm_clk_get" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x1bb76e14, "sdhci_reset" },
	{ 0x11c66087, "pm_runtime_set_autosuspend_delay" },
	{ 0xa99a62a3, "platform_driver_unregister" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x7fbe2548, "sdhci_start_signal_voltage_switch" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0x8076132, "sdhci_set_bus_width" },
};

MODULE_INFO(depends, "sdhci,sdhci-pltfm");

MODULE_ALIAS("of:N*T*Cmarvell,armada-ap806-sdhci");
MODULE_ALIAS("of:N*T*Cmarvell,armada-ap806-sdhciC*");
MODULE_ALIAS("of:N*T*Cmarvell,armada-cp110-sdhci");
MODULE_ALIAS("of:N*T*Cmarvell,armada-cp110-sdhciC*");
MODULE_ALIAS("of:N*T*Cmarvell,armada-3700-sdhci");
MODULE_ALIAS("of:N*T*Cmarvell,armada-3700-sdhciC*");

MODULE_INFO(srcversion, "CE97268378968250A96AAEB");
