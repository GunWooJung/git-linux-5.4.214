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
	{ 0xfd05907, "gb_gbphy_register_driver" },
	{ 0x7c60d490, "__pm_runtime_suspend" },
	{ 0x8bdf333d, "__pm_runtime_resume" },
	{ 0x3656c243, "i2c_add_adapter" },
	{ 0x2ddbf8ad, "gb_gbphy_deregister_driver" },
	{ 0x3c375ccc, "gb_operation_sync_timeout" },
	{ 0x8ef3357e, "gb_connection_destroy" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x3afc0e60, "i2c_del_adapter" },
	{ 0xe7c8c0fc, "gb_operation_request_send_sync_timeout" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x473c262d, "gb_connection_enable" },
	{ 0x37a0cba, "kfree" },
	{ 0x18fb44dd, "gb_connection_create" },
	{ 0x69acdf38, "memcpy" },
	{ 0x71fef88e, "gb_connection_disable" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x70117f57, "gb_operation_put" },
	{ 0x5c8c319a, "gb_operation_create_flags" },
};

MODULE_INFO(depends, "gb-gbphy,greybus");


MODULE_INFO(srcversion, "784B25959D3C48AF771FED3");
