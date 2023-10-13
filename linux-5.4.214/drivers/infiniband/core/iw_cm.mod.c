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
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x3755c3c9, "rdma_nl_register" },
	{ 0x984ce9bd, "__nla_parse" },
	{ 0x754d539c, "strlen" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xc57c6d80, "unregister_net_sysctl_table" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xa8181adf, "proc_dointvec" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xac7586bd, "rdma_nl_unicast_wait" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xa6a40b7a, "__dev_kfree_skb_any" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0xe7866372, "ib_modify_qp" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x120103ea, "__netdev_alloc_skb" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xc5850110, "printk" },
	{ 0x7543bf5c, "ibnl_put_attr" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x6626afca, "down" },
	{ 0x721c9d1f, "init_net" },
	{ 0x76f6869e, "rdma_nl_multicast" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x75a729a0, "rdma_nl_unregister" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xa8839921, "rdma_nl_unicast" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xcf2a6966, "up" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x1fc7a59b, "__nla_validate" },
	{ 0xad263612, "consume_skb" },
	{ 0xecee4256, "register_net_sysctl" },
	{ 0x2f6dc380, "ibnl_put_msg" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x92e683f5, "down_timeout" },
	{ 0xd542439, "__ipv6_addr_type" },
};

MODULE_INFO(depends, "ib_core");


MODULE_INFO(srcversion, "437B8F5D850D11C4CCB933A");
