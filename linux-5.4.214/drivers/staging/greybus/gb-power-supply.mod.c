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
	{ 0x2d3385d3, "system_wq" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x7c60d490, "__pm_runtime_suspend" },
	{ 0xebdd7402, "power_supply_unregister" },
	{ 0x5c9ec15b, "power_supply_get_by_name" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x8bdf333d, "__pm_runtime_resume" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xf928c918, "power_supply_changed" },
	{ 0xaed06536, "_dev_warn" },
	{ 0x4889d2e8, "gb_connection_enable_tx" },
	{ 0xd3a6aa10, "power_supply_get_drvdata" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x5792f848, "strlcpy" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xe1bfac46, "greybus_register_driver" },
	{ 0x66ea175b, "greybus_deregister_driver" },
	{ 0x3c375ccc, "gb_operation_sync_timeout" },
	{ 0x8ef3357e, "gb_connection_destroy" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x9eacf8a5, "kstrndup" },
	{ 0xe7c8c0fc, "gb_operation_request_send_sync_timeout" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x473c262d, "gb_connection_enable" },
	{ 0xdc9abbc5, "power_supply_put" },
	{ 0x37a0cba, "kfree" },
	{ 0x18fb44dd, "gb_connection_create" },
	{ 0x71fef88e, "gb_connection_disable" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x1418158d, "power_supply_register" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x70117f57, "gb_operation_put" },
	{ 0x5c8c319a, "gb_operation_create_flags" },
	{ 0xc8dcc62a, "krealloc" },
};

MODULE_INFO(depends, "greybus");


MODULE_INFO(srcversion, "462FDEDE7302F1C12FE87BB");
