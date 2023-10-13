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
	{ 0xa99a62a3, "platform_driver_unregister" },
	{ 0x19af53eb, "__platform_driver_register" },
	{ 0x94589e9e, "dma_direct_unmap_sg" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x6a9a5a6c, "dma_direct_map_sg" },
	{ 0x9fe59f14, "dma_ops" },
	{ 0x45885813, "pinctrl_select_state" },
	{ 0x492e4b4f, "mmc_regulator_set_vqmmc" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x6d3954a4, "mmc_add_host" },
	{ 0xf0a93916, "dma_request_slave_channel" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x51765820, "devm_request_threaded_irq" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x815588a6, "clk_enable" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x6164d63, "devm_clk_get" },
	{ 0x1e57910a, "devm_ioremap_resource" },
	{ 0xd072dc20, "platform_get_resource" },
	{ 0x2a456e25, "pinctrl_lookup_state" },
	{ 0x5850d525, "devm_pinctrl_get" },
	{ 0xa72adc36, "mmc_of_parse" },
	{ 0xe9b87cd3, "mmc_regulator_get_supply" },
	{ 0x947fbbbc, "mmc_alloc_host" },
	{ 0x2b7179da, "platform_get_irq_byname" },
	{ 0x2cbcc89, "mmc_detect_change" },
	{ 0xc5534d64, "ioread16" },
	{ 0xab37f21b, "wake_up_process" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x6a86bc1, "iowrite16" },
	{ 0xaed06536, "_dev_warn" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x12a38747, "usleep_range" },
	{ 0xe484e35f, "ioread32" },
	{ 0x87b8798d, "sg_next" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x40ca826f, "mmc_request_done" },
	{ 0x56470118, "__warn_printk" },
	{ 0x69acdf38, "memcpy" },
	{ 0xe7f5d7e4, "mmc_regulator_set_ocr" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x8bd4fa4f, "mmc_free_host" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xb846722a, "mmc_remove_host" },
	{ 0x70ed50a, "dma_release_channel" },
	{ 0x4a453f53, "iowrite32" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Crenesas,usdhi6rol0");
MODULE_ALIAS("of:N*T*Crenesas,usdhi6rol0C*");

MODULE_INFO(srcversion, "85FE2BC52E8B304AABAA86E");
