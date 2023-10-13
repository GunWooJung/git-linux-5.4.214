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
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xf9a482f9, "msleep" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x875d03e0, "i2c_del_driver" },
	{ 0xd17a1563, "regmap_exit" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xc1889514, "regmap_update_bits_base" },
	{ 0xd9729ca4, "regmap_bulk_read" },
	{ 0xe2b72930, "regmap_bulk_write" },
	{ 0x36f1a2b6, "regmap_read" },
	{ 0xdd64e639, "strscpy" },
	{ 0xf4b0582f, "gpiochip_remove" },
	{ 0x52ac9eed, "gpiochip_add_data_with_key" },
	{ 0x5f2b1d95, "intlog2" },
	{ 0xfe483960, "__regmap_init_i2c" },
	{ 0x2b55d71e, "i2c_unregister_device" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x787bfb4b, "gpiochip_get_data" },
	{ 0xb1a20db, "i2c_register_driver" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xd111bb59, "_dev_info" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x28bf0b4e, "i2c_new_dummy_device" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x37a0cba, "kfree" },
	{ 0x8733236, "intlog10" },
	{ 0x904a8908, "regmap_write" },
	{ 0xa1d6c8f1, "i2c_new_device" },
};

MODULE_INFO(depends, "dvb-core");

MODULE_ALIAS("i2c:cxd2820r");

MODULE_INFO(srcversion, "E4F404A300BAF312862A4DE");
