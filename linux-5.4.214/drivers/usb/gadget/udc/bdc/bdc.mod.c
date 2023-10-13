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
	{ 0xb077e70a, "clk_unprepare" },
	{ 0x3b57f4f2, "phy_init" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x48186196, "devm_of_phy_get_by_index" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xc5f8bce8, "usb_gadget_map_request" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x815588a6, "clk_enable" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xf2d62900, "dma_set_mask" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xb3090fe7, "usb_del_gadget_udc" },
	{ 0xf0979a46, "usb_gadget_giveback_request" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x1e57910a, "devm_ioremap_resource" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x5c75775f, "dma_free_attrs" },
	{ 0xb5aa7165, "dma_pool_destroy" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x91e0d49, "dma_set_coherent_mask" },
	{ 0x19af53eb, "__platform_driver_register" },
	{ 0xf4b1bd78, "usb_gadget_set_state" },
	{ 0x4cd53649, "phy_power_off" },
	{ 0x710ef7fc, "usb_gadget_unmap_request" },
	{ 0xaed06536, "_dev_warn" },
	{ 0xfb578fc5, "memset" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0xe27a5479, "phy_power_on" },
	{ 0x532b1a31, "dma_alloc_attrs" },
	{ 0xd072dc20, "platform_get_resource" },
	{ 0x2f7754a8, "dma_pool_free" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x6275bdb0, "phy_exit" },
	{ 0xe6e46e97, "usb_add_gadget_udc" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x4a2315f5, "usb_ep_set_maxpacket_limit" },
	{ 0x678b96ec, "dma_pool_alloc" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x6164d63, "devm_clk_get" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x37a0cba, "kfree" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x7e73a43b, "platform_get_irq" },
	{ 0xa99a62a3, "platform_driver_unregister" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x5dfee392, "dma_pool_create" },
	{ 0x51765820, "devm_request_threaded_irq" },
};

MODULE_INFO(depends, "udc-core");


MODULE_INFO(srcversion, "863A064C799FAD4CAA24609");
