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
	{ 0xfe543c51, "regulator_enable" },
	{ 0x72f16fbc, "regulator_set_voltage" },
	{ 0xb2210d64, "reset_control_deassert" },
	{ 0x6c4b6684, "reset_control_assert" },
	{ 0xc4fb10cd, "gpiod_set_value_cansleep" },
	{ 0x39b52d19, "__bitmap_and" },
	{ 0xc1d15a4c, "phylink_set_port_modes" },
	{ 0x9166fada, "strncpy" },
	{ 0x2bf355c4, "devm_gpiod_get_optional" },
	{ 0x1f874c5f, "dsa_register_switch" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x868b9359, "devm_regulator_get" },
	{ 0xe9ee5b41, "dsa_switch_alloc" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xaed06536, "_dev_warn" },
	{ 0x70c02408, "mdiobus_read_nested" },
	{ 0x4407d962, "mdiobus_write_nested" },
	{ 0x593c1bac, "__x86_indirect_thunk_rbx" },
	{ 0x12a38747, "usleep_range" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xc47fece0, "dsa_unregister_switch" },
	{ 0x1643a127, "regulator_disable" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "phylink,dsa_core");

MODULE_ALIAS("of:N*T*Cmediatek,mt7621");
MODULE_ALIAS("of:N*T*Cmediatek,mt7621C*");
MODULE_ALIAS("of:N*T*Cmediatek,mt7530");
MODULE_ALIAS("of:N*T*Cmediatek,mt7530C*");

MODULE_INFO(srcversion, "FCFE1A5955607AEAF1DFF3B");
