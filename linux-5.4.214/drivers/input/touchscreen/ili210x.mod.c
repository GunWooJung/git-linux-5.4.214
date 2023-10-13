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
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xa94ccfc0, "input_mt_report_pointer_emulation" },
	{ 0x33e16627, "touchscreen_report_pos" },
	{ 0x90fade75, "input_mt_report_slot_state" },
	{ 0x66c54ff1, "input_event" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x4fc0c5ca, "device_init_wakeup" },
	{ 0x94a09154, "input_register_device" },
	{ 0xa1c2b6d1, "devm_device_add_group" },
	{ 0x51765820, "devm_request_threaded_irq" },
	{ 0xc32e9ece, "input_mt_init_slots" },
	{ 0x6a0ea99a, "touchscreen_parse_properties" },
	{ 0xd4419732, "input_set_abs_params" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x2cc132c2, "devm_input_allocate_device" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x33560c9e, "devm_add_action" },
	{ 0x2bf355c4, "devm_gpiod_get_optional" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x12a38747, "usleep_range" },
	{ 0xb35586ed, "i2c_transfer" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x4fc58c0c, "i2c_transfer_buffer_flags" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xc4fb10cd, "gpiod_set_value_cansleep" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cilitek,ili210x");
MODULE_ALIAS("of:N*T*Cilitek,ili210xC*");
MODULE_ALIAS("of:N*T*Cilitek,ili251x");
MODULE_ALIAS("of:N*T*Cilitek,ili251xC*");
MODULE_ALIAS("i2c:ili210x");
MODULE_ALIAS("i2c:ili251x");

MODULE_INFO(srcversion, "8A13E8E4267D3A3D4616258");
