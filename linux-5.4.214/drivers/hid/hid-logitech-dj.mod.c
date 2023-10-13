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
	{ 0x2b708d10, "hid_unregister_driver" },
	{ 0xb27fe432, "__hid_register_driver" },
	{ 0xcf2a6966, "up" },
	{ 0x321dadd0, "hid_hw_open" },
	{ 0xc6c38eb0, "hid_hw_start" },
	{ 0x139f2189, "__kfifo_alloc" },
	{ 0x6081b8d0, "hid_compare_device_paths" },
	{ 0x3232dfdb, "usb_hid_driver" },
	{ 0x49bdb973, "hid_open_report" },
	{ 0xf9a482f9, "msleep" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x1c89a710, "hid_add_device" },
	{ 0xf9c0b663, "strlcat" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x20415a21, "hid_allocate_device" },
	{ 0x13d0adf7, "__kfifo_out" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xc0db57d8, "hid_destroy_device" },
	{ 0xffa8e380, "hid_hw_stop" },
	{ 0xef0b66a5, "hid_hw_close" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xdb760f52, "__kfifo_free" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xc6854343, "__hid_request" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xaed06536, "_dev_warn" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xa6ec525f, "hid_input_report" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xc5850110, "printk" },
	{ 0x37a0cba, "kfree" },
	{ 0x2757c65b, "hid_parse_report" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x5495392, "hid_debug" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xf23fcb99, "__kfifo_in" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x69acdf38, "memcpy" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "hid,usbhid");

MODULE_ALIAS("hid:b0003g*v0000046Dp0000C52B");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C532");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C52F");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C534");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C531");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C537");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C539");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C53F");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C513");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C53A");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C517");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C51B");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C70E");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C70A");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C71B");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C71C");

MODULE_INFO(srcversion, "5C2E19EE6366124A62230C4");
