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
	{ 0xfc959f99, "mmc_gpio_get_ro" },
	{ 0xb2400ab0, "pm_runtime_force_resume" },
	{ 0xe54f5faf, "pm_runtime_force_suspend" },
	{ 0xa99a62a3, "platform_driver_unregister" },
	{ 0x19af53eb, "__platform_driver_register" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x66dd140b, "mmc_send_tuning" },
	{ 0x63150e06, "clk_get_parent" },
	{ 0xfe543c51, "regulator_enable" },
	{ 0x1643a127, "regulator_disable" },
	{ 0xe7f5d7e4, "mmc_regulator_set_ocr" },
	{ 0xd1eb244e, "mmc_can_gpio_cd" },
	{ 0x6d3954a4, "mmc_add_host" },
	{ 0x9962bc44, "pm_runtime_enable" },
	{ 0x18ed72f8, "__pm_runtime_use_autosuspend" },
	{ 0x11c66087, "pm_runtime_set_autosuspend_delay" },
	{ 0xb98c9772, "__pm_runtime_set_status" },
	{ 0x51765820, "devm_request_threaded_irq" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xfb578fc5, "memset" },
	{ 0x532b1a31, "dma_alloc_attrs" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x2a456e25, "pinctrl_lookup_state" },
	{ 0x5850d525, "devm_pinctrl_get" },
	{ 0x7e73a43b, "platform_get_irq" },
	{ 0x25ce0c78, "__devm_reset_control_get" },
	{ 0x6164d63, "devm_clk_get" },
	{ 0xe9b87cd3, "mmc_regulator_get_supply" },
	{ 0x1e57910a, "devm_ioremap_resource" },
	{ 0xd072dc20, "platform_get_resource" },
	{ 0xa72adc36, "mmc_of_parse" },
	{ 0x947fbbbc, "mmc_alloc_host" },
	{ 0x815588a6, "clk_enable" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x8bd4fa4f, "mmc_free_host" },
	{ 0x5c75775f, "dma_free_attrs" },
	{ 0xfb4ec2db, "__pm_runtime_disable" },
	{ 0xb846722a, "mmc_remove_host" },
	{ 0x8bdf333d, "__pm_runtime_resume" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x6a9a5a6c, "dma_direct_map_sg" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x2cbcc89, "mmc_detect_change" },
	{ 0xcb826449, "sdio_signal_irq" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x87b8798d, "sg_next" },
	{ 0xf74bb274, "mod_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x40ca826f, "mmc_request_done" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0x94589e9e, "dma_direct_unmap_sg" },
	{ 0x9fe59f14, "dma_ops" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xb2210d64, "reset_control_deassert" },
	{ 0x12a38747, "usleep_range" },
	{ 0x6c4b6684, "reset_control_assert" },
	{ 0x9a644698, "mmc_gpio_get_cd" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x45885813, "pinctrl_select_state" },
	{ 0x492e4b4f, "mmc_regulator_set_vqmmc" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cmediatek,mt8135-mmc");
MODULE_ALIAS("of:N*T*Cmediatek,mt8135-mmcC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt8173-mmc");
MODULE_ALIAS("of:N*T*Cmediatek,mt8173-mmcC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt8183-mmc");
MODULE_ALIAS("of:N*T*Cmediatek,mt8183-mmcC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt2701-mmc");
MODULE_ALIAS("of:N*T*Cmediatek,mt2701-mmcC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt2712-mmc");
MODULE_ALIAS("of:N*T*Cmediatek,mt2712-mmcC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt7622-mmc");
MODULE_ALIAS("of:N*T*Cmediatek,mt7622-mmcC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt8516-mmc");
MODULE_ALIAS("of:N*T*Cmediatek,mt8516-mmcC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt7620-mmc");
MODULE_ALIAS("of:N*T*Cmediatek,mt7620-mmcC*");

MODULE_INFO(srcversion, "497A6E3CF2A958358178F30");
