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
	{ 0x1643a127, "regulator_disable" },
	{ 0xf37d2c0b, "gpio_to_desc" },
	{ 0x4209bc59, "snd_soc_put_volsw" },
	{ 0x36f1a2b6, "regmap_read" },
	{ 0x6973328c, "snd_soc_get_volsw" },
	{ 0xaed06536, "_dev_warn" },
	{ 0x68493967, "snd_soc_add_component_controls" },
	{ 0xe66f8cb1, "gpiod_direction_output_raw" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x32ed740, "snd_soc_info_volsw" },
	{ 0xb1a20db, "i2c_register_driver" },
	{ 0x868b9359, "devm_regulator_get" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb8b5aa45, "__devm_regmap_init_i2c" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x3d160fb1, "devm_snd_soc_register_component" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x8c41dd8e, "regcache_mark_dirty" },
	{ 0xffb817fb, "gpiod_set_raw_value" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0xdda54c2c, "devm_gpio_request" },
	{ 0x532a4e22, "regcache_sync" },
	{ 0xc4f3acd9, "regcache_cache_only" },
	{ 0xfe543c51, "regulator_enable" },
};

MODULE_INFO(depends, "snd-soc-core");

MODULE_ALIAS("i2c:tpa6130a2");
MODULE_ALIAS("i2c:tpa6140a2");

MODULE_INFO(srcversion, "39B8A4E6640325DD5693435");
