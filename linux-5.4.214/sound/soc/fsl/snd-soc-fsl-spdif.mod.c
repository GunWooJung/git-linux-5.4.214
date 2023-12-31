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
	{ 0x815588a6, "clk_enable" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xc1889514, "regmap_update_bits_base" },
	{ 0x6b6947f4, "regcache_cache_bypass" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x1e57910a, "devm_ioremap_resource" },
	{ 0x36f1a2b6, "regmap_read" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x19af53eb, "__platform_driver_register" },
	{ 0xc3d84a5, "__devm_regmap_init_mmio_clk" },
	{ 0xaed06536, "_dev_warn" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0xd072dc20, "platform_get_resource" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x78041b8f, "byte_rev_table" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x43f81957, "clk_round_rate" },
	{ 0x8b149c36, "clk_is_match" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x3d160fb1, "devm_snd_soc_register_component" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x6164d63, "devm_clk_get" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0x8c41dd8e, "regcache_mark_dirty" },
	{ 0x7e73a43b, "platform_get_irq" },
	{ 0xa99a62a3, "platform_driver_unregister" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x51765820, "devm_request_threaded_irq" },
	{ 0x772c91e7, "snd_soc_add_dai_controls" },
	{ 0x904a8908, "regmap_write" },
	{ 0x532a4e22, "regcache_sync" },
	{ 0xc4f3acd9, "regcache_cache_only" },
};

MODULE_INFO(depends, "snd-soc-core");

MODULE_ALIAS("of:N*T*Cfsl,imx35-spdif");
MODULE_ALIAS("of:N*T*Cfsl,imx35-spdifC*");
MODULE_ALIAS("of:N*T*Cfsl,vf610-spdif");
MODULE_ALIAS("of:N*T*Cfsl,vf610-spdifC*");

MODULE_INFO(srcversion, "436EDF78374855752F883EE");
