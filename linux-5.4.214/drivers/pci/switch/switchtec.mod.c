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
	{ 0x2d3385d3, "system_wq" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xbec0cf29, "cdev_init" },
	{ 0x4005f38c, "try_wait_for_completion" },
	{ 0x27dd129b, "pcim_enable_device" },
	{ 0x765395c3, "param_ops_int" },
	{ 0x77358855, "iomem_resource" },
	{ 0x754d539c, "strlen" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x3c4b7b31, "devm_ioremap_wc" },
	{ 0xf2d62900, "dma_set_mask" },
	{ 0x6932b09e, "stream_open" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x68a41536, "param_ops_bool" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x5c75775f, "dma_free_attrs" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x91e0d49, "dma_set_coherent_mask" },
	{ 0xfd94814e, "complete_all" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x8338fd8, "pci_set_master" },
	{ 0xbf27fdc4, "pci_alloc_irq_vectors_affinity" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0xf10de535, "ioread8" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x262e823a, "wait_for_completion_interruptible" },
	{ 0xffb7c514, "ida_free" },
	{ 0x532b1a31, "dma_alloc_attrs" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x3c457453, "ioread64_lo_hi" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x9d766f4b, "pci_clear_master" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x3e8deedf, "kmem_cache_alloc_node_trace" },
	{ 0x8e17faf3, "put_device" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x6a58d2ee, "cdev_device_add" },
	{ 0xb9e7429c, "memcpy_toio" },
	{ 0xc7c073b7, "__devm_request_region" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x8b95e7b, "pci_unregister_driver" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0xe7a7a03f, "get_device" },
	{ 0x226f7074, "pci_irq_vector" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x535449e7, "device_initialize" },
	{ 0x7d628444, "memcpy_fromio" },
	{ 0x8281b36, "devm_ioremap" },
	{ 0xf354855a, "__pci_register_driver" },
	{ 0xb4b1a06b, "class_destroy" },
	{ 0xc5534d64, "ioread16" },
	{ 0x93f79281, "cdev_device_del" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xdb2d5c16, "dev_set_name" },
	{ 0x4a453f53, "iowrite32" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x51765820, "devm_request_threaded_irq" },
	{ 0x5328374d, "__class_create" },
	{ 0xa7d5f92e, "ida_destroy" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0xe484e35f, "ioread32" },
	{ 0xe7a02573, "ida_alloc_range" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v000011F8d00008531sv*sd*bc05sc80i00*");
MODULE_ALIAS("pci:v000011F8d00008531sv*sd*bc06sc80i00*");
MODULE_ALIAS("pci:v000011F8d00008532sv*sd*bc05sc80i00*");
MODULE_ALIAS("pci:v000011F8d00008532sv*sd*bc06sc80i00*");
MODULE_ALIAS("pci:v000011F8d00008533sv*sd*bc05sc80i00*");
MODULE_ALIAS("pci:v000011F8d00008533sv*sd*bc06sc80i00*");
MODULE_ALIAS("pci:v000011F8d00008534sv*sd*bc05sc80i00*");
MODULE_ALIAS("pci:v000011F8d00008534sv*sd*bc06sc80i00*");
MODULE_ALIAS("pci:v000011F8d00008535sv*sd*bc05sc80i00*");
MODULE_ALIAS("pci:v000011F8d00008535sv*sd*bc06sc80i00*");
MODULE_ALIAS("pci:v000011F8d00008536sv*sd*bc05sc80i00*");
MODULE_ALIAS("pci:v000011F8d00008536sv*sd*bc06sc80i00*");
MODULE_ALIAS("pci:v000011F8d00008541sv*sd*bc05sc80i00*");
MODULE_ALIAS("pci:v000011F8d00008541sv*sd*bc06sc80i00*");
MODULE_ALIAS("pci:v000011F8d00008542sv*sd*bc05sc80i00*");
MODULE_ALIAS("pci:v000011F8d00008542sv*sd*bc06sc80i00*");
MODULE_ALIAS("pci:v000011F8d00008543sv*sd*bc05sc80i00*");
MODULE_ALIAS("pci:v000011F8d00008543sv*sd*bc06sc80i00*");
MODULE_ALIAS("pci:v000011F8d00008544sv*sd*bc05sc80i00*");
MODULE_ALIAS("pci:v000011F8d00008544sv*sd*bc06sc80i00*");
MODULE_ALIAS("pci:v000011F8d00008545sv*sd*bc05sc80i00*");
MODULE_ALIAS("pci:v000011F8d00008545sv*sd*bc06sc80i00*");
MODULE_ALIAS("pci:v000011F8d00008546sv*sd*bc05sc80i00*");
MODULE_ALIAS("pci:v000011F8d00008546sv*sd*bc06sc80i00*");
MODULE_ALIAS("pci:v000011F8d00008551sv*sd*bc05sc80i00*");
MODULE_ALIAS("pci:v000011F8d00008551sv*sd*bc06sc80i00*");
MODULE_ALIAS("pci:v000011F8d00008552sv*sd*bc05sc80i00*");
MODULE_ALIAS("pci:v000011F8d00008552sv*sd*bc06sc80i00*");
MODULE_ALIAS("pci:v000011F8d00008553sv*sd*bc05sc80i00*");
MODULE_ALIAS("pci:v000011F8d00008553sv*sd*bc06sc80i00*");
MODULE_ALIAS("pci:v000011F8d00008554sv*sd*bc05sc80i00*");
MODULE_ALIAS("pci:v000011F8d00008554sv*sd*bc06sc80i00*");
MODULE_ALIAS("pci:v000011F8d00008555sv*sd*bc05sc80i00*");
MODULE_ALIAS("pci:v000011F8d00008555sv*sd*bc06sc80i00*");
MODULE_ALIAS("pci:v000011F8d00008556sv*sd*bc05sc80i00*");
MODULE_ALIAS("pci:v000011F8d00008556sv*sd*bc06sc80i00*");
MODULE_ALIAS("pci:v000011F8d00008561sv*sd*bc05sc80i00*");
MODULE_ALIAS("pci:v000011F8d00008561sv*sd*bc06sc80i00*");
MODULE_ALIAS("pci:v000011F8d00008562sv*sd*bc05sc80i00*");
MODULE_ALIAS("pci:v000011F8d00008562sv*sd*bc06sc80i00*");
MODULE_ALIAS("pci:v000011F8d00008563sv*sd*bc05sc80i00*");
MODULE_ALIAS("pci:v000011F8d00008563sv*sd*bc06sc80i00*");
MODULE_ALIAS("pci:v000011F8d00008564sv*sd*bc05sc80i00*");
MODULE_ALIAS("pci:v000011F8d00008564sv*sd*bc06sc80i00*");
MODULE_ALIAS("pci:v000011F8d00008565sv*sd*bc05sc80i00*");
MODULE_ALIAS("pci:v000011F8d00008565sv*sd*bc06sc80i00*");
MODULE_ALIAS("pci:v000011F8d00008566sv*sd*bc05sc80i00*");
MODULE_ALIAS("pci:v000011F8d00008566sv*sd*bc06sc80i00*");
MODULE_ALIAS("pci:v000011F8d00008571sv*sd*bc05sc80i00*");
MODULE_ALIAS("pci:v000011F8d00008571sv*sd*bc06sc80i00*");
MODULE_ALIAS("pci:v000011F8d00008572sv*sd*bc05sc80i00*");
MODULE_ALIAS("pci:v000011F8d00008572sv*sd*bc06sc80i00*");
MODULE_ALIAS("pci:v000011F8d00008573sv*sd*bc05sc80i00*");
MODULE_ALIAS("pci:v000011F8d00008573sv*sd*bc06sc80i00*");
MODULE_ALIAS("pci:v000011F8d00008574sv*sd*bc05sc80i00*");
MODULE_ALIAS("pci:v000011F8d00008574sv*sd*bc06sc80i00*");
MODULE_ALIAS("pci:v000011F8d00008575sv*sd*bc05sc80i00*");
MODULE_ALIAS("pci:v000011F8d00008575sv*sd*bc06sc80i00*");
MODULE_ALIAS("pci:v000011F8d00008576sv*sd*bc05sc80i00*");
MODULE_ALIAS("pci:v000011F8d00008576sv*sd*bc06sc80i00*");

MODULE_INFO(srcversion, "A8A28FE1C5F39F56F5FE6E7");
