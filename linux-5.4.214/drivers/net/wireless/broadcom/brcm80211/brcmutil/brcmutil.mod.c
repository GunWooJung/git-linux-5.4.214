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
	{ 0x6a9466ef, "skb_queue_head" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x56470118, "__warn_printk" },
	{ 0xa6a40b7a, "__dev_kfree_skb_any" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xe677827a, "skb_unlink" },
	{ 0x120103ea, "__netdev_alloc_skb" },
	{ 0xb61a4cdf, "skb_dequeue_tail" },
	{ 0xfb578fc5, "memset" },
	{ 0x593c1bac, "__x86_indirect_thunk_rbx" },
	{ 0xc502ef3, "skb_queue_tail" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x3b89b540, "skb_dequeue" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xf89bc02c, "skb_put" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "B3F119D70FB75A37C52A13E");
