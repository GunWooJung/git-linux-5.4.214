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
	{ 0xd25948c6, "mdio_driver_unregister" },
	{ 0x21ec145d, "mdio_driver_register" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x5c812f20, "phy_support_asym_pause" },
	{ 0x778e4100, "dsa_switch_suspend" },
	{ 0x9030a607, "dsa_switch_resume" },
	{ 0xc47fece0, "dsa_unregister_switch" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x9166fada, "strncpy" },
	{ 0x1f874c5f, "dsa_register_switch" },
	{ 0xe9ee5b41, "dsa_switch_alloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xc4fb10cd, "gpiod_set_value_cansleep" },
	{ 0x2bf355c4, "devm_gpiod_get_optional" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0xc5850110, "printk" },
	{ 0x61d19c6, "__devm_regmap_init" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "dsa_core");


MODULE_INFO(srcversion, "6CC5692F8E34739DB471217");
