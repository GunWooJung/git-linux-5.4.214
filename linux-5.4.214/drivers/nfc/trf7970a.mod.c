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
	{ 0x86f434e2, "driver_unregister" },
	{ 0xf6dd8fef, "__spi_register_driver" },
	{ 0xf89bc02c, "skb_put" },
	{ 0xf8e4e17a, "skb_copy_expand" },
	{ 0xd57c62a1, "nfc_alloc_recv_skb" },
	{ 0x8bdf333d, "__pm_runtime_resume" },
	{ 0xd111bb59, "_dev_info" },
	{ 0xdc58687b, "nfc_digital_register_device" },
	{ 0x18ed72f8, "__pm_runtime_use_autosuspend" },
	{ 0x11c66087, "pm_runtime_set_autosuspend_delay" },
	{ 0xd186e8e7, "nfc_digital_allocate_device" },
	{ 0x4853215d, "regulator_get_voltage" },
	{ 0x868b9359, "devm_regulator_get" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x51765820, "devm_request_threaded_irq" },
	{ 0xc59ed4bd, "devm_gpiod_get_index_optional" },
	{ 0x222c28da, "devm_gpiod_get_index" },
	{ 0xe21d630c, "spi_setup" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x8a01b120, "nfc_digital_free_device" },
	{ 0xd3b8ced, "nfc_digital_unregister_device" },
	{ 0xfb4ec2db, "__pm_runtime_disable" },
	{ 0x7c60d490, "__pm_runtime_suspend" },
	{ 0x9962bc44, "pm_runtime_enable" },
	{ 0xb98c9772, "__pm_runtime_set_status" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xbed6138e, "skb_pull" },
	{ 0x586583b8, "spi_sync" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0xd8e6cdd2, "kfree_skb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xa6a40b7a, "__dev_kfree_skb_any" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x391fccd6, "spi_write_then_read" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x1643a127, "regulator_disable" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xc4fb10cd, "gpiod_set_value_cansleep" },
	{ 0x12a38747, "usleep_range" },
	{ 0xfe543c51, "regulator_enable" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "nfc,nfc_digital");

MODULE_ALIAS("spi:trf7970a");
MODULE_ALIAS("of:N*T*Cti,trf7970a");
MODULE_ALIAS("of:N*T*Cti,trf7970aC*");

MODULE_INFO(srcversion, "1D42F87F197EEB48234EE3E");
