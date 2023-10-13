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
	{ 0x7c2b6899, "can_change_mtu" },
	{ 0xa99a62a3, "platform_driver_unregister" },
	{ 0x19af53eb, "__platform_driver_register" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xfdeb1a62, "register_candev" },
	{ 0x1e6d26a8, "strstr" },
	{ 0x5a921311, "strncmp" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0xd072dc20, "platform_get_resource" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x7e73a43b, "platform_get_irq" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xc61bacc3, "netif_napi_add" },
	{ 0xf4799c0a, "alloc_candev_mqs" },
	{ 0xf281bc91, "napi_complete_done" },
	{ 0x2899f099, "netif_receive_skb" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xffcdd8b2, "alloc_can_skb" },
	{ 0xb0e602eb, "memmove" },
	{ 0x29361773, "complete" },
	{ 0xe8b1a3d2, "netdev_warn" },
	{ 0xba5c46f2, "can_bus_off" },
	{ 0x3b89b540, "skb_dequeue" },
	{ 0x63616516, "netif_rx" },
	{ 0x334a5ba9, "alloc_can_err_skb" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x44e7928f, "open_candev" },
	{ 0x8acc823e, "close_candev" },
	{ 0xf89e6197, "skb_queue_purge" },
	{ 0x838e8353, "netif_tx_wake_queue" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xeb1919a4, "netdev_info" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x32c6e9b0, "free_candev" },
	{ 0xedc03953, "iounmap" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x23a77175, "napi_disable" },
	{ 0x8acf4ec6, "unregister_netdev" },
	{ 0x21d3b421, "__dynamic_netdev_dbg" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xb9e7429c, "memcpy_toio" },
	{ 0xc502ef3, "skb_queue_tail" },
	{ 0xad263612, "consume_skb" },
	{ 0xba2c8b02, "sock_efree" },
	{ 0x30313dd3, "skb_clone" },
	{ 0x7d628444, "memcpy_fromio" },
	{ 0xd8e6cdd2, "kfree_skb" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x96848186, "scnprintf" },
	{ 0xf9e91146, "__napi_schedule" },
	{ 0xa085cc86, "napi_schedule_prep" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x216cc777, "netdev_err" },
	{ 0xf9a482f9, "msleep" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xf10de535, "ioread8" },
	{ 0x848d372e, "iowrite8" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "can-dev");


MODULE_INFO(srcversion, "70412AA9E88F94398A45A60");
