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

MODULE_INFO(staging, "Y");

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xed93c0b3, "module_layout" },
	{ 0x765395c3, "param_ops_int" },
	{ 0x6eed2630, "param_array_ops" },
	{ 0x9bf8311c, "vme_unregister_driver" },
	{ 0x9461f716, "vme_register_driver" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xaed06536, "_dev_warn" },
	{ 0xd267dbfb, "device_create" },
	{ 0x5328374d, "__class_create" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0xf45340ed, "vme_master_request" },
	{ 0x188cd88, "vme_alloc_consistent" },
	{ 0x68f189e8, "vme_slave_request" },
	{ 0x5314ccb0, "cdev_add" },
	{ 0x825954a7, "cdev_alloc" },
	{ 0x3fd78f3b, "register_chrdev_region" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb30b9822, "vme_master_set" },
	{ 0x6adc06ff, "vme_irq_generate" },
	{ 0x2a9a3905, "vme_master_get" },
	{ 0x902d8722, "vme_slave_get" },
	{ 0x457ebea1, "vme_slot_num" },
	{ 0xfbd0fb92, "vme_bus_num" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x6a06322a, "vme_master_mmap" },
	{ 0xd0e8300e, "fixed_size_llseek" },
	{ 0xc6bdc3f, "vme_master_read" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x52983a4f, "vme_master_write" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x79a33f85, "vme_get_size" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x56470118, "__warn_printk" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0xad8df8fd, "cdev_del" },
	{ 0xdff905e5, "vme_slave_free" },
	{ 0x1bd59dbe, "vme_free_consistent" },
	{ 0x3fbf3c89, "vme_slave_set" },
	{ 0x7cf35220, "vme_master_free" },
	{ 0x37a0cba, "kfree" },
	{ 0xb4b1a06b, "class_destroy" },
	{ 0x14e23ddd, "device_destroy" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "58EAC5D6FCE24510A6456C9");
