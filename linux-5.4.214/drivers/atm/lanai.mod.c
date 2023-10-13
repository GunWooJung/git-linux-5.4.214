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
	{ 0x8b95e7b, "pci_unregister_driver" },
	{ 0xf354855a, "__pci_register_driver" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x8c3253ec, "_raw_spin_trylock" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0xf89bc02c, "skb_put" },
	{ 0xed388c3b, "atm_alloc_charge" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0xf49bc67a, "atm_pcr_goal" },
	{ 0xf9a482f9, "msleep" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x6a9466ef, "skb_queue_head" },
	{ 0x3b89b540, "skb_dequeue" },
	{ 0xa16c8613, "_raw_read_unlock_irqrestore" },
	{ 0xc502ef3, "skb_queue_tail" },
	{ 0x736b5662, "_raw_read_lock_irqsave" },
	{ 0xa6a40b7a, "__dev_kfree_skb_any" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x69acdf38, "memcpy" },
	{ 0x24d273d1, "add_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x40a9b349, "vzalloc" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x928d7386, "pci_write_config_byte" },
	{ 0x72f006c4, "atm_dev_deregister" },
	{ 0x91e0d49, "dma_set_coherent_mask" },
	{ 0xf2d62900, "dma_set_mask" },
	{ 0x8338fd8, "pci_set_master" },
	{ 0xf51bf8b0, "pci_enable_device" },
	{ 0xcafebbff, "atm_dev_register" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xd712aabe, "pci_write_config_word" },
	{ 0xb0de39d3, "pci_read_config_word" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0xe7b00dfb, "__x86_indirect_thunk_r13" },
	{ 0xb352177e, "find_first_bit" },
	{ 0x37a0cba, "kfree" },
	{ 0xedc03953, "iounmap" },
	{ 0x999e8297, "vfree" },
	{ 0xc5846169, "pci_disable_device" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xfb578fc5, "memset" },
	{ 0x532b1a31, "dma_alloc_attrs" },
	{ 0x5c75775f, "dma_free_attrs" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x32ae5741, "_raw_read_lock" },
	{ 0x44c6e633, "vcc_sklist_lock" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xc5850110, "printk" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "atm");

MODULE_ALIAS("pci:v0000111Ad00000003sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000111Ad00000005sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "1988DF026F489DB6FBEA4A7");
