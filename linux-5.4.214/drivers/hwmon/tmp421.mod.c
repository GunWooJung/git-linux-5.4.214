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
	{ 0x9a4c322, "_dev_err" },
	{ 0xd15ff8ae, "devm_hwmon_device_register_with_info" },
	{ 0x7931933d, "i2c_smbus_write_byte_data" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x5792f848, "strlcpy" },
	{ 0x1c7db409, "i2c_smbus_read_byte_data" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cti,tmp421");
MODULE_ALIAS("of:N*T*Cti,tmp421C*");
MODULE_ALIAS("of:N*T*Cti,tmp422");
MODULE_ALIAS("of:N*T*Cti,tmp422C*");
MODULE_ALIAS("of:N*T*Cti,tmp423");
MODULE_ALIAS("of:N*T*Cti,tmp423C*");
MODULE_ALIAS("of:N*T*Cti,tmp441");
MODULE_ALIAS("of:N*T*Cti,tmp441C*");
MODULE_ALIAS("of:N*T*Cti,tmp442");
MODULE_ALIAS("of:N*T*Cti,tmp442C*");
MODULE_ALIAS("i2c:tmp421");
MODULE_ALIAS("i2c:tmp422");
MODULE_ALIAS("i2c:tmp423");
MODULE_ALIAS("i2c:tmp441");
MODULE_ALIAS("i2c:tmp442");

MODULE_INFO(srcversion, "286A33FEAD85A190C24EA38");
