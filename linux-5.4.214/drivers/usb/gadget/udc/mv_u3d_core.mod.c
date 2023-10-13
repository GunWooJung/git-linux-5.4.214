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
	{ 0xa99a62a3, "platform_driver_unregister" },
	{ 0x19af53eb, "__platform_driver_register" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0x6dd853a6, "dma_direct_map_page" },
	{ 0x56470118, "__warn_printk" },
	{ 0xecadd7c7, "dev_driver_string" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x678b96ec, "dma_pool_alloc" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xc5f8bce8, "usb_gadget_map_request" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xe6e46e97, "usb_add_gadget_udc" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x9166fada, "strncpy" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x4a2315f5, "usb_ep_set_maxpacket_limit" },
	{ 0xd072dc20, "platform_get_resource" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x5dfee392, "dma_pool_create" },
	{ 0x532b1a31, "dma_alloc_attrs" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x7a47b126, "platform_get_resource_byname" },
	{ 0x41187327, "clk_get" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0xb526d94f, "dma_direct_unmap_page" },
	{ 0x9fe59f14, "dma_ops" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xf0979a46, "usb_gadget_giveback_request" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x710ef7fc, "usb_gadget_unmap_request" },
	{ 0x2f7754a8, "dma_pool_free" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x2e1ca751, "clk_put" },
	{ 0xedc03953, "iounmap" },
	{ 0x5c75775f, "dma_free_attrs" },
	{ 0xb5aa7165, "dma_pool_destroy" },
	{ 0xb3090fe7, "usb_del_gadget_udc" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x4a453f53, "iowrite32" },
	{ 0xe484e35f, "ioread32" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x815588a6, "clk_enable" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x37a0cba, "kfree" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "udc-core");


MODULE_INFO(srcversion, "499D22B07F1EA25C0C90779");
