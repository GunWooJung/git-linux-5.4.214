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
	{ 0xa52ae5eb, "alloc_pages_current" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x94589e9e, "dma_direct_unmap_sg" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x81188c30, "match_string" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xeca6138d, "intel_th_driver_unregister" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x5c42b5ca, "no_llseek" },
	{ 0xcfef95e2, "intel_th_trace_disable" },
	{ 0x56470118, "__warn_printk" },
	{ 0x87b8798d, "sg_next" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x1c5c9cda, "intel_th_driver_register" },
	{ 0x5c75775f, "dma_free_attrs" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xebb33591, "nonseekable_open" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0xaed06536, "_dev_warn" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xe7b00dfb, "__x86_indirect_thunk_r13" },
	{ 0x532b1a31, "dma_alloc_attrs" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xce8b1878, "__x86_indirect_thunk_r14" },
	{ 0xa07a37f0, "memchr" },
	{ 0x9eacf8a5, "kstrndup" },
	{ 0x3a2f6702, "sg_alloc_table" },
	{ 0x2c51cbe, "split_page" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x7e0826e2, "atomic_dec_and_mutex_lock" },
	{ 0xdf46d4f1, "module_put" },
	{ 0xc6cbbc89, "capable" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x7ea3fb3a, "__free_pages" },
	{ 0xb665f56d, "__cachemode2pte_tbl" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x41041b8f, "intel_th_trace_enable" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x37a0cba, "kfree" },
	{ 0x6a9a5a6c, "dma_direct_map_sg" },
	{ 0x8281b36, "devm_ioremap" },
	{ 0x96848186, "scnprintf" },
	{ 0x91607d95, "set_memory_wb" },
	{ 0x7f5b4fe4, "sg_free_table" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x3e95082d, "vmalloc_to_page" },
	{ 0x4a453f53, "iowrite32" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x9fe59f14, "dma_ops" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xf3827964, "intel_th_trace_switch" },
	{ 0x6d71399f, "try_module_get" },
	{ 0xe484e35f, "ioread32" },
	{ 0xc8dcc62a, "krealloc" },
	{ 0xab65ed80, "set_memory_uc" },
};

MODULE_INFO(depends, "intel_th");


MODULE_INFO(srcversion, "1567594CE2D4F6729F30CDD");
