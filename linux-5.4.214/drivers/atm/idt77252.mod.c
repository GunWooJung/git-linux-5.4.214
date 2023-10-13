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
	{ 0x1cd6f316, "param_ops_uint" },
	{ 0x8b95e7b, "pci_unregister_driver" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0xbed6138e, "skb_pull" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x3bd23fd8, "dma_direct_sync_single_for_cpu" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0xbe92ed72, "skb_trim" },
	{ 0x69acdf38, "memcpy" },
	{ 0x44c12534, "atm_charge" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0xc1d7d8bf, "dma_direct_sync_single_for_device" },
	{ 0x6a9466ef, "skb_queue_head" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x3b89b540, "skb_dequeue" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x6dd853a6, "dma_direct_map_page" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x56470118, "__warn_printk" },
	{ 0xecadd7c7, "dev_driver_string" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x120103ea, "__netdev_alloc_skb" },
	{ 0x5098caed, "dev_get_by_name" },
	{ 0x721c9d1f, "init_net" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x928d7386, "pci_write_config_byte" },
	{ 0x37a24b11, "pci_read_config_byte" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xc5846169, "pci_disable_device" },
	{ 0x80625e68, "suni_init" },
	{ 0xcafebbff, "atm_dev_register" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xd712aabe, "pci_write_config_word" },
	{ 0xb0de39d3, "pci_read_config_word" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x91e0d49, "dma_set_coherent_mask" },
	{ 0xf2d62900, "dma_set_mask" },
	{ 0xf51bf8b0, "pci_enable_device" },
	{ 0x532b1a31, "dma_alloc_attrs" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x37a0cba, "kfree" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xedc03953, "iounmap" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x5c75775f, "dma_free_attrs" },
	{ 0x999e8297, "vfree" },
	{ 0xad263612, "consume_skb" },
	{ 0x72f006c4, "atm_dev_deregister" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xb526d94f, "dma_direct_unmap_page" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x9fe59f14, "dma_ops" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0xf49bc67a, "atm_pcr_goal" },
	{ 0x24d273d1, "add_timer" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xf89bc02c, "skb_put" },
	{ 0xc502ef3, "skb_queue_tail" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xc5850110, "printk" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "atm,suni");

MODULE_ALIAS("pci:v0000111Dd00000003sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "A9EC8E88A89A6E3B79FACDD");
