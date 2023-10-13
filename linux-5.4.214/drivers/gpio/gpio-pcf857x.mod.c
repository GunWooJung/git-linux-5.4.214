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
	{ 0xd111bb59, "_dev_info" },
	{ 0xaed06536, "_dev_warn" },
	{ 0x60cea88, "gpiochip_set_nested_irqchip" },
	{ 0x51765820, "devm_request_threaded_irq" },
	{ 0x6cb782a, "gpiochip_irqchip_add_key" },
	{ 0x5b5d48c1, "handle_level_irq" },
	{ 0xe96d19e1, "devm_gpiochip_add_data" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x787bfb4b, "gpiochip_get_data" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0x549525ef, "handle_nested_irq" },
	{ 0x8f094d1b, "irq_find_mapping" },
	{ 0xb352177e, "find_first_bit" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x263ed23b, "__x86_indirect_thunk_r12" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xbca0b1e, "i2c_smbus_write_byte" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x4fc58c0c, "i2c_transfer_buffer_flags" },
	{ 0x377a9732, "i2c_smbus_read_byte" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("i2c:pcf8574");
MODULE_ALIAS("i2c:pcf8574a");
MODULE_ALIAS("i2c:pca8574");
MODULE_ALIAS("i2c:pca9670");
MODULE_ALIAS("i2c:pca9672");
MODULE_ALIAS("i2c:pca9674");
MODULE_ALIAS("i2c:pcf8575");
MODULE_ALIAS("i2c:pca8575");
MODULE_ALIAS("i2c:pca9671");
MODULE_ALIAS("i2c:pca9673");
MODULE_ALIAS("i2c:pca9675");
MODULE_ALIAS("i2c:max7328");
MODULE_ALIAS("i2c:max7329");

MODULE_INFO(srcversion, "8E54FFBADDF071DDB246E87");
