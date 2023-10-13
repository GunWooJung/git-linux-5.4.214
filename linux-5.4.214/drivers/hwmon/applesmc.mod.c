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
	{ 0xd3f5b56e, "hwmon_device_unregister" },
	{ 0x1035c7c2, "__release_region" },
	{ 0xa99a62a3, "platform_driver_unregister" },
	{ 0x74e831b6, "platform_device_unregister" },
	{ 0xb372d8f7, "led_classdev_register_ext" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0xd1c6a314, "hwmon_device_register" },
	{ 0x4fb38246, "input_register_polled_device" },
	{ 0xd4419732, "input_set_abs_params" },
	{ 0x60915a18, "input_allocate_polled_device" },
	{ 0x56cf6cd9, "platform_device_register_full" },
	{ 0x19af53eb, "__platform_driver_register" },
	{ 0x85bd1608, "__request_region" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0xd4835ef8, "dmi_check_system" },
	{ 0xf9a482f9, "msleep" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x66c54ff1, "input_event" },
	{ 0x6dc65c0a, "sysfs_create_file_ns" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x96848186, "scnprintf" },
	{ 0xdcec59fc, "input_free_polled_device" },
	{ 0xc964a580, "input_unregister_polled_device" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x6b2998d4, "led_classdev_unregister" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xe173653a, "sysfs_remove_file_ns" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x37a0cba, "kfree" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xc5850110, "printk" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "input-polldev");

MODULE_ALIAS("dmi*:pn*MacBookAir*:rvn*Apple*:");
MODULE_ALIAS("dmi*:pn*MacBookPro*:rvn*Apple*:");
MODULE_ALIAS("dmi*:pn*MacBook*:rvn*Apple*:");
MODULE_ALIAS("dmi*:pn*Macmini*:rvn*Apple*:");
MODULE_ALIAS("dmi*:pn*MacPro*:rvn*Apple*:");
MODULE_ALIAS("dmi*:pn*iMac*:rvn*Apple*:");

MODULE_INFO(srcversion, "E330F7F54055481E57613B7");
