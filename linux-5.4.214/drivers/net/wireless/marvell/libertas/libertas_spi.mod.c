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
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xdc8e8b19, "lbs_resume" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xf6dd8fef, "__spi_register_driver" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x4da8a4a3, "lbs_stop_card" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x120103ea, "__netdev_alloc_skb" },
	{ 0xdb70a8f7, "lbs_start_card" },
	{ 0xfb578fc5, "memset" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xc5850110, "printk" },
	{ 0x86f434e2, "driver_unregister" },
	{ 0x562b7d32, "lbs_queue_event" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x803ee7b5, "lbs_suspend" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x586583b8, "spi_sync" },
	{ 0xcaf1bb44, "lbs_remove_card" },
	{ 0xa70000e5, "lbs_process_rxed_packet" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x3bff3839, "lbs_host_to_card_done" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x9e010835, "lbs_add_card" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x216cc777, "netdev_err" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xc500f0b3, "lbs_get_firmware" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xad263612, "consume_skb" },
	{ 0xf89bc02c, "skb_put" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xae4dd985, "lbs_notify_command_response" },
};

MODULE_INFO(depends, "libertas");


MODULE_INFO(srcversion, "C0BA2ADDCC4065F2FBB2C6E");
