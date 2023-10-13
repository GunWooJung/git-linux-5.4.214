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
	{ 0x875d03e0, "i2c_del_driver" },
	{ 0xb1a20db, "i2c_register_driver" },
	{ 0x716265c7, "debugfs_initialized" },
	{ 0xa916b694, "strnlen" },
	{ 0x37a0cba, "kfree" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x9166fada, "strncpy" },
	{ 0x4841bdee, "strnchr" },
	{ 0xbb4f4766, "simple_write_to_buffer" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x74dbd78d, "sysfs_create_bin_file" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xd0a46a6a, "debugfs_create_file" },
	{ 0x7f3966fa, "debugfs_create_dir" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xaed06536, "_dev_warn" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x65e33f30, "fwnode_handle_put" },
	{ 0xc70a5bf2, "fwnode_property_present" },
	{ 0x76f87430, "fwnode_property_read_u32_array" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x754d539c, "strlen" },
	{ 0x349cba85, "strchr" },
	{ 0x14efa785, "fwnode_property_read_string" },
	{ 0xe8c403, "device_get_next_child_node" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0xf9a482f9, "msleep" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x43830476, "i2c_smbus_read_block_data" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xcb315f1c, "i2c_smbus_read_i2c_block_data" },
	{ 0x1d67d36f, "i2c_smbus_read_word_data" },
	{ 0x1c7db409, "i2c_smbus_read_byte_data" },
	{ 0x7719c6f1, "i2c_smbus_write_block_data" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x81555aa5, "i2c_smbus_write_i2c_block_data" },
	{ 0xdcd5c2e5, "i2c_smbus_write_word_data" },
	{ 0x7931933d, "i2c_smbus_write_byte_data" },
	{ 0xdeb089a7, "sysfs_remove_bin_file" },
	{ 0x5b1c5c13, "debugfs_remove_recursive" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cidt,89hpes8nt2");
MODULE_ALIAS("of:N*T*Cidt,89hpes8nt2C*");
MODULE_ALIAS("of:N*T*Cidt,89hpes12nt3");
MODULE_ALIAS("of:N*T*Cidt,89hpes12nt3C*");
MODULE_ALIAS("of:N*T*Cidt,89hpes24nt6ag2");
MODULE_ALIAS("of:N*T*Cidt,89hpes24nt6ag2C*");
MODULE_ALIAS("of:N*T*Cidt,89hpes32nt8ag2");
MODULE_ALIAS("of:N*T*Cidt,89hpes32nt8ag2C*");
MODULE_ALIAS("of:N*T*Cidt,89hpes32nt8bg2");
MODULE_ALIAS("of:N*T*Cidt,89hpes32nt8bg2C*");
MODULE_ALIAS("of:N*T*Cidt,89hpes12nt12g2");
MODULE_ALIAS("of:N*T*Cidt,89hpes12nt12g2C*");
MODULE_ALIAS("of:N*T*Cidt,89hpes16nt16g2");
MODULE_ALIAS("of:N*T*Cidt,89hpes16nt16g2C*");
MODULE_ALIAS("of:N*T*Cidt,89hpes24nt24g2");
MODULE_ALIAS("of:N*T*Cidt,89hpes24nt24g2C*");
MODULE_ALIAS("of:N*T*Cidt,89hpes32nt24ag2");
MODULE_ALIAS("of:N*T*Cidt,89hpes32nt24ag2C*");
MODULE_ALIAS("of:N*T*Cidt,89hpes32nt24bg2");
MODULE_ALIAS("of:N*T*Cidt,89hpes32nt24bg2C*");
MODULE_ALIAS("of:N*T*Cidt,89hpes12n3");
MODULE_ALIAS("of:N*T*Cidt,89hpes12n3C*");
MODULE_ALIAS("of:N*T*Cidt,89hpes12n3a");
MODULE_ALIAS("of:N*T*Cidt,89hpes12n3aC*");
MODULE_ALIAS("of:N*T*Cidt,89hpes24n3");
MODULE_ALIAS("of:N*T*Cidt,89hpes24n3C*");
MODULE_ALIAS("of:N*T*Cidt,89hpes24n3a");
MODULE_ALIAS("of:N*T*Cidt,89hpes24n3aC*");
MODULE_ALIAS("of:N*T*Cidt,89hpes32h8");
MODULE_ALIAS("of:N*T*Cidt,89hpes32h8C*");
MODULE_ALIAS("of:N*T*Cidt,89hpes32h8g2");
MODULE_ALIAS("of:N*T*Cidt,89hpes32h8g2C*");
MODULE_ALIAS("of:N*T*Cidt,89hpes48h12");
MODULE_ALIAS("of:N*T*Cidt,89hpes48h12C*");
MODULE_ALIAS("of:N*T*Cidt,89hpes48h12g2");
MODULE_ALIAS("of:N*T*Cidt,89hpes48h12g2C*");
MODULE_ALIAS("of:N*T*Cidt,89hpes48h12ag2");
MODULE_ALIAS("of:N*T*Cidt,89hpes48h12ag2C*");
MODULE_ALIAS("of:N*T*Cidt,89hpes16h16");
MODULE_ALIAS("of:N*T*Cidt,89hpes16h16C*");
MODULE_ALIAS("of:N*T*Cidt,89hpes22h16");
MODULE_ALIAS("of:N*T*Cidt,89hpes22h16C*");
MODULE_ALIAS("of:N*T*Cidt,89hpes22h16g2");
MODULE_ALIAS("of:N*T*Cidt,89hpes22h16g2C*");
MODULE_ALIAS("of:N*T*Cidt,89hpes34h16");
MODULE_ALIAS("of:N*T*Cidt,89hpes34h16C*");
MODULE_ALIAS("of:N*T*Cidt,89hpes34h16g2");
MODULE_ALIAS("of:N*T*Cidt,89hpes34h16g2C*");
MODULE_ALIAS("of:N*T*Cidt,89hpes64h16");
MODULE_ALIAS("of:N*T*Cidt,89hpes64h16C*");
MODULE_ALIAS("of:N*T*Cidt,89hpes64h16g2");
MODULE_ALIAS("of:N*T*Cidt,89hpes64h16g2C*");
MODULE_ALIAS("of:N*T*Cidt,89hpes64h16ag2");
MODULE_ALIAS("of:N*T*Cidt,89hpes64h16ag2C*");
MODULE_ALIAS("of:N*T*Cidt,89hpes12t3g2");
MODULE_ALIAS("of:N*T*Cidt,89hpes12t3g2C*");
MODULE_ALIAS("of:N*T*Cidt,89hpes24t3g2");
MODULE_ALIAS("of:N*T*Cidt,89hpes24t3g2C*");
MODULE_ALIAS("of:N*T*Cidt,89hpes16t4");
MODULE_ALIAS("of:N*T*Cidt,89hpes16t4C*");
MODULE_ALIAS("of:N*T*Cidt,89hpes4t4g2");
MODULE_ALIAS("of:N*T*Cidt,89hpes4t4g2C*");
MODULE_ALIAS("of:N*T*Cidt,89hpes10t4g2");
MODULE_ALIAS("of:N*T*Cidt,89hpes10t4g2C*");
MODULE_ALIAS("of:N*T*Cidt,89hpes16t4g2");
MODULE_ALIAS("of:N*T*Cidt,89hpes16t4g2C*");
MODULE_ALIAS("of:N*T*Cidt,89hpes16t4ag2");
MODULE_ALIAS("of:N*T*Cidt,89hpes16t4ag2C*");
MODULE_ALIAS("of:N*T*Cidt,89hpes5t5");
MODULE_ALIAS("of:N*T*Cidt,89hpes5t5C*");
MODULE_ALIAS("of:N*T*Cidt,89hpes6t5");
MODULE_ALIAS("of:N*T*Cidt,89hpes6t5C*");
MODULE_ALIAS("of:N*T*Cidt,89hpes8t5");
MODULE_ALIAS("of:N*T*Cidt,89hpes8t5C*");
MODULE_ALIAS("of:N*T*Cidt,89hpes8t5a");
MODULE_ALIAS("of:N*T*Cidt,89hpes8t5aC*");
MODULE_ALIAS("of:N*T*Cidt,89hpes24t6");
MODULE_ALIAS("of:N*T*Cidt,89hpes24t6C*");
MODULE_ALIAS("of:N*T*Cidt,89hpes6t6g2");
MODULE_ALIAS("of:N*T*Cidt,89hpes6t6g2C*");
MODULE_ALIAS("of:N*T*Cidt,89hpes24t6g2");
MODULE_ALIAS("of:N*T*Cidt,89hpes24t6g2C*");
MODULE_ALIAS("of:N*T*Cidt,89hpes16t7");
MODULE_ALIAS("of:N*T*Cidt,89hpes16t7C*");
MODULE_ALIAS("of:N*T*Cidt,89hpes32t8");
MODULE_ALIAS("of:N*T*Cidt,89hpes32t8C*");
MODULE_ALIAS("of:N*T*Cidt,89hpes32t8g2");
MODULE_ALIAS("of:N*T*Cidt,89hpes32t8g2C*");
MODULE_ALIAS("of:N*T*Cidt,89hpes48t12");
MODULE_ALIAS("of:N*T*Cidt,89hpes48t12C*");
MODULE_ALIAS("of:N*T*Cidt,89hpes48t12g2");
MODULE_ALIAS("of:N*T*Cidt,89hpes48t12g2C*");
MODULE_ALIAS("i2c:89hpes8nt2");
MODULE_ALIAS("i2c:89hpes12nt3");
MODULE_ALIAS("i2c:89hpes24nt6ag2");
MODULE_ALIAS("i2c:89hpes32nt8ag2");
MODULE_ALIAS("i2c:89hpes32nt8bg2");
MODULE_ALIAS("i2c:89hpes12nt12g2");
MODULE_ALIAS("i2c:89hpes16nt16g2");
MODULE_ALIAS("i2c:89hpes24nt24g2");
MODULE_ALIAS("i2c:89hpes32nt24ag2");
MODULE_ALIAS("i2c:89hpes32nt24bg2");
MODULE_ALIAS("i2c:89hpes12n3");
MODULE_ALIAS("i2c:89hpes12n3a");
MODULE_ALIAS("i2c:89hpes24n3");
MODULE_ALIAS("i2c:89hpes24n3a");
MODULE_ALIAS("i2c:89hpes32h8");
MODULE_ALIAS("i2c:89hpes32h8g2");
MODULE_ALIAS("i2c:89hpes48h12");
MODULE_ALIAS("i2c:89hpes48h12g2");
MODULE_ALIAS("i2c:89hpes48h12ag2");
MODULE_ALIAS("i2c:89hpes16h16");
MODULE_ALIAS("i2c:89hpes22h16");
MODULE_ALIAS("i2c:89hpes22h16g2");
MODULE_ALIAS("i2c:89hpes34h16");
MODULE_ALIAS("i2c:89hpes34h16g2");
MODULE_ALIAS("i2c:89hpes64h16");
MODULE_ALIAS("i2c:89hpes64h16g2");
MODULE_ALIAS("i2c:89hpes64h16ag2");
MODULE_ALIAS("i2c:89hpes12t3g2");
MODULE_ALIAS("i2c:89hpes24t3g2");
MODULE_ALIAS("i2c:89hpes16t4");
MODULE_ALIAS("i2c:89hpes4t4g2");
MODULE_ALIAS("i2c:89hpes10t4g2");
MODULE_ALIAS("i2c:89hpes16t4g2");
MODULE_ALIAS("i2c:89hpes16t4ag2");
MODULE_ALIAS("i2c:89hpes5t5");
MODULE_ALIAS("i2c:89hpes6t5");
MODULE_ALIAS("i2c:89hpes8t5");
MODULE_ALIAS("i2c:89hpes8t5a");
MODULE_ALIAS("i2c:89hpes24t6");
MODULE_ALIAS("i2c:89hpes6t6g2");
MODULE_ALIAS("i2c:89hpes24t6g2");
MODULE_ALIAS("i2c:89hpes16t7");
MODULE_ALIAS("i2c:89hpes32t8");
MODULE_ALIAS("i2c:89hpes32t8g2");
MODULE_ALIAS("i2c:89hpes48t12");
MODULE_ALIAS("i2c:89hpes48t12g2");
MODULE_ALIAS("i2c:24c32");
MODULE_ALIAS("i2c:24c64");
MODULE_ALIAS("i2c:24c128");
MODULE_ALIAS("i2c:24c256");
MODULE_ALIAS("i2c:24c512");

MODULE_INFO(srcversion, "9557347CB357D539FEE8150");
