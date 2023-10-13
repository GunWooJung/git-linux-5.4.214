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
	{ 0x1cd6f316, "param_ops_uint" },
	{ 0x8b95e7b, "pci_unregister_driver" },
	{ 0xf354855a, "__pci_register_driver" },
	{ 0xedc03953, "iounmap" },
	{ 0x2a303d4d, "check_signature" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x5e0b3f66, "gpiod_add_lookup_table" },
	{ 0xeb7f6046, "acpi_get_devices" },
	{ 0x7c983a5d, "dmi_walk" },
	{ 0xe13cd8a7, "dmi_name_in_vendors" },
	{ 0xa453352, "pm_runtime_allow" },
	{ 0x18ed72f8, "__pm_runtime_use_autosuspend" },
	{ 0x11c66087, "pm_runtime_set_autosuspend_delay" },
	{ 0x3656c243, "i2c_add_adapter" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x8a1d6948, "_dev_notice" },
	{ 0x51765820, "devm_request_threaded_irq" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x5f130ba8, "pcim_iomap_regions" },
	{ 0xecadd7c7, "dev_driver_string" },
	{ 0xeab6f4c4, "acpi_check_resource_conflict" },
	{ 0xdbcf041a, "acpi_install_address_space_handler" },
	{ 0xdca74e3c, "pcim_pin_device" },
	{ 0x27dd129b, "pcim_enable_device" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x714da7f6, "set_primary_fwnode" },
	{ 0x50877b9, "dmi_first_match" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0xd0c1e622, "pci_read_config_dword" },
	{ 0x827e61f8, "acpi_has_watchdog" },
	{ 0x500384ce, "pci_bus_read_config_dword" },
	{ 0x3c8f9160, "pci_bus_write_config_byte" },
	{ 0x8cb91247, "pci_bus_read_config_byte" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x37a24b11, "pci_read_config_byte" },
	{ 0x7c60d490, "__pm_runtime_suspend" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0xaafdc258, "strcasecmp" },
	{ 0x754d539c, "strlen" },
	{ 0x56cf6cd9, "platform_device_register_full" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x3afc0e60, "i2c_del_adapter" },
	{ 0xc219f6a1, "gpiod_remove_lookup_table" },
	{ 0x74e831b6, "platform_device_unregister" },
	{ 0x2b6f0008, "pm_runtime_forbid" },
	{ 0xb4b9f95d, "i2c_handle_smbus_host_notify" },
	{ 0xa1f9a134, "__x86_indirect_thunk_rsi" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xb0de39d3, "pci_read_config_word" },
	{ 0xe5b6e9e8, "__pm_runtime_idle" },
	{ 0x92e26bf, "acpi_remove_address_space_handler" },
	{ 0x15cb5620, "is_acpi_device_node" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x8bdf333d, "__pm_runtime_resume" },
	{ 0xbe49252c, "acpi_os_write_port" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xb654ef65, "acpi_os_read_port" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x37a0cba, "kfree" },
	{ 0x81188c30, "match_string" },
	{ 0xded6a415, "acpi_get_object_info" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xa1d6c8f1, "i2c_new_device" },
	{ 0xaed06536, "_dev_warn" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x81e6b37f, "dmi_get_system_info" },
	{ 0x12a38747, "usleep_range" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x928d7386, "pci_write_config_byte" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00008086d00002413sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002423sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002443sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002483sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000024C3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000024D3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000025A4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000266Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000027DAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000269Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000283Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002930sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00005032sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003A30sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003A60sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003B30sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001C22sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001D22sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001D70sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001D71sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001D72sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002330sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001E22sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00008C22sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009C22sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001F3Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00008D22sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00008D7Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00008D7Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00008D7Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000023B0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000031D4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00008CA2sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009CA2sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000F12sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002292sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A123sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009D23sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000018DFsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000019DFsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00005AD4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A1A3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A223sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A2A3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A323sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009DA3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000034A3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000002A3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004B23sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A0A3sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "013F6C115F9C289E799375E");
