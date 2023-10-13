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
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x815588a6, "clk_enable" },
	{ 0xfb4ec2db, "__pm_runtime_disable" },
	{ 0x18ed72f8, "__pm_runtime_use_autosuspend" },
	{ 0x7c60d490, "__pm_runtime_suspend" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x1e57910a, "devm_ioremap_resource" },
	{ 0x4c1e9dcd, "slim_device_report_present" },
	{ 0x19af53eb, "__platform_driver_register" },
	{ 0x9682ac47, "slim_unregister_controller" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0x3801776b, "__ioread32_copy" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x9cf37c44, "__iowrite32_copy" },
	{ 0x15927c0, "slim_msg_response" },
	{ 0x12a38747, "usleep_range" },
	{ 0x9962bc44, "pm_runtime_enable" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xb98c9772, "__pm_runtime_set_status" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x6164d63, "devm_clk_get" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0x7a47b126, "platform_get_resource_byname" },
	{ 0xaa0845d1, "slim_register_controller" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x69acdf38, "memcpy" },
	{ 0x8281b36, "devm_ioremap" },
	{ 0x11c66087, "pm_runtime_set_autosuspend_delay" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x29361773, "complete" },
	{ 0x7e73a43b, "platform_get_irq" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0xc7829d0b, "slim_ctrl_clk_pause" },
	{ 0xa99a62a3, "platform_driver_unregister" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xc4780d49, "slim_do_transfer" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x51765820, "devm_request_threaded_irq" },
	{ 0xdf9208c0, "alloc_workqueue" },
};

MODULE_INFO(depends, "slimbus");


MODULE_INFO(srcversion, "ADD2ABD4330BFFD7D82222C");
