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
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x4eb75b00, "memstick_detect_change" },
	{ 0x9bfda43, "rtsx_pci_transfer_data" },
	{ 0x87deb4a5, "rtsx_pci_send_cmd_no_wait" },
	{ 0x8ff28e91, "rtsx_pci_start_run" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xf692ed97, "rtsx_pci_read_register" },
	{ 0xf9a482f9, "msleep" },
	{ 0x54d3baa3, "rtsx_pci_card_power_on" },
	{ 0xc9668c35, "rtsx_pci_card_pull_ctl_enable" },
	{ 0x42c3318f, "rtsx_pci_card_pull_ctl_disable" },
	{ 0xd30c3e73, "rtsx_pci_card_power_off" },
	{ 0x6655b793, "rtsx_pci_send_cmd" },
	{ 0x8cf21293, "rtsx_pci_add_cmd" },
	{ 0x16a92161, "rtsx_pci_switch_clock" },
	{ 0xb926360c, "rtsx_pci_write_register" },
	{ 0xea93e370, "rtsx_pci_card_exclusive_check" },
	{ 0xcd4f9fbb, "memstick_add_host" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x79ccebe5, "memstick_alloc_host" },
	{ 0xf77a6fdd, "memstick_free_host" },
	{ 0xbf2005c7, "memstick_remove_host" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xa92287e6, "memstick_next_req" },
	{ 0x5efddaaa, "rtsx_pci_complete_unfinished_transfer" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x4c4f5f5c, "memstick_suspend_host" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0xc01efa8a, "memstick_resume_host" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "memstick,rtsx_pci");

MODULE_ALIAS("platform:rtsx_pci_ms");

MODULE_INFO(srcversion, "B3E914813B70C28F08D4E99");
