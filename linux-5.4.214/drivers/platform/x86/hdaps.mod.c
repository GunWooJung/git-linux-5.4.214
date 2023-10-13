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
	{ 0xc964a580, "input_unregister_polled_device" },
	{ 0x1035c7c2, "__release_region" },
	{ 0xa99a62a3, "platform_driver_unregister" },
	{ 0x74e831b6, "platform_device_unregister" },
	{ 0xa82f8d7f, "sysfs_remove_group" },
	{ 0xdcec59fc, "input_free_polled_device" },
	{ 0x4fb38246, "input_register_polled_device" },
	{ 0xd4419732, "input_set_abs_params" },
	{ 0x60915a18, "input_allocate_polled_device" },
	{ 0xc2107c52, "sysfs_create_group" },
	{ 0x56cf6cd9, "platform_device_register_full" },
	{ 0x19af53eb, "__platform_driver_register" },
	{ 0x85bd1608, "__request_region" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0xd4835ef8, "dmi_check_system" },
	{ 0x66c54ff1, "input_event" },
	{ 0xf9a482f9, "msleep" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xc5850110, "printk" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "input-polldev");


MODULE_INFO(srcversion, "075F6BB735854DDD3415C3E");
