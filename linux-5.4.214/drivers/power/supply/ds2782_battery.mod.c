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
	{ 0x875d03e0, "i2c_del_driver" },
	{ 0xb1a20db, "i2c_register_driver" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0x1c7db409, "i2c_smbus_read_byte_data" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x1418158d, "power_supply_register" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xfb384d37, "kasprintf" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xb8f11603, "idr_alloc" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x1d67d36f, "i2c_smbus_read_word_data" },
	{ 0xd3a6aa10, "power_supply_get_drvdata" },
	{ 0xf928c918, "power_supply_changed" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x7665a95b, "idr_remove" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x37a0cba, "kfree" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xebdd7402, "power_supply_unregister" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("i2c:ds2782");
MODULE_ALIAS("i2c:ds2786");

MODULE_INFO(srcversion, "9CF2AA66C25E2A7CF29B4D4");
