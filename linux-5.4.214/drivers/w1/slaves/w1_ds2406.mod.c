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
	{ 0x195390f1, "w1_unregister_family" },
	{ 0x855f3b29, "w1_register_family" },
	{ 0xadc30d10, "w1_write_8" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x146289b7, "crc16_table" },
	{ 0x2db79d6e, "w1_read_block" },
	{ 0xc89a56bf, "w1_write_block" },
	{ 0x3ab00a6c, "w1_reset_select_slave" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x74dbd78d, "sysfs_create_bin_file" },
	{ 0xdeb089a7, "sysfs_remove_bin_file" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "wire");


MODULE_INFO(srcversion, "0F63153E26379C27E3294BC");
