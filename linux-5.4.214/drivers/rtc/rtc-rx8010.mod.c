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
	{ 0x51765820, "devm_request_threaded_irq" },
	{ 0xd111bb59, "_dev_info" },
	{ 0xb13c162f, "devm_rtc_device_register" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x4eed1932, "rtc_update_irq" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xaed06536, "_dev_warn" },
	{ 0xb6936ffe, "_bcd2bin" },
	{ 0xcb315f1c, "i2c_smbus_read_i2c_block_data" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x81555aa5, "i2c_smbus_write_i2c_block_data" },
	{ 0x80ca5026, "_bin2bcd" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7931933d, "i2c_smbus_write_byte_data" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x1c7db409, "i2c_smbus_read_byte_data" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cepson,rx8010");
MODULE_ALIAS("of:N*T*Cepson,rx8010C*");
MODULE_ALIAS("i2c:rx8010");

MODULE_INFO(srcversion, "5C26031F37BB97DE074C679");
