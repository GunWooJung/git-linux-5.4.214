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
	{ 0x875d03e0, "i2c_del_driver" },
	{ 0xb1a20db, "i2c_register_driver" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xfcec0987, "enable_irq" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x74bb02b4, "pm_stay_awake" },
	{ 0x84de408a, "pm_relax" },
	{ 0xf9a482f9, "msleep" },
	{ 0x9e379360, "gpiod_get_value_cansleep" },
	{ 0x8eef602, "input_mt_report_finger_count" },
	{ 0x54d0c27, "input_mt_sync_frame" },
	{ 0x90fade75, "input_mt_report_slot_state" },
	{ 0x66c54ff1, "input_event" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x30c1302a, "pm_wakeup_dev_event" },
	{ 0x222c28da, "devm_gpiod_get_index" },
	{ 0x94a09154, "input_register_device" },
	{ 0x8d40871c, "device_set_wakeup_capable" },
	{ 0x51765820, "devm_request_threaded_irq" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xc32e9ece, "input_mt_init_slots" },
	{ 0xd4419732, "input_set_abs_params" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x2cc132c2, "devm_input_allocate_device" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x33560c9e, "devm_add_action" },
	{ 0xfe543c51, "regulator_enable" },
	{ 0xf1a50cbd, "devm_regulator_get_optional" },
	{ 0x2bf355c4, "devm_gpiod_get_optional" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x1643a127, "regulator_disable" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc4fb10cd, "gpiod_set_value_cansleep" },
	{ 0x29361773, "complete" },
	{ 0xaed06536, "_dev_warn" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x4fc58c0c, "i2c_transfer_buffer_flags" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xf21017d9, "mutex_trylock" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("i2c:zforce-ts");

MODULE_INFO(srcversion, "DFD59CC08C0B9B433AF8B08");
