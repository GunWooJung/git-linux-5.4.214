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
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x6a9466ef, "skb_queue_head" },
	{ 0x3b89b540, "skb_dequeue" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xad263612, "consume_skb" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xf89bc02c, "skb_put" },
	{ 0xed388c3b, "atm_alloc_charge" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xb526d94f, "dma_direct_unmap_page" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x56470118, "__warn_printk" },
	{ 0xecadd7c7, "dev_driver_string" },
	{ 0x6dd853a6, "dma_direct_map_page" },
	{ 0x9fe59f14, "dma_ops" },
	{ 0x8e0ddd54, "__dev_kfree_skb_irq" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0xc502ef3, "skb_queue_tail" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x4302d0eb, "free_pages" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xf09b5d9a, "get_zeroed_page" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0x8338fd8, "pci_set_master" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x80625e68, "suni_init" },
	{ 0x37a24b11, "pci_read_config_byte" },
	{ 0x928d7386, "pci_write_config_byte" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0xd712aabe, "pci_write_config_word" },
	{ 0xcafebbff, "atm_dev_register" },
	{ 0x532b1a31, "dma_alloc_attrs" },
	{ 0x91e0d49, "dma_set_coherent_mask" },
	{ 0xf2d62900, "dma_set_mask" },
	{ 0xf51bf8b0, "pci_enable_device" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0x1000e51, "schedule" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0xaf7d0f48, "current_task" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xc6cbbc89, "capable" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0xf49bc67a, "atm_pcr_goal" },
	{ 0xa4191c0b, "memset_io" },
	{ 0xc5850110, "printk" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x2cc2d52d, "vcc_hash" },
	{ 0x32ae5741, "_raw_read_lock" },
	{ 0x44c6e633, "vcc_sklist_lock" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xc5846169, "pci_disable_device" },
	{ 0x37a0cba, "kfree" },
	{ 0x5c75775f, "dma_free_attrs" },
	{ 0x72f006c4, "atm_dev_deregister" },
	{ 0xedc03953, "iounmap" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "atm,suni");

MODULE_ALIAS("pci:v0000111Ad00000000sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000111Ad00000002sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "5E5669F7A801E3A7F6AB79C");
