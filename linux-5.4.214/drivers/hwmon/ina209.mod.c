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
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0x983c8c67, "devm_hwmon_device_register_with_groups" },
	{ 0x1d67d36f, "i2c_smbus_read_word_data" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x3854774b, "kstrtoll" },
	{ 0xdcd5c2e5, "i2c_smbus_write_word_data" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cti,ina209");
MODULE_ALIAS("of:N*T*Cti,ina209C*");
MODULE_ALIAS("i2c:ina209");

MODULE_INFO(srcversion, "208382CA097F3252D0A38D5");
