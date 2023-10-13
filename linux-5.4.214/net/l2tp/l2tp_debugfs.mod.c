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
	{ 0x21ba44a5, "seq_read" },
	{ 0xda2b5d09, "seq_lseek" },
	{ 0x5b1c5c13, "debugfs_remove_recursive" },
	{ 0xc5850110, "printk" },
	{ 0xd0a46a6a, "debugfs_create_file" },
	{ 0x7f3966fa, "debugfs_create_dir" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0xae37d3ad, "l2tp_session_get_nth" },
	{ 0x286f9614, "l2tp_session_free" },
	{ 0xeee76be1, "l2tp_tunnel_free" },
	{ 0xfd8db240, "l2tp_tunnel_get_nth" },
	{ 0x43fbceea, "seq_release" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x37a0cba, "kfree" },
	{ 0xe1ddc39c, "__put_net" },
	{ 0xf13e34, "seq_open" },
	{ 0x81ae5ce, "get_net_ns_by_pid" },
	{ 0xaf7d0f48, "current_task" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xe35ed617, "seq_puts" },
	{ 0xad10eb8, "_raw_read_unlock_bh" },
	{ 0x150e3657, "_raw_read_lock_bh" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x58f84c2d, "seq_printf" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "l2tp_core");


MODULE_INFO(srcversion, "0D249994897D4CD1857E1B3");
