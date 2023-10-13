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
	{ 0x765395c3, "param_ops_int" },
	{ 0x875d03e0, "i2c_del_driver" },
	{ 0xb1a20db, "i2c_register_driver" },
	{ 0x3aa68d7a, "v4l2_find_dv_timings_cap" },
	{ 0xaf3d134, "v4l2_valid_dv_timings" },
	{ 0xc42da65d, "v4l2_async_register_subdev" },
	{ 0x470490db, "v4l2_i2c_subdev_init" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x998ce68c, "v4l2_async_unregister_subdev" },
	{ 0x8402862, "v4l2_print_dv_timings" },
	{ 0x1c7db409, "i2c_smbus_read_byte_data" },
	{ 0x922ecd29, "v4l2_enum_dv_timings_cap" },
	{ 0xc5850110, "printk" },
	{ 0x7931933d, "i2c_smbus_write_byte_data" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "v4l2-dv-timings,videodev");

MODULE_ALIAS("i2c:ths8200");

MODULE_INFO(srcversion, "B938532194C10E5A396C90B");
