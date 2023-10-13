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
	{ 0x5c42b5ca, "no_llseek" },
	{ 0x68a41536, "param_ops_bool" },
	{ 0x35775925, "misc_deregister" },
	{ 0x4b2e0ffe, "misc_register" },
	{ 0x56601480, "hci_recv_frame" },
	{ 0xbed6138e, "skb_pull" },
	{ 0xc4a9f597, "_copy_from_iter_full" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xebb33591, "nonseekable_open" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x7b8c32f1, "bt_err" },
	{ 0xf89bc02c, "skb_put" },
	{ 0xa4ac9b92, "hci_register_dev" },
	{ 0x64f9650a, "hci_alloc_dev" },
	{ 0x92f8784b, "__alloc_skb" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x6a9466ef, "skb_queue_head" },
	{ 0xd8e6cdd2, "kfree_skb" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x1000e51, "schedule" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x3b89b540, "skb_dequeue" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xc502ef3, "skb_queue_tail" },
	{ 0xd523d85d, "skb_push" },
	{ 0x37a0cba, "kfree" },
	{ 0x8e8b23c5, "hci_free_dev" },
	{ 0xc1716c35, "hci_unregister_dev" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xf89e6197, "skb_queue_purge" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "bluetooth");


MODULE_INFO(srcversion, "190B54CC3BC7791EF1FEA69");
