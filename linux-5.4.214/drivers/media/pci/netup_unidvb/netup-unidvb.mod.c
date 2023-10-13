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
	{ 0xa24f23d8, "__request_module" },
	{ 0x85bd1608, "__request_region" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xf9a482f9, "msleep" },
	{ 0x30779a9, "spi_register_controller" },
	{ 0x765395c3, "param_ops_int" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x77358855, "iomem_resource" },
	{ 0x37a24b11, "pci_read_config_byte" },
	{ 0xa4191c0b, "memset_io" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xf2d62900, "dma_set_mask" },
	{ 0xc5846169, "pci_disable_device" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x168babb5, "pcie_capability_clear_and_set_word" },
	{ 0x5c75775f, "dma_free_attrs" },
	{ 0x244c8a94, "vb2_dvb_unregister_bus" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x3656c243, "i2c_add_adapter" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xb2fe6b9b, "vb2_dvb_dealloc_frontends" },
	{ 0x8338fd8, "pci_set_master" },
	{ 0xaed06536, "_dev_warn" },
	{ 0xc3604547, "vb2_vmalloc_memops" },
	{ 0x947be5cd, "param_ops_short" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x720da46f, "vb2_plane_vaddr" },
	{ 0xdc9e610b, "vb2_buffer_done" },
	{ 0xe7b00dfb, "__x86_indirect_thunk_r13" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x14b80dd0, "spi_new_device" },
	{ 0xb0de39d3, "pci_read_config_word" },
	{ 0x532b1a31, "dma_alloc_attrs" },
	{ 0x56d0a403, "spi_unregister_controller" },
	{ 0x6cac2f3b, "__devm_spi_alloc_controller" },
	{ 0x48a93420, "dvb_ca_en50221_release" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xce8b1878, "__x86_indirect_thunk_r14" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x868784cb, "__symbol_get" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x3afc0e60, "i2c_del_adapter" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x12a38747, "usleep_range" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xb9e7429c, "memcpy_toio" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x1035c7c2, "__release_region" },
	{ 0x8b95e7b, "pci_unregister_driver" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x37a0cba, "kfree" },
	{ 0x6eed2630, "param_array_ops" },
	{ 0xedc03953, "iounmap" },
	{ 0x7d628444, "memcpy_fromio" },
	{ 0xf354855a, "__pci_register_driver" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x64fe54f3, "vb2_dvb_alloc_frontend" },
	{ 0xf3359706, "vb2_dvb_get_frontend" },
	{ 0x6e9dd606, "__symbol_put" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x2a2c35b6, "dvb_ca_en50221_init" },
	{ 0xf51bf8b0, "pci_enable_device" },
	{ 0x11001db2, "spi_finalize_current_message" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0xc5724791, "vb2_dvb_register_bus" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x6391ad79, "vb2_queue_init" },
};

MODULE_INFO(depends, "videobuf2-dvb,videobuf2-vmalloc,videobuf2-common,dvb-core,videobuf2-v4l2");

MODULE_ALIAS("pci:v00001B55d000018F6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001B55d000018F7sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "02531C89C0F7FBF1BFDA5F6");
