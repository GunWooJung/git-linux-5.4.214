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
	{ 0xabb732f8, "team_modeop_port_change_dev_addr" },
	{ 0x2cf8f6ed, "team_modeop_port_enter" },
	{ 0x64078dd6, "team_mode_unregister" },
	{ 0x556edea3, "team_mode_register" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xbf23496d, "netpoll_send_skb_on_dev" },
	{ 0xba505b9b, "dev_queue_xmit" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x30313dd3, "skb_clone" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "team");


MODULE_INFO(srcversion, "92CCB13B374D9E575910D1C");
