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
	{ 0xe56a9336, "snd_pcm_format_width" },
	{ 0x61fbd9e4, "__devm_regmap_init_spi" },
	{ 0x875d03e0, "i2c_del_driver" },
	{ 0xf6dd8fef, "__spi_register_driver" },
	{ 0x149bc626, "snd_soc_component_update_bits" },
	{ 0x4209bc59, "snd_soc_put_volsw" },
	{ 0x6973328c, "snd_soc_get_volsw" },
	{ 0xec688f13, "devm_regulator_bulk_get" },
	{ 0xeb94b6dd, "regulator_bulk_enable" },
	{ 0x2737b538, "snd_pcm_hw_constraint_list" },
	{ 0xc5850110, "printk" },
	{ 0x68493967, "snd_soc_add_component_controls" },
	{ 0x86f434e2, "driver_unregister" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x32ed740, "snd_soc_info_volsw" },
	{ 0xb1a20db, "i2c_register_driver" },
	{ 0x5bb6172e, "regulator_bulk_disable" },
	{ 0xb8b5aa45, "__devm_regmap_init_i2c" },
	{ 0x3d160fb1, "devm_snd_soc_register_component" },
	{ 0xf5361e58, "snd_soc_component_write" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x532a4e22, "regcache_sync" },
};

MODULE_INFO(depends, "snd-pcm,snd-soc-core");

MODULE_ALIAS("of:N*T*Cwlf,wm8741");
MODULE_ALIAS("of:N*T*Cwlf,wm8741C*");
MODULE_ALIAS("i2c:wm8741");

MODULE_INFO(srcversion, "A0464E3FBC808DC2F048971");
