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
	{ 0x32ee9868, "simple_open" },
	{ 0x91fc7183, "generic_file_llseek" },
	{ 0x27753bf5, "mei_cldev_driver_unregister" },
	{ 0x3555681e, "__mei_cldev_driver_register" },
	{ 0xd0a46a6a, "debugfs_create_file" },
	{ 0x7f3966fa, "debugfs_create_dir" },
	{ 0x35e0e002, "mei_cldev_register_notif_cb" },
	{ 0x81bd215a, "mei_cldev_register_rx_cb" },
	{ 0x8d513470, "mei_cldev_enable" },
	{ 0xfa159166, "mei_cldev_set_drvdata" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xae42d5b9, "mei_cldev_ver" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xa096b889, "wait_for_completion_killable" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0x96848186, "scnprintf" },
	{ 0xaed06536, "_dev_warn" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x43f55a0c, "mei_cldev_recv" },
	{ 0xfd672d72, "watchdog_register_device" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1b7dc067, "mei_cldev_send" },
	{ 0x29361773, "complete" },
	{ 0x37a0cba, "kfree" },
	{ 0x5b1c5c13, "debugfs_remove_recursive" },
	{ 0x13a9bcef, "mei_cldev_disable" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x51bd55b5, "completion_done" },
	{ 0x56a61ea2, "mei_cldev_get_drvdata" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x4d290b16, "watchdog_unregister_device" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "mei");

MODULE_ALIAS("mei:*:05b79a6f-4628-4d7f-899d-a91514cb32ab:*:*");

MODULE_INFO(srcversion, "FF2913B1CF8C267B2927223");
