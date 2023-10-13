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
	{ 0xbec2fa3d, "tty_unregister_driver" },
	{ 0xd238a319, "unregister_console" },
	{ 0x2d84602c, "register_console" },
	{ 0xe5dcda24, "tty_port_destroy" },
	{ 0xc41754ef, "put_tty_driver" },
	{ 0x540ad596, "tty_register_driver" },
	{ 0xcfcc78f6, "tty_port_link_device" },
	{ 0x591cd494, "tty_set_operations" },
	{ 0x67b27ec1, "tty_std_termios" },
	{ 0x94e7a2a2, "tty_port_init" },
	{ 0x7b4446ab, "__tty_alloc_driver" },
	{ 0x5d99c43a, "tty_port_open" },
	{ 0x27a62ab4, "tty_port_close" },
	{ 0x96821827, "tty_port_hangup" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "F5B253AB01C338BDF703B18");
