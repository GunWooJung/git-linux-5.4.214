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
	{ 0xcc445ceb, "__sg_page_iter_dma_next" },
	{ 0x6b9a57ad, "ib_set_device_ops" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x339a5a9a, "pci_free_irq_vectors" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xf2d62900, "dma_set_mask" },
	{ 0xbbfe175a, "pci_get_slot" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0xc5846169, "pci_disable_device" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0xccd4c999, "__sg_page_iter_start" },
	{ 0x982ccbd5, "pci_release_regions" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x5c75775f, "dma_free_attrs" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x91e0d49, "dma_set_coherent_mask" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xcf4b6c7d, "ib_dealloc_device" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0x8338fd8, "pci_set_master" },
	{ 0xbf27fdc4, "pci_alloc_irq_vectors_affinity" },
	{ 0xaed06536, "_dev_warn" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x479c3c86, "find_next_zero_bit" },
	{ 0x925b1648, "ib_query_port" },
	{ 0x532b1a31, "dma_alloc_attrs" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x1879c565, "ib_umem_get" },
	{ 0xd827a719, "ib_device_set_netdev" },
	{ 0x6626afca, "down" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x9e615457, "ib_dispatch_event" },
	{ 0xf11543ff, "find_first_zero_bit" },
	{ 0xd111bb59, "_dev_info" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xc9a835aa, "ib_umem_page_count" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0xb665f56d, "__cachemode2pte_tbl" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x6aff694d, "ib_register_device" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xa33c0eac, "wait_for_completion_interruptible_timeout" },
	{ 0x1a8a180a, "ib_unregister_device" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x8b95e7b, "pci_unregister_driver" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xd0d2c533, "_ib_alloc_device" },
	{ 0x226f7074, "pci_irq_vector" },
	{ 0x37a0cba, "kfree" },
	{ 0x131081e5, "ib_sg_to_pages" },
	{ 0x82c93f75, "remap_pfn_range" },
	{ 0x4a5eb426, "pci_request_regions" },
	{ 0xedc03953, "iounmap" },
	{ 0xcf2a6966, "up" },
	{ 0xf354855a, "__pci_register_driver" },
	{ 0x99b23286, "ib_modify_qp_is_ok" },
	{ 0x8423aab5, "pci_dev_put" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x29361773, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xf51bf8b0, "pci_enable_device" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x512a75f3, "ib_umem_release" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x8a35b432, "sme_me_mask" },
};

MODULE_INFO(depends, "ib_core,ib_uverbs");

MODULE_ALIAS("pci:v000015ADd00000820sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "0618C1DAB4AF52BA9D41DCF");
