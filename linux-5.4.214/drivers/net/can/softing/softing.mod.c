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
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0xfdeb1a62, "register_candev" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xa82f8d7f, "sysfs_remove_group" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x19af53eb, "__platform_driver_register" },
	{ 0x11546c58, "netdev_alert" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xba5c46f2, "can_bus_off" },
	{ 0x63616516, "netif_rx" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0xaed06536, "_dev_warn" },
	{ 0x8acc823e, "close_candev" },
	{ 0xf10de535, "ioread8" },
	{ 0x838e8353, "netif_tx_wake_queue" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0xaf7d0f48, "current_task" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc2107c52, "sysfs_create_group" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x5561600b, "dev_close" },
	{ 0xd072dc20, "platform_get_resource" },
	{ 0xf4799c0a, "alloc_candev_mqs" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x32c6e9b0, "free_candev" },
	{ 0x95888aef, "_dev_alert" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x7c2b6899, "can_change_mtu" },
	{ 0xd111bb59, "_dev_info" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x7be444ed, "unregister_candev" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0xffcdd8b2, "alloc_can_skb" },
	{ 0x12a38747, "usleep_range" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x848d372e, "iowrite8" },
	{ 0xd8e6cdd2, "kfree_skb" },
	{ 0xb9e7429c, "memcpy_toio" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x44e7928f, "open_candev" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x6a86bc1, "iowrite16" },
	{ 0x37a0cba, "kfree" },
	{ 0xedc03953, "iounmap" },
	{ 0x7d628444, "memcpy_fromio" },
	{ 0x80500894, "request_firmware" },
	{ 0xc5534d64, "ioread16" },
	{ 0x6008728e, "can_get_echo_skb" },
	{ 0xa99a62a3, "platform_driver_unregister" },
	{ 0x14cb8c87, "can_put_echo_skb" },
	{ 0x4a453f53, "iowrite32" },
	{ 0x5c9109de, "release_firmware" },
	{ 0xe484e35f, "ioread32" },
	{ 0xc8dcc62a, "krealloc" },
	{ 0xc1514a3b, "free_irq" },
};

MODULE_INFO(depends, "can-dev");


MODULE_INFO(srcversion, "653A055D3BBDAC5FB8DFCD8");
