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
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xc21708cd, "unregister_pernet_subsys" },
	{ 0xc8dbe1c6, "xt_unregister_target" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0xa8ae0069, "xt_register_target" },
	{ 0x1709a80e, "register_pernet_subsys" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xedca43ba, "nf_ct_netns_get" },
	{ 0x609c0d36, "proc_create_data" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xe914e41e, "strcpy" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x11f3e50e, "nf_ct_netns_put" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x5e06bc5c, "refcount_dec_and_lock" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x5cb6526b, "skb_copy_bits" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0x43fbceea, "seq_release" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xf13e34, "seq_open" },
	{ 0xc5850110, "printk" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x7369dd1b, "proc_mkdir" },
	{ 0xf6ab8207, "nf_register_net_hook" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0xb36c759, "nf_unregister_net_hook" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xe171eab3, "proc_remove" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x135c3d16, "PDE_DATA" },
	{ 0x3885862f, "seq_putc" },
	{ 0x58f84c2d, "seq_printf" },
	{ 0x5098caed, "dev_get_by_name" },
	{ 0x865f6311, "dev_mc_add" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xd5e2ee54, "dev_mc_del" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x37a0cba, "kfree" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "x_tables,nf_conntrack");


MODULE_INFO(srcversion, "407AC287BD4A302AA1CAA86");
