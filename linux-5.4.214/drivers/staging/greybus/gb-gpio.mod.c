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
	{ 0xfd05907, "gb_gbphy_register_driver" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x7c60d490, "__pm_runtime_suspend" },
	{ 0x89eba28e, "irq_to_desc" },
	{ 0x8f094d1b, "irq_find_mapping" },
	{ 0xc724a027, "gb_connection_disable_rx" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x8bdf333d, "__pm_runtime_resume" },
	{ 0xf4b0582f, "gpiochip_remove" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x52ac9eed, "gpiochip_add_data_with_key" },
	{ 0x6cb782a, "gpiochip_irqchip_add_key" },
	{ 0x2ddbf8ad, "gb_gbphy_deregister_driver" },
	{ 0xaed06536, "_dev_warn" },
	{ 0x4889d2e8, "gb_connection_enable_tx" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x3c375ccc, "gb_operation_sync_timeout" },
	{ 0x8ef3357e, "gb_connection_destroy" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x473c262d, "gb_connection_enable" },
	{ 0x37a0cba, "kfree" },
	{ 0x18fb44dd, "gb_connection_create" },
	{ 0x71fef88e, "gb_connection_disable" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x5b5d48c1, "handle_level_irq" },
};

MODULE_INFO(depends, "gb-gbphy,greybus");


MODULE_INFO(srcversion, "D1A916DAA231D822A59C9CC");
