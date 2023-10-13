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
	{ 0xb5aa7165, "dma_pool_destroy" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x72914782, "dma_async_device_register" },
	{ 0xb66332fd, "vchan_init" },
	{ 0x51765820, "devm_request_threaded_irq" },
	{ 0x91e0d49, "dma_set_coherent_mask" },
	{ 0xf2d62900, "dma_set_mask" },
	{ 0x1e57910a, "devm_ioremap_resource" },
	{ 0xd072dc20, "platform_get_resource" },
	{ 0x7e73a43b, "platform_get_irq" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x685f7ee9, "vchan_tx_desc_free" },
	{ 0x4f1c0f20, "vchan_tx_submit" },
	{ 0xbdf15930, "dma_async_tx_descriptor_init" },
	{ 0x678b96ec, "dma_pool_alloc" },
	{ 0x87b8798d, "sg_next" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xff08ebd0, "vchan_find_desc" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x5dfee392, "dma_pool_create" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x493a44f3, "vchan_dma_desc_free_list" },
	{ 0x37a0cba, "kfree" },
	{ 0x2f7754a8, "dma_pool_free" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x7cf7aeda, "devm_free_irq" },
	{ 0xe09a762, "dma_async_device_unregister" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "EAED22479B116E9F26BC2EF");
