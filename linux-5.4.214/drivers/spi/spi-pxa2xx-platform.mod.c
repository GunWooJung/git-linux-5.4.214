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
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x6d00f69e, "pci_bus_type" },
	{ 0x815588a6, "clk_enable" },
	{ 0x127260fc, "gpiod_direction_output" },
	{ 0x30779a9, "spi_register_controller" },
	{ 0xfb4ec2db, "__pm_runtime_disable" },
	{ 0x18ed72f8, "__pm_runtime_use_autosuspend" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x51a3dae5, "pci_match_id" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x47229b5c, "gpio_request" },
	{ 0xf37d2c0b, "gpio_to_desc" },
	{ 0xdf8c695a, "__ndelay" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x1e57910a, "devm_ioremap_resource" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x8bdf333d, "__pm_runtime_resume" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x19af53eb, "__platform_driver_register" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xeee38cc9, "acpi_match_device" },
	{ 0xaed06536, "_dev_warn" },
	{ 0xf0a93916, "dma_request_slave_channel" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0x222c28da, "devm_gpiod_get_index" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x56d0a403, "spi_unregister_controller" },
	{ 0x6cac2f3b, "__devm_spi_alloc_controller" },
	{ 0xd072dc20, "platform_get_resource" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x9962bc44, "pm_runtime_enable" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xb98c9772, "__pm_runtime_set_status" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x8265cfb8, "__dma_request_channel" },
	{ 0x6164d63, "devm_clk_get" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x3ef3230a, "spi_finalize_current_transfer" },
	{ 0x2bf355c4, "devm_gpiod_get_optional" },
	{ 0xba497f13, "loops_per_jiffy" },
	{ 0x70ed50a, "dma_release_channel" },
	{ 0x37a0cba, "kfree" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x11c66087, "pm_runtime_set_autosuspend_delay" },
	{ 0xfef787f1, "gpiod_count" },
	{ 0x7af8c0f, "spi_controller_suspend" },
	{ 0x7e73a43b, "platform_get_irq" },
	{ 0xa99a62a3, "platform_driver_unregister" },
	{ 0xb71b7859, "spi_controller_resume" },
	{ 0xe23f1472, "gpiod_set_value" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0xe22cbce1, "gpiod_put" },
	{ 0x15cb5620, "is_acpi_device_node" },
	{ 0xc1514a3b, "free_irq" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("acpi*:INT33C0:*");
MODULE_ALIAS("acpi*:INT33C1:*");
MODULE_ALIAS("acpi*:INT3430:*");
MODULE_ALIAS("acpi*:INT3431:*");
MODULE_ALIAS("acpi*:80860F0E:*");
MODULE_ALIAS("acpi*:8086228E:*");
MODULE_ALIAS("of:N*T*Cmarvell,mmp2-ssp");
MODULE_ALIAS("of:N*T*Cmarvell,mmp2-sspC*");

MODULE_INFO(srcversion, "CF4CAF01AF9D77FA2927F60");
