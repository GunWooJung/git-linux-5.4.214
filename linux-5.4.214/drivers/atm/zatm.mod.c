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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xed93c0b3, "module_layout" },
	{ 0xf354855a, "__pci_register_driver" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x5c75775f, "dma_free_attrs" },
	{ 0x532b1a31, "dma_alloc_attrs" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xed71544c, "uPD98402_init" },
	{ 0xd712aabe, "pci_write_config_word" },
	{ 0xb0de39d3, "pci_read_config_word" },
	{ 0x91e0d49, "dma_set_coherent_mask" },
	{ 0x72f006c4, "atm_dev_deregister" },
	{ 0xc5846169, "pci_disable_device" },
	{ 0x982ccbd5, "pci_release_regions" },
	{ 0xf2d62900, "dma_set_mask" },
	{ 0x4a5eb426, "pci_request_regions" },
	{ 0xf51bf8b0, "pci_enable_device" },
	{ 0xcafebbff, "atm_dev_register" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xad263612, "consume_skb" },
	{ 0x6a9466ef, "skb_queue_head" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x3b89b540, "skb_dequeue" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x44c12534, "atm_charge" },
	{ 0xe677827a, "skb_unlink" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0x8e0ddd54, "__dev_kfree_skb_irq" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xd0c1e622, "pci_read_config_dword" },
	{ 0xd0bb4ec1, "pci_write_config_dword" },
	{ 0x92f8784b, "__alloc_skb" },
	{ 0xf89e6197, "skb_queue_purge" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x1000e51, "schedule" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x37a0cba, "kfree" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0xc6cbbc89, "capable" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xc502ef3, "skb_queue_tail" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xc5850110, "printk" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "uPD98402,atm");

MODULE_ALIAS("pci:v00001193d00000001sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001193d00000002sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "F794EAC11D5D62AEBB113A3");
