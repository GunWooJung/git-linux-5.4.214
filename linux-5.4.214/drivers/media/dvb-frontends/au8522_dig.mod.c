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
	{ 0xf00b8403, "au8522_release_state" },
	{ 0xf9a482f9, "msleep" },
	{ 0x765395c3, "param_ops_int" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xd4fa9e6d, "au8522_led_ctrl" },
	{ 0x7a31ce9f, "au8522_writereg" },
	{ 0x55228b39, "au8522_readreg" },
	{ 0xc5850110, "printk" },
	{ 0xc7f0416b, "au8522_i2c_gate_ctrl" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x46f5330c, "au8522_sleep" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x7e2442d2, "au8522_analog_i2c_gate_ctrl" },
	{ 0x4f17d521, "au8522_get_state" },
	{ 0xfdd95576, "au8522_init" },
};

MODULE_INFO(depends, "au8522_common");


MODULE_INFO(srcversion, "0C0FFE37ED9467EA0EDF7FF");
