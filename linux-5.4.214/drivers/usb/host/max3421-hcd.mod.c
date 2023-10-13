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
	{ 0x86f434e2, "driver_unregister" },
	{ 0xf6dd8fef, "__spi_register_driver" },
	{ 0xc5850110, "printk" },
	{ 0xf9a482f9, "msleep" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xfcec0987, "enable_irq" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x1000e51, "schedule" },
	{ 0x6c8e8bfd, "usb_hcd_giveback_urb" },
	{ 0xbdc7c1, "usb_hcd_unlink_urb_from_ep" },
	{ 0xaf7d0f48, "current_task" },
	{ 0xd111bb59, "_dev_info" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x2d3002b1, "usb_hcd_link_urb_to_ep" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x1d8b98ff, "usb_add_hcd" },
	{ 0xabaae129, "kthread_create_on_node" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x3a43808f, "usb_create_hcd" },
	{ 0xe21d630c, "spi_setup" },
	{ 0xd1da9080, "usb_hcd_check_unlink_urb" },
	{ 0x5bf4ef75, "usb_hcd_resume_root_hub" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x586583b8, "spi_sync" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0x37a0cba, "kfree" },
	{ 0xab37f21b, "wake_up_process" },
	{ 0xa9107ac8, "usb_put_hcd" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x85e73dd7, "kthread_stop" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xf28ad204, "usb_remove_hcd" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cmaxim,max3421");
MODULE_ALIAS("of:N*T*Cmaxim,max3421C*");

MODULE_INFO(srcversion, "0E185E1FC8E964ADAC15A00");
