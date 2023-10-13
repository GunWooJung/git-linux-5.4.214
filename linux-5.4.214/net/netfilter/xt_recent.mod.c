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
	{ 0x1cd6f316, "param_ops_uint" },
	{ 0x4a2b4aef, "seq_release_private" },
	{ 0x21ba44a5, "seq_read" },
	{ 0xda2b5d09, "seq_lseek" },
	{ 0x9eede0c5, "xt_unregister_matches" },
	{ 0xc21708cd, "unregister_pernet_subsys" },
	{ 0x110fcf5f, "xt_register_matches" },
	{ 0x1709a80e, "register_pernet_subsys" },
	{ 0xac5fcec0, "in4_pton" },
	{ 0x609bcd98, "in6_pton" },
	{ 0x4841bdee, "strnchr" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x7369dd1b, "proc_mkdir" },
	{ 0xcbaa4b74, "remove_proc_entry" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xc5850110, "printk" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x7aa1756e, "kvfree" },
	{ 0xa7264a47, "proc_set_user" },
	{ 0x609c0d36, "proc_create_data" },
	{ 0x132d1553, "make_kgid" },
	{ 0x8de894fe, "make_kuid" },
	{ 0xd4ce891e, "init_user_ns" },
	{ 0xe914e41e, "strcpy" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0xf105fed9, "__do_once_done" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x18e60984, "__do_once_start" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x48012e28, "xt_check_proc_name" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0x37a0cba, "kfree" },
	{ 0x3885862f, "seq_putc" },
	{ 0x58f84c2d, "seq_printf" },
	{ 0x135c3d16, "PDE_DATA" },
	{ 0x7f5fa321, "__seq_open_private" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "x_tables");


MODULE_INFO(srcversion, "97DD8FA54CE0111E20ECBDA");
