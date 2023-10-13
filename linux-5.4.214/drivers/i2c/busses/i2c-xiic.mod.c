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
	{ 0x3eeb2322, "__wake_up" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xf9a482f9, "msleep" },
	{ 0x7c60d490, "__pm_runtime_suspend" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8bdf333d, "__pm_runtime_resume" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0xa1d6c8f1, "i2c_new_device" },
	{ 0x3656c243, "i2c_add_adapter" },
	{ 0x51765820, "devm_request_threaded_irq" },
	{ 0xb98c9772, "__pm_runtime_set_status" },
	{ 0x18ed72f8, "__pm_runtime_use_autosuspend" },
	{ 0x11c66087, "pm_runtime_set_autosuspend_delay" },
	{ 0x9962bc44, "pm_runtime_enable" },
	{ 0x6164d63, "devm_clk_get" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x7e73a43b, "platform_get_irq" },
	{ 0x1e57910a, "devm_ioremap_resource" },
	{ 0xd072dc20, "platform_get_resource" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x26f8f0b8, "iowrite16be" },
	{ 0x6a86bc1, "iowrite16" },
	{ 0xfb4ec2db, "__pm_runtime_disable" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x3afc0e60, "i2c_del_adapter" },
	{ 0xe419bc99, "iowrite32be" },
	{ 0x848d372e, "iowrite8" },
	{ 0xf10de535, "ioread8" },
	{ 0x4a453f53, "iowrite32" },
	{ 0xfdb9b629, "ioread32be" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0xe484e35f, "ioread32" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x815588a6, "clk_enable" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "FE788A6B1BEFFC0417D1C36");
