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
	{ 0x7f3966fa, "debugfs_create_dir" },
	{ 0x7ee415d5, "single_open" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xc1889514, "regmap_update_bits_base" },
	{ 0x8ce08cc0, "single_release" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x58f84c2d, "seq_printf" },
	{ 0x36f1a2b6, "regmap_read" },
	{ 0xd0a46a6a, "debugfs_create_file" },
	{ 0x5b1c5c13, "debugfs_remove_recursive" },
	{ 0x21ba44a5, "seq_read" },
	{ 0x19af53eb, "__platform_driver_register" },
	{ 0x74e831b6, "platform_device_unregister" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x8c41dd8e, "regcache_mark_dirty" },
	{ 0xda2b5d09, "seq_lseek" },
	{ 0xac005139, "snd_soc_set_ac97_ops" },
	{ 0xa99a62a3, "platform_driver_unregister" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x904a8908, "regmap_write" },
	{ 0x532a4e22, "regcache_sync" },
	{ 0xc4f3acd9, "regcache_cache_only" },
};

MODULE_INFO(depends, "snd-soc-core");

MODULE_ALIAS("of:N*T*Cfsl,mpc8610-ssi");
MODULE_ALIAS("of:N*T*Cfsl,mpc8610-ssiC*");
MODULE_ALIAS("of:N*T*Cfsl,imx51-ssi");
MODULE_ALIAS("of:N*T*Cfsl,imx51-ssiC*");
MODULE_ALIAS("of:N*T*Cfsl,imx35-ssi");
MODULE_ALIAS("of:N*T*Cfsl,imx35-ssiC*");
MODULE_ALIAS("of:N*T*Cfsl,imx21-ssi");
MODULE_ALIAS("of:N*T*Cfsl,imx21-ssiC*");

MODULE_INFO(srcversion, "C002C92A00ECE9220C50015");
