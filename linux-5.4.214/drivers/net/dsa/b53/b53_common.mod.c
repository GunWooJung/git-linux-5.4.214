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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xed93c0b3, "module_layout" },
	{ 0xf9a482f9, "msleep" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x17ce1d56, "mdiobus_get_phy" },
	{ 0xf37d2c0b, "gpio_to_desc" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0xaed06536, "_dev_warn" },
	{ 0xfb578fc5, "memset" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x5792f848, "strlcpy" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xf7ed3c6b, "dsa_port_phylink_mac_change" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xe9ee5b41, "dsa_switch_alloc" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x858c3883, "phy_init_eee" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x12a38747, "usleep_range" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x3fa0e928, "phylink_helper_basex_speed" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x39b52d19, "__bitmap_and" },
	{ 0x1f874c5f, "dsa_register_switch" },
	{ 0xffb817fb, "gpiod_set_raw_value" },
	{ 0xc1d15a4c, "phylink_set_port_modes" },
	{ 0xb352177e, "find_first_bit" },
	{ 0x63c4d61f, "__bitmap_weight" },
	{ 0x943b1666, "devm_kmalloc" },
};

MODULE_INFO(depends, "dsa_core,phylink");


MODULE_INFO(srcversion, "20423676CDCCC2EF31AE26C");
