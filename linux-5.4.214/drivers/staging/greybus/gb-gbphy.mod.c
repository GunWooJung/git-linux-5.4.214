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

MODULE_INFO(staging, "Y");

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xed93c0b3, "module_layout" },
	{ 0xdc274b8f, "bus_register" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x34d3b8d1, "driver_register" },
	{ 0xfb4ec2db, "__pm_runtime_disable" },
	{ 0x18ed72f8, "__pm_runtime_use_autosuspend" },
	{ 0x7c60d490, "__pm_runtime_suspend" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x8bdf333d, "__pm_runtime_resume" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xdeeb6e3e, "device_register" },
	{ 0xc5850110, "printk" },
	{ 0x86f434e2, "driver_unregister" },
	{ 0xffb7c514, "ida_free" },
	{ 0xe1bfac46, "greybus_register_driver" },
	{ 0x66ea175b, "greybus_deregister_driver" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xc94d2bd9, "bus_unregister" },
	{ 0x80cf1b5, "pm_generic_runtime_suspend" },
	{ 0x9962bc44, "pm_runtime_enable" },
	{ 0x8e17faf3, "put_device" },
	{ 0xb98c9772, "__pm_runtime_set_status" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x5b3f46ff, "pm_generic_runtime_resume" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x15d1942f, "greybus_disabled" },
	{ 0x37a0cba, "kfree" },
	{ 0x11c66087, "pm_runtime_set_autosuspend_delay" },
	{ 0x5a4e4713, "device_unregister" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0xdb2d5c16, "dev_set_name" },
	{ 0xa7d5f92e, "ida_destroy" },
	{ 0xe7a02573, "ida_alloc_range" },
	{ 0x719e0e44, "add_uevent_var" },
};

MODULE_INFO(depends, "greybus");


MODULE_INFO(srcversion, "6CDAAC299AEF9B6D9B9F3A5");
