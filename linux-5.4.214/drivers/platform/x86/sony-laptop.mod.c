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
	{ 0x569abcca, "acpi_walk_resources" },
	{ 0x56975ed9, "acpi_bus_register_driver" },
	{ 0xfc4152fc, "ec_read" },
	{ 0x174e203e, "device_remove_file" },
	{ 0x85bd1608, "__request_region" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xf9a482f9, "msleep" },
	{ 0x13d0adf7, "__kfifo_out" },
	{ 0x765395c3, "param_ops_int" },
	{ 0x139f2189, "__kfifo_alloc" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xdf8165bf, "backlight_device_register" },
	{ 0xd92deb6b, "acpi_evaluate_object" },
	{ 0xded6a415, "acpi_get_object_info" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x3d1960e2, "acpi_bus_unregister_driver" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xff282521, "rfkill_register" },
	{ 0x4f55166f, "acpi_set_current_resources" },
	{ 0xa82f8d7f, "sysfs_remove_group" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x19af53eb, "__platform_driver_register" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x66c54ff1, "input_event" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x4b2e0ffe, "misc_register" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0xab03b9eb, "acpi_bus_get_status" },
	{ 0xd4835ef8, "dmi_check_system" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xe5b440f1, "rfkill_alloc" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xc2107c52, "sysfs_create_group" },
	{ 0xd73c36a2, "platform_device_alloc" },
	{ 0x97999817, "rfkill_set_hw_state" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x419892d3, "fasync_helper" },
	{ 0xf14ea0e9, "platform_device_add" },
	{ 0x7ef2952e, "input_set_capability" },
	{ 0xc3aaf0a9, "__put_user_1" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x5ae8a115, "noop_llseek" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x74e831b6, "platform_device_unregister" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x6de7f7ff, "acpi_video_get_backlight_type" },
	{ 0x5748356e, "device_create_file" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xaad6d92f, "rfkill_init_sw_state" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x94a09154, "input_register_device" },
	{ 0x1000e51, "schedule" },
	{ 0x4e97c8d9, "input_free_device" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x85b5e625, "rfkill_set_states" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x1035c7c2, "__release_region" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xdb760f52, "__kfifo_free" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x74754435, "acpi_bus_generate_netlink_event" },
	{ 0x37a0cba, "kfree" },
	{ 0xdb68bbad, "rfkill_destroy" },
	{ 0x2ab40469, "input_unregister_device" },
	{ 0x7db9305a, "current_time" },
	{ 0xde793eab, "kill_fasync" },
	{ 0xa207ea98, "pci_get_device" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xf23fcb99, "__kfifo_in" },
	{ 0x8423aab5, "pci_dev_put" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xa99a62a3, "platform_driver_unregister" },
	{ 0xc708f1fe, "ec_write" },
	{ 0xec2b8a42, "acpi_walk_namespace" },
	{ 0x83eb21c, "rfkill_unregister" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x472afdf9, "backlight_device_unregister" },
	{ 0xc371bb96, "param_ops_ulong" },
	{ 0x35775925, "misc_deregister" },
	{ 0x509b64ea, "acpi_has_method" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xaf465642, "platform_device_put" },
	{ 0x4f55cb4, "input_allocate_device" },
};

MODULE_INFO(depends, "video");

MODULE_ALIAS("acpi*:SNY5001:*");
MODULE_ALIAS("acpi*:SNY6001:*");

MODULE_INFO(srcversion, "2AFE8A2B9D774759948D96A");
