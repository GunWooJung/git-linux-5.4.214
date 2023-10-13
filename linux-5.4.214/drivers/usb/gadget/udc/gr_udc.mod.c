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
	{ 0x77ae495d, "usb_speed_string" },
	{ 0x51765820, "devm_request_threaded_irq" },
	{ 0xe6e46e97, "usb_add_gadget_udc" },
	{ 0x5dfee392, "dma_pool_create" },
	{ 0x7e73a43b, "platform_get_irq" },
	{ 0x1e57910a, "devm_ioremap_resource" },
	{ 0xd072dc20, "platform_get_resource" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x69acdf38, "memcpy" },
	{ 0xf0979a46, "usb_gadget_giveback_request" },
	{ 0x710ef7fc, "usb_gadget_unmap_request" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xf4b1bd78, "usb_gadget_set_state" },
	{ 0xb3090fe7, "usb_del_gadget_udc" },
	{ 0x5c75775f, "dma_free_attrs" },
	{ 0xb5aa7165, "dma_pool_destroy" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x532b1a31, "dma_alloc_attrs" },
	{ 0x4a2315f5, "usb_ep_set_maxpacket_limit" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0xc5f8bce8, "usb_gadget_map_request" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x678b96ec, "dma_pool_alloc" },
	{ 0x56470118, "__warn_printk" },
	{ 0x37a0cba, "kfree" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x2f7754a8, "dma_pool_free" },
	{ 0xe419bc99, "iowrite32be" },
	{ 0xfdb9b629, "ioread32be" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "udc-core");

MODULE_ALIAS("of:NGAISLER_USBDCT*");
MODULE_ALIAS("of:NGAISLER_USBDCT*C*");
MODULE_ALIAS("of:N01_021T*");
MODULE_ALIAS("of:N01_021T*C*");

MODULE_INFO(srcversion, "4352FA6EA073F2C98450A3E");
