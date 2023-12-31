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
	{ 0x765395c3, "param_ops_int" },
	{ 0xdc67eaad, "param_ops_byte" },
	{ 0x195390f1, "w1_unregister_family" },
	{ 0x855f3b29, "w1_register_family" },
	{ 0x3656c243, "i2c_add_adapter" },
	{ 0xe914e41e, "strcpy" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0xf22e5a57, "w1_reset_resume_command" },
	{ 0x2db79d6e, "w1_read_block" },
	{ 0xbd6841d4, "crc16" },
	{ 0xaed06536, "_dev_warn" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0x12a38747, "usleep_range" },
	{ 0xcab13163, "w1_touch_bit" },
	{ 0xca944cd, "devm_kfree" },
	{ 0x3afc0e60, "i2c_del_adapter" },
	{ 0x9ea21153, "w1_read_8" },
	{ 0xadc30d10, "w1_write_8" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xd111bb59, "_dev_info" },
	{ 0xc89a56bf, "w1_write_block" },
	{ 0x3ab00a6c, "w1_reset_select_slave" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "wire");


MODULE_INFO(srcversion, "15E89FF0209D7B4579CC792");
