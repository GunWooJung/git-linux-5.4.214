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
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x2ec19570, "v4l2_flash_init" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x7c60d490, "__pm_runtime_suspend" },
	{ 0xc62f0779, "led_classdev_flash_register_ext" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x8bdf333d, "__pm_runtime_resume" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xfb384d37, "kasprintf" },
	{ 0x4889d2e8, "gb_connection_enable_tx" },
	{ 0x6a6e05bf, "kstrtou8" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xb372d8f7, "led_classdev_register_ext" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xb3c8aded, "v4l2_flash_indicator_init" },
	{ 0xe1bfac46, "greybus_register_driver" },
	{ 0x66ea175b, "greybus_deregister_driver" },
	{ 0x3c375ccc, "gb_operation_sync_timeout" },
	{ 0x879dd3a9, "led_classdev_flash_unregister" },
	{ 0x8ef3357e, "gb_connection_destroy" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x9eacf8a5, "kstrndup" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x473c262d, "gb_connection_enable" },
	{ 0x6b2998d4, "led_classdev_unregister" },
	{ 0x37a0cba, "kfree" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x18fb44dd, "gb_connection_create" },
	{ 0x71fef88e, "gb_connection_disable" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x843fb158, "v4l2_flash_release" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
};

MODULE_INFO(depends, "v4l2-flash-led-class,led-class-flash,greybus");


MODULE_INFO(srcversion, "3FF45562E7F078B5135E974");
