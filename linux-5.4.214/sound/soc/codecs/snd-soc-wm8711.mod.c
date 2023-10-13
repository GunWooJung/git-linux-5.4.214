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
	{ 0x7c127637, "snd_soc_dapm_get_volsw" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xf6dd8fef, "__spi_register_driver" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x149bc626, "snd_soc_component_update_bits" },
	{ 0x4209bc59, "snd_soc_put_volsw" },
	{ 0x6973328c, "snd_soc_get_volsw" },
	{ 0xc5850110, "printk" },
	{ 0x86f434e2, "driver_unregister" },
	{ 0xc476bfb9, "snd_soc_dapm_put_volsw" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x32ed740, "snd_soc_info_volsw" },
	{ 0xb1a20db, "i2c_register_driver" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xb8b5aa45, "__devm_regmap_init_i2c" },
	{ 0x3d160fb1, "devm_snd_soc_register_component" },
	{ 0xf5361e58, "snd_soc_component_write" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xe37f87b8, "snd_soc_component_read32" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x532a4e22, "regcache_sync" },
};

MODULE_INFO(depends, "snd-pcm,snd-soc-core");

MODULE_ALIAS("i2c:wm8711");
MODULE_ALIAS("of:N*T*Cwlf,wm8711");
MODULE_ALIAS("of:N*T*Cwlf,wm8711C*");

MODULE_INFO(srcversion, "AE90C064E521E9E253310F9");
