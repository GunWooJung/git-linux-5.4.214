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
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x7e73a43b, "platform_get_irq" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x983c8c67, "devm_hwmon_device_register_with_groups" },
	{ 0x15f68f5d, "devm_kasprintf" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x51765820, "devm_request_threaded_irq" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0xb352177e, "find_first_bit" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x36f1a2b6, "regmap_read" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xa1d6c8f1, "i2c_new_device" },
	{ 0x25730e51, "i2c_get_adapter" },
	{ 0x7cf7aeda, "devm_free_irq" },
	{ 0x904a8908, "regmap_write" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xb093a6fd, "i2c_put_adapter" },
	{ 0x2b55d71e, "i2c_unregister_device" },
	{ 0xaaf8f961, "kobject_uevent" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "F9027326400A350F0022FB5");
