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
	{ 0x18350ef9, "sock_diag_unregister" },
	{ 0xcf431496, "sock_diag_register" },
	{ 0xb9518ae0, "smc_proto6" },
	{ 0xcce02c21, "smc_proto" },
	{ 0x32ae5741, "_raw_read_lock" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x9abd0bb8, "sock_i_ino" },
	{ 0xee2730b2, "from_kuid_munged" },
	{ 0x473afe6b, "sock_i_uid" },
	{ 0xbe92ed72, "skb_trim" },
	{ 0x839e2ef7, "nla_put" },
	{ 0xf1dca5b6, "sock_diag_save_cookie" },
	{ 0xa6884eab, "__nlmsg_put" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xfe87cdd0, "__netlink_dump_start" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "smc");


MODULE_INFO(srcversion, "87BD9A5BB12A255B36A9594");
