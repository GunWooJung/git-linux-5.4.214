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
	{ 0xecadd7c7, "dev_driver_string" },
	{ 0x65e33f30, "fwnode_handle_put" },
	{ 0x12a38747, "usleep_range" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x94a09154, "input_register_device" },
	{ 0x51765820, "devm_request_threaded_irq" },
	{ 0xf9a482f9, "msleep" },
	{ 0xc1889514, "regmap_update_bits_base" },
	{ 0xe8c403, "device_get_next_child_node" },
	{ 0x76f87430, "fwnode_property_read_u32_array" },
	{ 0xa0e37b89, "device_get_child_node_count" },
	{ 0xd111bb59, "_dev_info" },
	{ 0xb8b5aa45, "__devm_regmap_init_i2c" },
	{ 0x2cc132c2, "devm_input_allocate_device" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0x66c54ff1, "input_event" },
	{ 0xb352177e, "find_first_bit" },
	{ 0x36f1a2b6, "regmap_read" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x904a8908, "regmap_write" },
	{ 0xfcec0987, "enable_irq" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cmicrochip,qt1050");
MODULE_ALIAS("of:N*T*Cmicrochip,qt1050C*");

MODULE_INFO(srcversion, "B9B75C146A1BE4A230C1D47");
