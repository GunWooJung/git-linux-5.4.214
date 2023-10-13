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
	{ 0x2b708d10, "hid_unregister_driver" },
	{ 0xa99a62a3, "platform_driver_unregister" },
	{ 0xb27fe432, "__hid_register_driver" },
	{ 0x19af53eb, "__platform_driver_register" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x4fc0c5ca, "device_init_wakeup" },
	{ 0x907d14d, "blocking_notifier_chain_register" },
	{ 0x94a09154, "input_register_device" },
	{ 0x7ef2952e, "input_set_capability" },
	{ 0x2cc132c2, "devm_input_allocate_device" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x4ece3615, "blocking_notifier_chain_unregister" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x37a0cba, "kfree" },
	{ 0xef064b69, "cros_ec_cmd_xfer_status" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x30c1302a, "pm_wakeup_dev_event" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x66c54ff1, "input_event" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xaed06536, "_dev_warn" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x9b9a702f, "devm_led_classdev_register_ext" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0xc6c38eb0, "hid_hw_start" },
	{ 0x49bdb973, "hid_open_report" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "hid");

MODULE_ALIAS("hid:b0003g0001v000018D1p00005050");
MODULE_ALIAS("hid:b0003g0001v000018D1p00005057");
MODULE_ALIAS("hid:b0003g0001v000018D1p00005022");
MODULE_ALIAS("hid:b0003g0001v000018D1p0000503D");
MODULE_ALIAS("hid:b0003g0001v000018D1p0000503C");
MODULE_ALIAS("hid:b0003g0001v000018D1p00005044");
MODULE_ALIAS("hid:b0003g0001v000018D1p0000502B");
MODULE_ALIAS("hid:b0003g0001v000018D1p0000502D");
MODULE_ALIAS("hid:b0003g0001v000018D1p00005030");
MODULE_ALIAS("acpi*:GOOG000B:*");

MODULE_INFO(srcversion, "CB388251E1B00CDBD0EDE8A");
