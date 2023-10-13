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
	{ 0x56975ed9, "acpi_bus_register_driver" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xdc274b8f, "bus_register" },
	{ 0x85bd1608, "__request_region" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xb26a1add, "elfcorehdr_addr" },
	{ 0x34d3b8d1, "driver_register" },
	{ 0x7f3966fa, "debugfs_create_dir" },
	{ 0x7ee415d5, "single_open" },
	{ 0x77358855, "iomem_resource" },
	{ 0x754d539c, "strlen" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x8ce08cc0, "single_release" },
	{ 0xe35ed617, "seq_puts" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0xaaf8f961, "kobject_uevent" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x58f84c2d, "seq_printf" },
	{ 0x3d1960e2, "acpi_bus_unregister_driver" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xd0a46a6a, "debugfs_create_file" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x5b1c5c13, "debugfs_remove_recursive" },
	{ 0x21ba44a5, "seq_read" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xdeeb6e3e, "device_register" },
	{ 0x11089ac7, "_ctype" },
	{ 0x6a6e05bf, "kstrtou8" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0xaf7d0f48, "current_task" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x86f434e2, "driver_unregister" },
	{ 0x67ba7ebf, "debugfs_remove" },
	{ 0x9e9fdd9d, "memunmap" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x24d273d1, "add_timer" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0x5fe1c3f, "device_add" },
	{ 0x7add3d63, "bus_find_device" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xc94d2bd9, "bus_unregister" },
	{ 0x2b4d03e0, "kobject_uevent_env" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xa916b694, "strnlen" },
	{ 0x8e17faf3, "put_device" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x4af6ddf0, "kstrtou16" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x8df9dd10, "guid_null" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x1035c7c2, "__release_region" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x4d924f20, "memremap" },
	{ 0xe7a7a03f, "get_device" },
	{ 0xda2b5d09, "seq_lseek" },
	{ 0x37a0cba, "kfree" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x69acdf38, "memcpy" },
	{ 0xd3a720f3, "sysfs_create_groups" },
	{ 0x535449e7, "device_initialize" },
	{ 0x58f308eb, "sysfs_remove_groups" },
	{ 0x5a4e4713, "device_unregister" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xdb2d5c16, "dev_set_name" },
	{ 0x719e0e44, "add_uevent_var" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("acpi*:PNP0A07:*");

MODULE_INFO(srcversion, "9BEB74E317565D0F406A07C");
