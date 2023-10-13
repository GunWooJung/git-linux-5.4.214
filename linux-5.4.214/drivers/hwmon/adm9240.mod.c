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
	{ 0x3854774b, "kstrtoll" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0x983c8c67, "devm_hwmon_device_register_with_groups" },
	{ 0x2f9e7f8e, "vid_which_vrm" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x446615bd, "vid_from_reg" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x7931933d, "i2c_smbus_write_byte_data" },
	{ 0x69acdf38, "memcpy" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xa916b694, "strnlen" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x1c7db409, "i2c_smbus_read_byte_data" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "hwmon-vid");

MODULE_ALIAS("i2c:adm9240");
MODULE_ALIAS("i2c:ds1780");
MODULE_ALIAS("i2c:lm81");

MODULE_INFO(srcversion, "028262FEA73445EA0E4368E");
