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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xed93c0b3, "module_layout" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xf9a482f9, "msleep" },
	{ 0xe5b6e9e8, "__pm_runtime_idle" },
	{ 0xfb4ec2db, "__pm_runtime_disable" },
	{ 0xc964a580, "input_unregister_polled_device" },
	{ 0x879724cb, "param_get_int" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xd11be40, "pm_runtime_barrier" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0x5c42b5ca, "no_llseek" },
	{ 0x4fb38246, "input_register_polled_device" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x8bdf333d, "__pm_runtime_resume" },
	{ 0x56cf6cd9, "platform_device_register_full" },
	{ 0x50d4a390, "param_set_int" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xa82f8d7f, "sysfs_remove_group" },
	{ 0xd4419732, "input_set_abs_params" },
	{ 0x66c54ff1, "input_event" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x4b2e0ffe, "misc_register" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0xaf7d0f48, "current_task" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xc2107c52, "sysfs_create_group" },
	{ 0x419892d3, "fasync_helper" },
	{ 0x593c1bac, "__x86_indirect_thunk_rbx" },
	{ 0x7ef2952e, "input_set_capability" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x74e831b6, "platform_device_unregister" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x9f46ced8, "__sw_hweight64" },
	{ 0xdcec59fc, "input_free_polled_device" },
	{ 0x9962bc44, "pm_runtime_enable" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x678dcc1c, "pm_schedule_suspend" },
	{ 0xb98c9772, "__pm_runtime_set_status" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x60915a18, "input_allocate_polled_device" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0x37a0cba, "kfree" },
	{ 0x6eed2630, "param_array_ops" },
	{ 0xde793eab, "kill_fasync" },
	{ 0x35775925, "misc_deregister" },
	{ 0xc1514a3b, "free_irq" },
};

MODULE_INFO(depends, "input-polldev");


MODULE_INFO(srcversion, "EA6729DACCA5CFDFE8F4CDB");
