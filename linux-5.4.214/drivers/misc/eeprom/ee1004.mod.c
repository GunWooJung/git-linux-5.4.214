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
	{ 0x875d03e0, "i2c_del_driver" },
	{ 0xb1a20db, "i2c_register_driver" },
	{ 0x8a1d6948, "_dev_notice" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x28bf0b4e, "i2c_new_dummy_device" },
	{ 0x74dbd78d, "sysfs_create_bin_file" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x377a9732, "i2c_smbus_read_byte" },
	{ 0xbca0b1e, "i2c_smbus_write_byte" },
	{ 0x73195445, "i2c_smbus_read_i2c_block_data_or_emulated" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2b55d71e, "i2c_unregister_device" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xdeb089a7, "sysfs_remove_bin_file" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("i2c:ee1004");

MODULE_INFO(srcversion, "A6310C6A733547DCEBDCCBC");
