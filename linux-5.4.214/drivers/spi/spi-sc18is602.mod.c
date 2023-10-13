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
	{ 0xbb4e55fd, "devm_spi_register_controller" },
	{ 0xc4fb10cd, "gpiod_set_value_cansleep" },
	{ 0x2bf355c4, "devm_gpiod_get_optional" },
	{ 0x6cac2f3b, "__devm_spi_alloc_controller" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x11001db2, "spi_finalize_current_message" },
	{ 0xfb578fc5, "memset" },
	{ 0x69acdf38, "memcpy" },
	{ 0x7931933d, "i2c_smbus_write_byte_data" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x12a38747, "usleep_range" },
	{ 0x4fc58c0c, "i2c_transfer_buffer_flags" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cnxp,sc18is602");
MODULE_ALIAS("of:N*T*Cnxp,sc18is602C*");
MODULE_ALIAS("of:N*T*Cnxp,sc18is602b");
MODULE_ALIAS("of:N*T*Cnxp,sc18is602bC*");
MODULE_ALIAS("of:N*T*Cnxp,sc18is603");
MODULE_ALIAS("of:N*T*Cnxp,sc18is603C*");
MODULE_ALIAS("i2c:sc18is602");
MODULE_ALIAS("i2c:sc18is602b");
MODULE_ALIAS("i2c:sc18is603");

MODULE_INFO(srcversion, "EF5B658311E46F4AF41C32C");
