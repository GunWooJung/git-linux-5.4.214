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
	{ 0xcbaa4b74, "remove_proc_entry" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x8acf4ec6, "unregister_netdev" },
	{ 0x3ce25513, "proc_create_seq_private" },
	{ 0x721c9d1f, "init_net" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x2816d12d, "free_netdev" },
	{ 0xc21596aa, "register_netdev" },
	{ 0xc6fb8710, "alloc_netdev_mqs" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x85bd1608, "__request_region" },
	{ 0x37a0cba, "kfree" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xc6cbbc89, "capable" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x5c9109de, "release_firmware" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x74e831b6, "platform_device_unregister" },
	{ 0x80500894, "request_firmware" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x56cf6cd9, "platform_device_register_full" },
	{ 0x63616516, "netif_rx" },
	{ 0xf89bc02c, "skb_put" },
	{ 0x120103ea, "__netdev_alloc_skb" },
	{ 0xa6a40b7a, "__dev_kfree_skb_any" },
	{ 0x69acdf38, "memcpy" },
	{ 0xc5850110, "printk" },
	{ 0x3b89b540, "skb_dequeue" },
	{ 0xad263612, "consume_skb" },
	{ 0x1035c7c2, "__release_region" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x4429c2ce, "ax25_ip_xmit" },
	{ 0xc502ef3, "skb_queue_tail" },
	{ 0xfeecd8f7, "ax25_header_ops" },
	{ 0xac93ae05, "ax25_bcast" },
	{ 0xaeb7451e, "ax25_defaddr" },
	{ 0xfda9581f, "prandom_u32" },
	{ 0x24d273d1, "add_timer" },
	{ 0x58f84c2d, "seq_printf" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "ax25");


MODULE_INFO(srcversion, "D5B305514C8D7305C65F38B");
