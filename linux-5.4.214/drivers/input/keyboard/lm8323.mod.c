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
	{ 0x875d03e0, "i2c_del_driver" },
	{ 0xb1a20db, "i2c_register_driver" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x4fc0c5ca, "device_init_wakeup" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x4e97c8d9, "input_free_device" },
	{ 0x94a09154, "input_register_device" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x5748356e, "device_create_file" },
	{ 0xb372d8f7, "led_classdev_register_ext" },
	{ 0xf9a482f9, "msleep" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x4f55cb4, "input_allocate_device" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x4629334c, "__preempt_count" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x66c54ff1, "input_event" },
	{ 0x6b2998d4, "led_classdev_unregister" },
	{ 0x37a0cba, "kfree" },
	{ 0x174e203e, "device_remove_file" },
	{ 0x2ab40469, "input_unregister_device" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xae2af137, "led_classdev_suspend" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x4bfc612f, "led_classdev_resume" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x754d539c, "strlen" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x4fc58c0c, "i2c_transfer_buffer_flags" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("i2c:lm8323");

MODULE_INFO(srcversion, "5A0CE0EDD077E72A4DA6FC3");
