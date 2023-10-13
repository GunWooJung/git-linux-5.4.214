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
	{ 0xaed06536, "_dev_warn" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x72914782, "dma_async_device_register" },
	{ 0x12a38747, "usleep_range" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x91e0d49, "dma_set_coherent_mask" },
	{ 0xf2d62900, "dma_set_mask" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0x51765820, "devm_request_threaded_irq" },
	{ 0x7e73a43b, "platform_get_irq" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xbdf15930, "dma_async_tx_descriptor_init" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x8a1d6948, "_dev_notice" },
	{ 0xe09a762, "dma_async_device_unregister" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x7cf7aeda, "devm_free_irq" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x189a3237, "devm_ioremap_nocache" },
	{ 0xc7c073b7, "__devm_request_region" },
	{ 0x77358855, "iomem_resource" },
	{ 0x7a47b126, "platform_get_resource_byname" },
	{ 0x4a453f53, "iowrite32" },
	{ 0xe484e35f, "ioread32" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x87b8798d, "sg_next" },
	{ 0x37a0cba, "kfree" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "2A231D62ACE7DC22D04CEC5");
