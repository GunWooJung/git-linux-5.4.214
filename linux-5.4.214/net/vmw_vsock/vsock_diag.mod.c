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
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x9abd0bb8, "sock_i_ino" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xcf431496, "sock_diag_register" },
	{ 0x9bb6fd09, "vsock_connected_table" },
	{ 0x284e07d8, "vsock_bind_table" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf1dca5b6, "sock_diag_save_cookie" },
	{ 0xc92f7f50, "vsock_table_lock" },
	{ 0xa6884eab, "__nlmsg_put" },
	{ 0xfe87cdd0, "__netlink_dump_start" },
};

MODULE_INFO(depends, "vsock");


MODULE_INFO(srcversion, "B2C1B7CC7644E72B66D6647");
