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
	{ 0x12a38747, "usleep_range" },
	{ 0x2a4a7780, "rtsx_usb_switch_clock" },
	{ 0xdd54957a, "rtsx_usb_transfer_data" },
	{ 0x86cf868b, "rtsx_usb_card_exclusive_check" },
	{ 0xcb40ef0, "rtsx_usb_ep0_write_register" },
	{ 0x16d2bddd, "rtsx_usb_ep0_read_register" },
	{ 0x1ce36352, "rtsx_usb_get_rsp" },
	{ 0xb75922ab, "rtsx_usb_send_cmd" },
	{ 0xe6d98e04, "rtsx_usb_add_cmd" },
	{ 0xcd4f9fbb, "memstick_add_host" },
	{ 0x9962bc44, "pm_runtime_enable" },
	{ 0xb98c9772, "__pm_runtime_set_status" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x79ccebe5, "memstick_alloc_host" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x27cb27a5, "rtsx_usb_write_register" },
	{ 0xc5bc4520, "rtsx_usb_read_register" },
	{ 0x8bdf333d, "__pm_runtime_resume" },
	{ 0x4eb75b00, "memstick_detect_change" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0xf77a6fdd, "memstick_free_host" },
	{ 0xbf2005c7, "memstick_remove_host" },
	{ 0xfb4ec2db, "__pm_runtime_disable" },
	{ 0xe5b6e9e8, "__pm_runtime_idle" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xa92287e6, "memstick_next_req" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x4c4f5f5c, "memstick_suspend_host" },
	{ 0xc01efa8a, "memstick_resume_host" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "rtsx_usb,memstick");

MODULE_ALIAS("platform:rtsx_usb_ms");

MODULE_INFO(srcversion, "EDCB765630E723C67EC3ED4");
