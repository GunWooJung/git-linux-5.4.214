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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xed93c0b3, "module_layout" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x754d539c, "strlen" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x36870044, "rpmsg_unregister_device" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x2409a52c, "rpmsg_register_device" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xfd94814e, "complete_all" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xaed06536, "_dev_warn" },
	{ 0x8e17b3ae, "idr_destroy" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x91f44510, "idr_alloc_cyclic" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xdfce2a82, "mbox_request_channel" },
	{ 0xc5850110, "printk" },
	{ 0x9166fada, "strncpy" },
	{ 0x836f7252, "mbox_client_txdone" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xb8f11603, "idr_alloc" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x7665a95b, "idr_remove" },
	{ 0xc57c48a3, "idr_get_next" },
	{ 0x12a38747, "usleep_range" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xfddb53c8, "device_for_each_child" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x5a4e4713, "device_unregister" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x29361773, "complete" },
	{ 0x7c9533b4, "mbox_free_channel" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x20978fb9, "idr_find" },
	{ 0x51765820, "devm_request_threaded_irq" },
	{ 0x51bd55b5, "completion_done" },
	{ 0x415e1c09, "mbox_send_message" },
};

MODULE_INFO(depends, "rpmsg_core");


MODULE_INFO(srcversion, "81F1DA7F1AC2ECAC940197E");
