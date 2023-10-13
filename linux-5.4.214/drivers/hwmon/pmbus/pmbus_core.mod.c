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
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0x4c4b17c2, "hwmon_device_register_with_groups" },
	{ 0x7f3966fa, "debugfs_create_dir" },
	{ 0x1c7db409, "i2c_smbus_read_byte_data" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x3854774b, "kstrtoll" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xdcd5c2e5, "i2c_smbus_write_word_data" },
	{ 0x7931933d, "i2c_smbus_write_byte_data" },
	{ 0x5c42b5ca, "no_llseek" },
	{ 0xd3f5b56e, "hwmon_device_unregister" },
	{ 0x56470118, "__warn_printk" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xd0a46a6a, "debugfs_create_file" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x5b1c5c13, "debugfs_remove_recursive" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x1d67d36f, "i2c_smbus_read_word_data" },
	{ 0xaed06536, "_dev_warn" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x9166fada, "strncpy" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xbca0b1e, "i2c_smbus_write_byte" },
	{ 0x3f556282, "simple_attr_release" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x4480e186, "rdev_get_id" },
	{ 0xebaa60f0, "debugfs_attr_read" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x3304fd6, "rdev_get_dev" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x96848186, "scnprintf" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0xa7c8deb2, "devm_regulator_register" },
	{ 0x54d16a13, "debugfs_attr_write" },
	{ 0x703de441, "simple_attr_open" },
	{ 0xc8dcc62a, "krealloc" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "ED9DC5BEDFC8F141BA2F3CE");
