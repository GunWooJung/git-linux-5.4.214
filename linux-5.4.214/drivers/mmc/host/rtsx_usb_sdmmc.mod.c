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
	{ 0x286cd8ef, "rtsx_usb_write_ppbuf" },
	{ 0x2b8ab42, "sg_copy_to_buffer" },
	{ 0xdd54957a, "rtsx_usb_transfer_data" },
	{ 0x37a0cba, "kfree" },
	{ 0x905695ab, "sg_copy_from_buffer" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x16d2bddd, "rtsx_usb_ep0_read_register" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x2a4a7780, "rtsx_usb_switch_clock" },
	{ 0x12a38747, "usleep_range" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x86cf868b, "rtsx_usb_card_exclusive_check" },
	{ 0x2cbcc89, "mmc_detect_change" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x5bd0997a, "rtsx_usb_get_card_status" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x6d3954a4, "mmc_add_host" },
	{ 0xb372d8f7, "led_classdev_register_ext" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x9962bc44, "pm_runtime_enable" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x947fbbbc, "mmc_alloc_host" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x27cb27a5, "rtsx_usb_write_register" },
	{ 0xc5bc4520, "rtsx_usb_read_register" },
	{ 0x47958ee7, "rtsx_usb_read_ppbuf" },
	{ 0x1ce36352, "rtsx_usb_get_rsp" },
	{ 0xb75922ab, "rtsx_usb_send_cmd" },
	{ 0xe6d98e04, "rtsx_usb_add_cmd" },
	{ 0x7c60d490, "__pm_runtime_suspend" },
	{ 0xcb40ef0, "rtsx_usb_ep0_write_register" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0xfb4ec2db, "__pm_runtime_disable" },
	{ 0x8bd4fa4f, "mmc_free_host" },
	{ 0x6b2998d4, "led_classdev_unregister" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xb846722a, "mmc_remove_host" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x40ca826f, "mmc_request_done" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "rtsx_usb");

MODULE_ALIAS("platform:rtsx_usb_sdmmc");

MODULE_INFO(srcversion, "9FB7A9BF9EB028301A802C1");
