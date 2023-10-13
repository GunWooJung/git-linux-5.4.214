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
	{ 0xdc3e4f72, "uart_unregister_driver" },
	{ 0xa99a62a3, "platform_driver_unregister" },
	{ 0x19af53eb, "__platform_driver_register" },
	{ 0x374eae6e, "__tty_insert_flip_char" },
	{ 0xcb763749, "tty_flip_buffer_push" },
	{ 0x8bdf333d, "__pm_runtime_resume" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x6fca3e42, "uart_register_driver" },
	{ 0x7c60d490, "__pm_runtime_suspend" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x6c798fbc, "uart_add_one_port" },
	{ 0x9962bc44, "pm_runtime_enable" },
	{ 0x11c66087, "pm_runtime_set_autosuspend_delay" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x6164d63, "devm_clk_get" },
	{ 0x7e73a43b, "platform_get_irq" },
	{ 0xd072dc20, "platform_get_resource" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xb7a0d56a, "uart_write_wakeup" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xb1fcb4ff, "uart_update_timeout" },
	{ 0xb3a8c206, "uart_get_baud_rate" },
	{ 0xedc03953, "iounmap" },
	{ 0x1035c7c2, "__release_region" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x85bd1608, "__request_region" },
	{ 0x77358855, "iomem_resource" },
	{ 0x18ed72f8, "__pm_runtime_use_autosuspend" },
	{ 0xb98c9772, "__pm_runtime_set_status" },
	{ 0xfb4ec2db, "__pm_runtime_disable" },
	{ 0x174e8e65, "uart_remove_one_port" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0x94625ee8, "uart_suspend_port" },
	{ 0xa6626805, "uart_resume_port" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x815588a6, "clk_enable" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xfdb9b629, "ioread32be" },
	{ 0xe419bc99, "iowrite32be" },
	{ 0xe484e35f, "ioread32" },
	{ 0x4a453f53, "iowrite32" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "F23AD7BA9F052C6F6A40625");
