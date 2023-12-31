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
	{ 0x765395c3, "param_ops_int" },
	{ 0x8acf4ec6, "unregister_netdev" },
	{ 0x2816d12d, "free_netdev" },
	{ 0x4302d0eb, "free_pages" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xc21596aa, "register_netdev" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x1000e51, "schedule" },
	{ 0x72b243d4, "free_dma" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x7054a3e4, "request_dma" },
	{ 0xf9a482f9, "msleep" },
	{ 0x6a5cb5ee, "__get_free_pages" },
	{ 0xab600421, "probe_irq_off" },
	{ 0xb121390a, "probe_irq_on" },
	{ 0x1035c7c2, "__release_region" },
	{ 0x85bd1608, "__request_region" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0x40e02a2d, "alloc_ltalkdev" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xad263612, "consume_skb" },
	{ 0x24d273d1, "add_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x63616516, "netif_rx" },
	{ 0xbed6138e, "skb_pull" },
	{ 0xf89bc02c, "skb_put" },
	{ 0x120103ea, "__netdev_alloc_skb" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x175e33fb, "dma_spin_lock" },
	{ 0x69acdf38, "memcpy" },
	{ 0xc5850110, "printk" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "appletalk");


MODULE_INFO(srcversion, "FB5F580CB9BF4A5EFEF1B25");
