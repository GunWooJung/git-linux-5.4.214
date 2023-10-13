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
	{ 0x10825ed5, "sock_diag_put_meminfo" },
	{ 0xee2730b2, "from_kuid_munged" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x18350ef9, "sock_diag_unregister" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x24c4493b, "sock_diag_put_filterinfo" },
	{ 0x9abd0bb8, "sock_i_ino" },
	{ 0xc5156bf3, "fanout_mutex" },
	{ 0xbe92ed72, "skb_trim" },
	{ 0xcf431496, "sock_diag_register" },
	{ 0x839e2ef7, "nla_put" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x41804f72, "nla_reserve_nohdr" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf1dca5b6, "sock_diag_save_cookie" },
	{ 0xa6884eab, "__nlmsg_put" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x473afe6b, "sock_i_uid" },
	{ 0xfe87cdd0, "__netlink_dump_start" },
	{ 0x2e58bb1c, "netlink_net_capable" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "89ED3C935F6302E2A3F5B21");
