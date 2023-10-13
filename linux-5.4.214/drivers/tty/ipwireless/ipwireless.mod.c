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
	{ 0x2f2c95c4, "flush_work" },
	{ 0xc9c33c90, "pcmcia_request_irq" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x85bd1608, "__request_region" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xb55067d3, "pcmcia_enable_device" },
	{ 0x765395c3, "param_ops_int" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x77358855, "iomem_resource" },
	{ 0x2f2c7efb, "ppp_unit_number" },
	{ 0xfd864eaf, "pcmcia_register_driver" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0x8e332092, "pcmcia_reset_card" },
	{ 0x540ad596, "tty_register_driver" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xcb9b087e, "ppp_unregister_channel" },
	{ 0xc41754ef, "put_tty_driver" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x32dce1b0, "pcmcia_request_io" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x591cd494, "tty_set_operations" },
	{ 0x120103ea, "__netdev_alloc_skb" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xfa9ea168, "ppp_output_wakeup" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x6b38e454, "tty_port_register_device" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0x94e7a2a2, "tty_port_init" },
	{ 0xc446ef36, "pcmcia_request_window" },
	{ 0x8760c74e, "tty_insert_flip_string_fixed_flag" },
	{ 0xe5dcda24, "tty_port_destroy" },
	{ 0xd523d85d, "skb_push" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x72a2e4be, "tty_vhangup" },
	{ 0xbed6138e, "skb_pull" },
	{ 0x6af95259, "pcmcia_loop_config" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0xd5198241, "tty_unregister_device" },
	{ 0x67b27ec1, "tty_std_termios" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xd8e6cdd2, "kfree_skb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x1035c7c2, "__release_region" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xbec2fa3d, "tty_unregister_driver" },
	{ 0x61178382, "tty_hangup" },
	{ 0x25aba9cb, "tty_perform_flush" },
	{ 0x7b4446ab, "__tty_alloc_driver" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xbb9ab629, "ppp_input" },
	{ 0xcbd5b45e, "pcmcia_map_mem_page" },
	{ 0xedc03953, "iounmap" },
	{ 0xb9262523, "pcmcia_unregister_driver" },
	{ 0xcb763749, "tty_flip_buffer_push" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xaf87d51c, "ppp_register_channel" },
	{ 0x709ba1c2, "ppp_channel_index" },
	{ 0x19c85322, "pcmcia_disable_device" },
	{ 0xf89bc02c, "skb_put" },
	{ 0x13c49cc2, "_copy_from_user" },
};

MODULE_INFO(depends, "pcmcia,pcmcia_core");

MODULE_ALIAS("pcmcia:m02F2c0100f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m02F2c0200f*fn*pfn*pa*pb*pc*pd*");

MODULE_INFO(srcversion, "1A8E918373F3B472E755D9A");
