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
	{ 0x5c42b5ca, "no_llseek" },
	{ 0xb9262523, "pcmcia_unregister_driver" },
	{ 0x6bc3fbc0, "__unregister_chrdev" },
	{ 0xfd864eaf, "pcmcia_register_driver" },
	{ 0xb4b1a06b, "class_destroy" },
	{ 0xbce3803, "__register_chrdev" },
	{ 0x5328374d, "__class_create" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xaed06536, "_dev_warn" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x12a38747, "usleep_range" },
	{ 0x78041b8f, "byte_rev_table" },
	{ 0xd267dbfb, "device_create" },
	{ 0xb55067d3, "pcmcia_enable_device" },
	{ 0x6af95259, "pcmcia_loop_config" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x56470118, "__warn_printk" },
	{ 0xaf7d0f48, "current_task" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x6932b09e, "stream_open" },
	{ 0xd3b018f3, "pcmcia_dev_present" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x32dce1b0, "pcmcia_request_io" },
	{ 0x14e23ddd, "device_destroy" },
	{ 0x37a0cba, "kfree" },
	{ 0x19c85322, "pcmcia_disable_device" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xf9a482f9, "msleep" },
	{ 0x1000e51, "schedule" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xc5850110, "printk" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "pcmcia");

MODULE_ALIAS("pcmcia:m0223c0002f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa2FB368CApbA2BD8C39pc*pd*");

MODULE_INFO(srcversion, "096B9A124591FE86FE58AA6");
