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
	{ 0x6bc3fbc0, "__unregister_chrdev" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x174e203e, "device_remove_file" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x339a5a9a, "pci_free_irq_vectors" },
	{ 0x60b5afd5, "dvb_module_probe" },
	{ 0x765395c3, "param_ops_int" },
	{ 0x67480317, "dvb_dmx_init" },
	{ 0x26d929db, "dvb_unregister_adapter" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xf2d62900, "dma_set_mask" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x8b51dea0, "dvb_register_frontend" },
	{ 0xc5846169, "pci_disable_device" },
	{ 0xb35586ed, "i2c_transfer" },
	{ 0xaeb78fdd, "dvb_register_device" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x14e23ddd, "device_destroy" },
	{ 0x3bd23fd8, "dma_direct_sync_single_for_cpu" },
	{ 0xbce3803, "__register_chrdev" },
	{ 0xcb13db51, "dvb_unregister_frontend" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x999e8297, "vfree" },
	{ 0x5c75775f, "dma_free_attrs" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x9291fd02, "dvb_net_release" },
	{ 0x3656c243, "i2c_add_adapter" },
	{ 0xfb384d37, "kasprintf" },
	{ 0xe55191a1, "dvb_frontend_detach" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x8338fd8, "pci_set_master" },
	{ 0xbf27fdc4, "pci_alloc_irq_vectors_affinity" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0xaed06536, "_dev_warn" },
	{ 0x947be5cd, "param_ops_short" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0x99a57911, "dvb_dmxdev_release" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xa191fd37, "class_unregister" },
	{ 0xc2fcc7be, "dvb_net_init" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x6cdf5bee, "dvb_generic_release" },
	{ 0x6dd853a6, "dma_direct_map_page" },
	{ 0x532b1a31, "dma_alloc_attrs" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x48a93420, "dvb_ca_en50221_release" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xd267dbfb, "device_create" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x88b5e122, "dvb_unregister_device" },
	{ 0x5fd264df, "__class_register" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x7b0d51ce, "dvb_dmx_release" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x868784cb, "__symbol_get" },
	{ 0x5748356e, "device_create_file" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x7f6f442, "dvb_module_release" },
	{ 0xb526d94f, "dma_direct_unmap_page" },
	{ 0x3afc0e60, "i2c_del_adapter" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x40a9b349, "vzalloc" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x12a38747, "usleep_range" },
	{ 0xdcf60586, "dvb_dmx_swfilter_packets" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x1000e51, "schedule" },
	{ 0x2ed53eac, "dvb_generic_open" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0xb9e7429c, "memcpy_toio" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0xecadd7c7, "dev_driver_string" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x60056b24, "dvb_register_adapter" },
	{ 0x8b95e7b, "pci_unregister_driver" },
	{ 0x453c8403, "pci_msi_enabled" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x226f7074, "pci_irq_vector" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x37a0cba, "kfree" },
	{ 0x6eed2630, "param_array_ops" },
	{ 0xedc03953, "iounmap" },
	{ 0x7d628444, "memcpy_fromio" },
	{ 0xc1d7d8bf, "dma_direct_sync_single_for_device" },
	{ 0xf354855a, "__pci_register_driver" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x6e9dd606, "__symbol_put" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x29361773, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x2a2c35b6, "dvb_ca_en50221_init" },
	{ 0xf51bf8b0, "pci_enable_device" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x9fe59f14, "dma_ops" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x58367a1e, "dvb_dmxdev_init" },
};

MODULE_INFO(depends, "dvb-core");

MODULE_ALIAS("pci:v0000DD01d00000002sv0000DD01sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000DD01d00000003sv0000DD01sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000DD01d00000005sv0000DD01sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000DD01d00000006sv0000DD01sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000DD01d00000007sv0000DD01sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000DD01d00000008sv0000DD01sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000DD01d00000009sv0000DD01sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000DD01d00000011sv0000DD01sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000DD01d00000012sv0000DD01sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000DD01d00000013sv0000DD01sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000DD01d00000201sv0000DD01sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000DD01d00000203sv0000DD01sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000DD01d00000210sv0000DD01sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000DD01d00000220sv0000DD01sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000DD01d00000320sv0000DD01sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000DD01d00000321sv0000DD01sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000DD01d00000322sv0000DD01sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000DD01d00000323sv0000DD01sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000DD01d00000328sv0000DD01sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000DD01d00000329sv0000DD01sd*bc*sc*i*");

MODULE_INFO(srcversion, "C1B6C8F471BF2D085A0825C");
