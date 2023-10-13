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
	{ 0x981efe92, "mpt_deregister" },
	{ 0x610b257e, "mpt_reset_deregister" },
	{ 0x74a0134a, "mpt_device_driver_deregister" },
	{ 0x2529205, "mpt_device_driver_register" },
	{ 0xf2d1bc1c, "mpt_reset_register" },
	{ 0x7e50fed2, "mpt_register" },
	{ 0xa6a40b7a, "__dev_kfree_skb_any" },
	{ 0xc1d7d8bf, "dma_direct_sync_single_for_device" },
	{ 0x3bd23fd8, "dma_direct_sync_single_for_cpu" },
	{ 0x69acdf38, "memcpy" },
	{ 0xf89bc02c, "skb_put" },
	{ 0x8e0ddd54, "__dev_kfree_skb_irq" },
	{ 0x54496b4, "schedule_timeout_interruptible" },
	{ 0xe6c1e126, "mpt_event_deregister" },
	{ 0x9e32efee, "mpt_event_register" },
	{ 0x37a0cba, "kfree" },
	{ 0x96ad65c8, "mpt_free_msg_frame" },
	{ 0xb526d94f, "dma_direct_unmap_page" },
	{ 0x120103ea, "__netdev_alloc_skb" },
	{ 0xad263612, "consume_skb" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x63616516, "netif_rx" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x56470118, "__warn_printk" },
	{ 0xecadd7c7, "dev_driver_string" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x6dd853a6, "dma_direct_map_page" },
	{ 0x9fe59f14, "dma_ops" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0xbed6138e, "skb_pull" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xc21596aa, "register_netdev" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x48775c16, "alloc_fcdev" },
	{ 0xc5850110, "printk" },
	{ 0xe55b100e, "mpt_put_msg_frame" },
	{ 0xb2279e87, "mpt_get_msg_frame" },
	{ 0x838e8353, "netif_tx_wake_queue" },
	{ 0x2816d12d, "free_netdev" },
	{ 0x8acf4ec6, "unregister_netdev" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xeb233a45, "__kmalloc" },
};

MODULE_INFO(depends, "mptbase");


MODULE_INFO(srcversion, "48A454EAB80C0F2D811C2DA");
