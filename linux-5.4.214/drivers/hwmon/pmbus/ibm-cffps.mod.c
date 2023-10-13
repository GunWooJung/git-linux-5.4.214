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
	{ 0x32ee9868, "simple_open" },
	{ 0x5ae8a115, "noop_llseek" },
	{ 0x47916e2c, "pmbus_do_remove" },
	{ 0x875d03e0, "i2c_del_driver" },
	{ 0xb1a20db, "i2c_register_driver" },
	{ 0xaed06536, "_dev_warn" },
	{ 0xd0a46a6a, "debugfs_create_file" },
	{ 0x7f3966fa, "debugfs_create_dir" },
	{ 0x143c1ee5, "pmbus_get_debugfs_dir" },
	{ 0x9b9a702f, "devm_led_classdev_register_ext" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x459cabec, "pmbus_do_probe" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x7931933d, "i2c_smbus_write_byte_data" },
	{ 0xbe985487, "pmbus_read_byte_data" },
	{ 0x60fa8386, "pmbus_read_word_data" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x1c7db409, "i2c_smbus_read_byte_data" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x1d67d36f, "i2c_smbus_read_word_data" },
	{ 0x43830476, "i2c_smbus_read_block_data" },
	{ 0x691d3501, "pmbus_set_page" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb35586ed, "i2c_transfer" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "pmbus_core");

MODULE_ALIAS("of:N*T*Cibm,cffps1");
MODULE_ALIAS("of:N*T*Cibm,cffps1C*");
MODULE_ALIAS("of:N*T*Cibm,cffps2");
MODULE_ALIAS("of:N*T*Cibm,cffps2C*");
MODULE_ALIAS("i2c:ibm_cffps1");
MODULE_ALIAS("i2c:ibm_cffps2");

MODULE_INFO(srcversion, "DFC105333B41AAE50A5FFBE");
