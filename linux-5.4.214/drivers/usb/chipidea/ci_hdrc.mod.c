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
	{ 0x3b57f4f2, "phy_init" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x948ea8a, "usb_gadget_unmap_request_by_dev" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xf9a482f9, "msleep" },
	{ 0xe5b6e9e8, "__pm_runtime_idle" },
	{ 0xbc2a14e3, "usb_gadget_map_request_by_dev" },
	{ 0x1d8b98ff, "usb_add_hcd" },
	{ 0x7f3966fa, "debugfs_create_dir" },
	{ 0xfb4ec2db, "__pm_runtime_disable" },
	{ 0x7ee415d5, "single_open" },
	{ 0xeb9a246, "devm_phy_get" },
	{ 0xc41263c7, "usb_ep_disable" },
	{ 0x6bfad17f, "usb_ep_enable" },
	{ 0xf28ad204, "usb_remove_hcd" },
	{ 0x18ed72f8, "__pm_runtime_use_autosuspend" },
	{ 0x754d539c, "strlen" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0x7c60d490, "__pm_runtime_suspend" },
	{ 0x1643a127, "regulator_disable" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x7802343, "usb_gadget_vbus_disconnect" },
	{ 0x8ce08cc0, "single_release" },
	{ 0x45885813, "pinctrl_select_state" },
	{ 0xe8043e99, "__usb_create_hcd" },
	{ 0xb3090fe7, "usb_del_gadget_udc" },
	{ 0xf0979a46, "usb_gadget_giveback_request" },
	{ 0x58f84c2d, "seq_printf" },
	{ 0x1e57910a, "devm_ioremap_resource" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x8bdf333d, "__pm_runtime_resume" },
	{ 0x40f79de7, "usb_ep_set_halt" },
	{ 0x25cf232a, "ehci_setup" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0xd0a46a6a, "debugfs_create_file" },
	{ 0xb5aa7165, "dma_pool_destroy" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xa0e62d4b, "usb_ep_alloc_request" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x624c8c1, "phy_set_mode_ext" },
	{ 0x5b1c5c13, "debugfs_remove_recursive" },
	{ 0xda50ad30, "ehci_handshake" },
	{ 0x21ba44a5, "seq_read" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0xc8be297e, "ulpi_unregister_interface" },
	{ 0x19af53eb, "__platform_driver_register" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xf4b1bd78, "usb_gadget_set_state" },
	{ 0xa9107ac8, "usb_put_hcd" },
	{ 0x42789434, "usb_role_switch_register" },
	{ 0x4cd53649, "phy_power_off" },
	{ 0x4f11e4e9, "pm_runtime_no_callbacks" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0x710ef7fc, "usb_gadget_unmap_request" },
	{ 0xed31ad46, "devm_extcon_register_notifier" },
	{ 0xaed06536, "_dev_warn" },
	{ 0xd0479f82, "ulpi_register_interface" },
	{ 0x981f5dd3, "usb_gadget_udc_reset" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xd73c36a2, "platform_device_alloc" },
	{ 0xffb7c514, "ida_free" },
	{ 0xe27a5479, "phy_power_on" },
	{ 0xf14ea0e9, "platform_device_add" },
	{ 0x5a921311, "strncmp" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xd072dc20, "platform_get_resource" },
	{ 0x74e831b6, "platform_device_unregister" },
	{ 0x2f7754a8, "dma_pool_free" },
	{ 0x63e14d80, "usb_ep_clear_halt" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0x2f8b92de, "platform_device_add_resources" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xd111bb59, "_dev_info" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x868b9359, "devm_regulator_get" },
	{ 0x6275bdb0, "phy_exit" },
	{ 0x5fb88a3, "devm_usb_get_phy" },
	{ 0x70cf032f, "usb_hcd_irq" },
	{ 0x12a38747, "usleep_range" },
	{ 0xe8d5e032, "ehci_hub_control" },
	{ 0x9962bc44, "pm_runtime_enable" },
	{ 0x3a2c5055, "usb_get_maximum_speed" },
	{ 0xe6e46e97, "usb_add_gadget_udc" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb98c9772, "__pm_runtime_set_status" },
	{ 0xf329853, "usb_udc_vbus_handler" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x4a2315f5, "usb_ep_set_maxpacket_limit" },
	{ 0x366ab9b2, "usb_get_dr_mode" },
	{ 0x678b96ec, "dma_pool_alloc" },
	{ 0x7dd35ee6, "platform_device_add_data" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xa36ea15e, "usb_ep_free_request" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x9b88a645, "ehci_init_driver" },
	{ 0x19a304ba, "usb_disabled" },
	{ 0x2882d40e, "usb_role_switch_unregister" },
	{ 0xda2b5d09, "seq_lseek" },
	{ 0xe26c5f5a, "usb_phy_set_charger_state" },
	{ 0xfcec0987, "enable_irq" },
	{ 0xf40cb154, "devm_usb_get_phy_by_phandle" },
	{ 0x37a0cba, "kfree" },
	{ 0x96848186, "scnprintf" },
	{ 0x11c66087, "pm_runtime_set_autosuspend_delay" },
	{ 0x88a10eda, "usb_phy_set_charger_current" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x7e73a43b, "platform_get_irq" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0xa99a62a3, "platform_driver_unregister" },
	{ 0x5591473d, "usb_ep_fifo_flush" },
	{ 0x4a453f53, "iowrite32" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x5dfee392, "dma_pool_create" },
	{ 0x51765820, "devm_request_threaded_irq" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x8d40871c, "device_set_wakeup_capable" },
	{ 0x316c15d8, "usb_gadget_vbus_connect" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xe484e35f, "ioread32" },
	{ 0xe7a02573, "ida_alloc_range" },
	{ 0xfe543c51, "regulator_enable" },
	{ 0xaf465642, "platform_device_put" },
};

MODULE_INFO(depends, "udc-core,ulpi");


MODULE_INFO(srcversion, "ABDF43967FE95CC79A3AA34");
