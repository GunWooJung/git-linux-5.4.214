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
	{ 0x754d539c, "strlen" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x18392016, "snd_mpu401_uart_new" },
	{ 0x68a41536, "param_ops_bool" },
	{ 0x56cf6cd9, "platform_device_register_full" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x76cff281, "snd_card_disconnect" },
	{ 0x19af53eb, "__platform_driver_register" },
	{ 0xa317608d, "pnp_unregister_driver" },
	{ 0x131e5561, "param_ops_charp" },
	{ 0xc5850110, "printk" },
	{ 0xd56b098d, "snd_card_free_when_closed" },
	{ 0x74e831b6, "platform_device_unregister" },
	{ 0x5b641e8c, "pnp_register_driver" },
	{ 0x26be0b39, "snd_card_new" },
	{ 0x20c79ab5, "pnp_get_resource" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x6eed2630, "param_array_ops" },
	{ 0x35a218ab, "param_ops_long" },
	{ 0x3d549164, "snd_card_free" },
	{ 0x2c3bd8c1, "snd_card_register" },
	{ 0xa99a62a3, "platform_driver_unregister" },
};

MODULE_INFO(depends, "snd-mpu401-uart,snd");

MODULE_ALIAS("pnp:dPNPb006*");
MODULE_ALIAS("acpi*:PNPB006:*");

MODULE_INFO(srcversion, "3D9F21361544FBFB7BC225F");
