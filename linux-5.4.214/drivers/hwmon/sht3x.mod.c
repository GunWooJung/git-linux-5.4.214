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
	{ 0x4af6ddf0, "kstrtou16" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x983c8c67, "devm_hwmon_device_register_with_groups" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xaa8106bc, "crc8_populate_msb" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x124bad4d, "kstrtobool" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0xe2aae5cc, "crc8" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x96848186, "scnprintf" },
	{ 0x12a38747, "usleep_range" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x4fc58c0c, "i2c_transfer_buffer_flags" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "crc8");

MODULE_ALIAS("i2c:sht3x");
MODULE_ALIAS("i2c:sts3x");

MODULE_INFO(srcversion, "1EDE2A6A1AF48B394D1CDC4");
