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
	{ 0x3f556282, "simple_attr_release" },
	{ 0x54d16a13, "debugfs_attr_write" },
	{ 0xebaa60f0, "debugfs_attr_read" },
	{ 0x5c42b5ca, "no_llseek" },
	{ 0x32ee9868, "simple_open" },
	{ 0x5ae8a115, "noop_llseek" },
	{ 0x47916e2c, "pmbus_do_remove" },
	{ 0x875d03e0, "i2c_del_driver" },
	{ 0xb1a20db, "i2c_register_driver" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0xd45cc6ca, "bin2hex" },
	{ 0x691d3501, "pmbus_set_page" },
	{ 0x8a1d6948, "_dev_notice" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xaed06536, "_dev_warn" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xd0a46a6a, "debugfs_create_file" },
	{ 0x96848186, "scnprintf" },
	{ 0x7f3966fa, "debugfs_create_dir" },
	{ 0x143c1ee5, "pmbus_get_debugfs_dir" },
	{ 0x459cabec, "pmbus_do_probe" },
	{ 0xe96d19e1, "devm_gpiochip_add_data" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x96b29254, "strncasecmp" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x43830476, "i2c_smbus_read_block_data" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x787bfb4b, "gpiochip_get_data" },
	{ 0x1c7db409, "i2c_smbus_read_byte_data" },
	{ 0x7931933d, "i2c_smbus_write_byte_data" },
	{ 0x703de441, "simple_attr_open" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xb70b1da4, "pmbus_get_driver_info" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "pmbus_core");

MODULE_ALIAS("of:N*T*Cti,ucd9000");
MODULE_ALIAS("of:N*T*Cti,ucd9000C*");
MODULE_ALIAS("of:N*T*Cti,ucd90120");
MODULE_ALIAS("of:N*T*Cti,ucd90120C*");
MODULE_ALIAS("of:N*T*Cti,ucd90124");
MODULE_ALIAS("of:N*T*Cti,ucd90124C*");
MODULE_ALIAS("of:N*T*Cti,ucd90160");
MODULE_ALIAS("of:N*T*Cti,ucd90160C*");
MODULE_ALIAS("of:N*T*Cti,ucd9090");
MODULE_ALIAS("of:N*T*Cti,ucd9090C*");
MODULE_ALIAS("of:N*T*Cti,ucd90910");
MODULE_ALIAS("of:N*T*Cti,ucd90910C*");
MODULE_ALIAS("i2c:ucd9000");
MODULE_ALIAS("i2c:ucd90120");
MODULE_ALIAS("i2c:ucd90124");
MODULE_ALIAS("i2c:ucd90160");
MODULE_ALIAS("i2c:ucd9090");
MODULE_ALIAS("i2c:ucd90910");

MODULE_INFO(srcversion, "5D6AE484771EC69AB3D467B");
