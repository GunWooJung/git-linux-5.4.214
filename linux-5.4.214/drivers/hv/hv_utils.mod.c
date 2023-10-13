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
	{ 0x4f84b8cc, "cn_add_callback" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x97adb487, "utf8s_to_utf16s" },
	{ 0x754d539c, "strlen" },
	{ 0xabf32f29, "utf16s_to_utf8s" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xa715d2d1, "__vmbus_driver_register" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0xff5a8cfe, "cn_del_callback" },
	{ 0xce8c1edb, "ptp_clock_unregister" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0x4b2e0ffe, "misc_register" },
	{ 0x1e1e140e, "ns_to_timespec64" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x46a417ca, "vmbus_proto_version" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x825b9d0d, "ptp_clock_register" },
	{ 0x8a4832a3, "vmbus_open" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xa6c4041, "cn_netlink_send" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x56256e8a, "orderly_poweroff" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xc006e383, "vmbus_recvpacket" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xbcc99da1, "vmbus_close" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x914aa0b7, "hyperv_cs" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x8fc8ce2b, "vmbus_prep_negotiate_resp" },
	{ 0x469d6b8b, "vmbus_sendpacket" },
	{ 0x7a95e5ae, "do_settimeofday64" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x29361773, "complete" },
	{ 0x35775925, "misc_deregister" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x6228c21f, "smp_call_function_single" },
	{ 0x72fc91c0, "vmbus_driver_unregister" },
};

MODULE_INFO(depends, "hv_vmbus");

MODULE_ALIAS("vmbus:31600b0e13523449818b38d90ced39db");
MODULE_ALIAS("vmbus:30e62795aed07b49adcee80ab0175caf");
MODULE_ALIAS("vmbus:394f16571591784eab55382f3bd5422d");
MODULE_ALIAS("vmbus:e7f4a0a9455a964db8278a841e8c03e6");
MODULE_ALIAS("vmbus:292efa3523ea364296ae3a6ebacba440");
MODULE_ALIAS("vmbus:e34bd134e4dec8419ae76b174977c192");

MODULE_INFO(srcversion, "349018F8C543C6D4CDECFAA");
