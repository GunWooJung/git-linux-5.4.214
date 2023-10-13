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
	{ 0x86f434e2, "driver_unregister" },
	{ 0xf6dd8fef, "__spi_register_driver" },
	{ 0xf9a482f9, "msleep" },
	{ 0xaed06536, "_dev_warn" },
	{ 0xb0e602eb, "memmove" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x37a0cba, "kfree" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x69acdf38, "memcpy" },
	{ 0xfc55796e, "cros_ec_check_result" },
	{ 0x60833470, "spi_bus_unlock" },
	{ 0xa3bfe695, "spi_bus_lock" },
	{ 0xdf8c695a, "__ndelay" },
	{ 0x8df02256, "cros_ec_prepare_tx" },
	{ 0x39a9b959, "spi_sync_locked" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x4fc0c5ca, "device_init_wakeup" },
	{ 0xa2a19659, "cros_ec_register" },
	{ 0xad90c929, "sched_setscheduler_nocheck" },
	{ 0x33560c9e, "devm_add_action" },
	{ 0x17b6aadc, "kthread_create_worker" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0xe21d630c, "spi_setup" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x866515d9, "kthread_destroy_worker" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xf7878e79, "kthread_flush_work" },
	{ 0x2bac761d, "kthread_queue_work" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xaf8b1477, "cros_ec_suspend" },
	{ 0x2a5eed3f, "cros_ec_resume" },
	{ 0xac236c12, "cros_ec_unregister" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "cros_ec");

MODULE_ALIAS("spi:cros-ec-spi");
MODULE_ALIAS("of:N*T*Cgoogle,cros-ec-spi");
MODULE_ALIAS("of:N*T*Cgoogle,cros-ec-spiC*");

MODULE_INFO(srcversion, "2AE7F6C1C84BF8AA6927618");
