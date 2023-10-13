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
	{ 0x74539d3e, "v4l2_ctrl_new_std" },
	{ 0x43ced180, "v4l2_ctrl_handler_init_class" },
	{ 0x470490db, "v4l2_i2c_subdev_init" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xeb72fd70, "v4l2_ctrl_subdev_log_status" },
	{ 0xc5850110, "printk" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7931933d, "i2c_smbus_write_byte_data" },
	{ 0x1c7db409, "i2c_smbus_read_byte_data" },
	{ 0x75a26f52, "v4l2_ctrl_handler_free" },
	{ 0x2f58b160, "v4l2_device_unregister_subdev" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "videodev");

MODULE_ALIAS("i2c:tw2804");

MODULE_INFO(srcversion, "1EB9C8DC7CDE99DA60E4FE7");
