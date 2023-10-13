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
	{ 0x2b708d10, "hid_unregister_driver" },
	{ 0xb27fe432, "__hid_register_driver" },
	{ 0xc6c38eb0, "hid_hw_start" },
	{ 0x49bdb973, "hid_open_report" },
	{ 0x3232dfdb, "usb_hid_driver" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x1079fc0, "usb_ifnum_to_if" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "hid,usbhid");

MODULE_ALIAS("hid:b0003g*v000004D9p0000A055");

MODULE_INFO(srcversion, "B7BC60A2196C923DF242690");
