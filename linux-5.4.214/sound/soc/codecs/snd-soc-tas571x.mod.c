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
	{ 0xb077e70a, "clk_unprepare" },
	{ 0x61d19c6, "__devm_regmap_init" },
	{ 0xe56a9336, "snd_pcm_format_width" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x815588a6, "clk_enable" },
	{ 0x875d03e0, "i2c_del_driver" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xc1889514, "regmap_update_bits_base" },
	{ 0xb35586ed, "i2c_transfer" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x149bc626, "snd_soc_component_update_bits" },
	{ 0x4209bc59, "snd_soc_put_volsw" },
	{ 0x6973328c, "snd_soc_get_volsw" },
	{ 0xec688f13, "devm_regulator_bulk_get" },
	{ 0xeb94b6dd, "regulator_bulk_enable" },
	{ 0x7f00dd01, "snd_soc_info_enum_double" },
	{ 0x6e943f12, "snd_soc_put_volsw_range" },
	{ 0x9a8979bc, "snd_soc_info_volsw_range" },
	{ 0x122b5584, "snd_soc_get_volsw_range" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x32ed740, "snd_soc_info_volsw" },
	{ 0xb1a20db, "i2c_register_driver" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xa71e1311, "snd_soc_get_enum_double" },
	{ 0x5bb6172e, "regulator_bulk_disable" },
	{ 0x12a38747, "usleep_range" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x3d160fb1, "devm_snd_soc_register_component" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x6164d63, "devm_clk_get" },
	{ 0x2bf355c4, "devm_gpiod_get_optional" },
	{ 0x4fc58c0c, "i2c_transfer_buffer_flags" },
	{ 0xdba17987, "snd_soc_put_enum_double" },
	{ 0x37a0cba, "kfree" },
	{ 0xe23f1472, "gpiod_set_value" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x904a8908, "regmap_write" },
};

MODULE_INFO(depends, "snd-pcm,snd-soc-core");

MODULE_ALIAS("i2c:tas5707");
MODULE_ALIAS("i2c:tas5711");
MODULE_ALIAS("i2c:tas5717");
MODULE_ALIAS("i2c:tas5719");
MODULE_ALIAS("i2c:tas5721");
MODULE_ALIAS("of:N*T*Cti,tas5707");
MODULE_ALIAS("of:N*T*Cti,tas5707C*");
MODULE_ALIAS("of:N*T*Cti,tas5711");
MODULE_ALIAS("of:N*T*Cti,tas5711C*");
MODULE_ALIAS("of:N*T*Cti,tas5717");
MODULE_ALIAS("of:N*T*Cti,tas5717C*");
MODULE_ALIAS("of:N*T*Cti,tas5719");
MODULE_ALIAS("of:N*T*Cti,tas5719C*");
MODULE_ALIAS("of:N*T*Cti,tas5721");
MODULE_ALIAS("of:N*T*Cti,tas5721C*");

MODULE_INFO(srcversion, "428D1FF2A96BBA33C7C54FB");
