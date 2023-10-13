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
	{ 0x765395c3, "param_ops_int" },
	{ 0x3170987e, "rio_mport_class" },
	{ 0x4f4feb31, "class_interface_unregister" },
	{ 0xb4b1a06b, "class_destroy" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x4b17f185, "class_interface_register" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0x5328374d, "__class_create" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x7e1c5513, "rio_map_outb_region" },
	{ 0x74c1adab, "rio_mport_get_feature" },
	{ 0x14c2d836, "rio_mport_get_physefb" },
	{ 0x60911e75, "rio_add_net" },
	{ 0xddc02ffb, "rio_alloc_net" },
	{ 0x6de656dd, "rio_map_inb_region" },
	{ 0x5045db23, "rio_free_net" },
	{ 0x940d30f7, "rio_del_device" },
	{ 0x678b146e, "rio_dev_put" },
	{ 0xbe57c940, "rio_get_comptag" },
	{ 0x6a9a5a6c, "dma_direct_map_sg" },
	{ 0xbd979555, "rio_request_mport_dma" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x3a2f6702, "sg_alloc_table" },
	{ 0xe481e215, "rio_dma_prep_xfer" },
	{ 0xeaa5f763, "sg_alloc_table_from_pages" },
	{ 0x6b060c79, "get_user_pages_fast" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xfa914d7a, "rio_request_inb_dbell" },
	{ 0x814aa7f1, "rio_dev_get" },
	{ 0x5afaebe, "rio_add_device" },
	{ 0x9ce96a13, "rio_attach_device" },
	{ 0x7add3d63, "bus_find_device" },
	{ 0xac51bbbd, "rio_bus_type" },
	{ 0x80a3f18, "device_match_name" },
	{ 0x8fd91625, "rio_local_set_device_id" },
	{ 0x532b1a31, "dma_alloc_attrs" },
	{ 0xb0c5b922, "rio_pw_enable" },
	{ 0x721b662f, "rio_add_mport_pw_handler" },
	{ 0xaf7d0f48, "current_task" },
	{ 0xdb760f52, "__kfifo_free" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xa33c0eac, "wait_for_completion_interruptible_timeout" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x29361773, "complete" },
	{ 0x82de01e, "__put_devmap_managed_page" },
	{ 0x75942744, "__put_page" },
	{ 0x587f22d7, "devmap_managed_key" },
	{ 0x7f5b4fe4, "sg_free_table" },
	{ 0x94589e9e, "dma_direct_unmap_sg" },
	{ 0x9fe59f14, "dma_ops" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x309b8cc9, "dma_mmap_attrs" },
	{ 0xb665f56d, "__cachemode2pte_tbl" },
	{ 0x8ecb86b0, "vm_iomap_memory" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x87ed38c8, "rio_release_inb_dbell" },
	{ 0xde793eab, "kill_fasync" },
	{ 0x93f79281, "cdev_device_del" },
	{ 0x342edbfd, "rio_del_mport_pw_handler" },
	{ 0x53f3147f, "rio_release_dma" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xf23fcb99, "__kfifo_in" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x23fc0427, "rio_query_mport" },
	{ 0x6a58d2ee, "cdev_device_add" },
	{ 0xbec0cf29, "cdev_init" },
	{ 0xdb2d5c16, "dev_set_name" },
	{ 0x535449e7, "device_initialize" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x8e17faf3, "put_device" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x139f2189, "__kfifo_alloc" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xe7a7a03f, "get_device" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xaed06536, "_dev_warn" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x1000e51, "schedule" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x4578f528, "__kfifo_to_user" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x2aa232d7, "rio_mport_send_doorbell" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x3191b8ed, "rio_mport_read_config_32" },
	{ 0xeeb579ee, "__rio_local_read_config_32" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x999e8297, "vfree" },
	{ 0xd9b10d78, "rio_mport_write_config_32" },
	{ 0x342b92a4, "__rio_local_write_config_32" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x419892d3, "fasync_helper" },
	{ 0x43d61f37, "rio_unmap_outb_region" },
	{ 0x5c75775f, "dma_free_attrs" },
	{ 0x11c29dca, "rio_unmap_inb_region" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xc5850110, "printk" },
	{ 0x37a0cba, "kfree" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "1D905617DBB9BB7BA12FCA4");
