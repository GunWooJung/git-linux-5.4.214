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
	{ 0x2d3385d3, "system_wq" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xb850330c, "kernel_sendmsg" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xad2b26aa, "send_sig" },
	{ 0xb23a5d90, "queue_ch_frame" },
	{ 0x8629086e, "sock_release" },
	{ 0xfab3a2cc, "sock_recvmsg" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xadcde5b0, "recv_Dchannel" },
	{ 0x999e8297, "vfree" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0xabaae129, "kthread_create_on_node" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xbe92ed72, "skb_trim" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0xaf7d0f48, "current_task" },
	{ 0xc5850110, "printk" },
	{ 0x87a17f30, "iov_iter_kvec" },
	{ 0xa4217a75, "mISDN_unregister_device" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x24d273d1, "add_timer" },
	{ 0x8df92f66, "memchr_inv" },
	{ 0xbd1ca3bd, "mISDN_initbchannel" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xdf46d4f1, "module_put" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x92f8784b, "__alloc_skb" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xab37f21b, "wake_up_process" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x6df1aaf1, "kernel_sigaction" },
	{ 0x6eed2630, "param_array_ops" },
	{ 0x213cb3a2, "mISDN_freebchannel" },
	{ 0x5b70e77a, "mISDN_register_device" },
	{ 0xa2730dc8, "sock_create" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x29361773, "complete" },
	{ 0x2012c4cc, "mISDN_initdchannel" },
	{ 0xad263612, "consume_skb" },
	{ 0xa5fcc0cb, "mISDN_freedchannel" },
	{ 0xf89bc02c, "skb_put" },
	{ 0x1cd6f316, "param_ops_uint" },
	{ 0x6d71399f, "try_module_get" },
};

MODULE_INFO(depends, "mISDN_core");


MODULE_INFO(srcversion, "72061ED7AE1F1F7FA647564");
