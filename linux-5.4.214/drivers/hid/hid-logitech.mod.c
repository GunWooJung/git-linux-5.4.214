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
	{ 0x174e203e, "device_remove_file" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x49bdb973, "hid_open_report" },
	{ 0x765395c3, "param_ops_int" },
	{ 0x754d539c, "strlen" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x84f5e5a5, "input_ff_create_memless" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xc6854343, "__hid_request" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x5495392, "hid_debug" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xfb384d37, "kasprintf" },
	{ 0x66c54ff1, "input_event" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xaed06536, "_dev_warn" },
	{ 0xfb578fc5, "memset" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0xc5850110, "printk" },
	{ 0xb372d8f7, "led_classdev_register_ext" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x3232dfdb, "usb_hid_driver" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x5748356e, "device_create_file" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xd111bb59, "_dev_info" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xffa8e380, "hid_hw_stop" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x6b2998d4, "led_classdev_unregister" },
	{ 0x37a0cba, "kfree" },
	{ 0xb27fe432, "__hid_register_driver" },
	{ 0x96848186, "scnprintf" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xce96f2ee, "hid_validate_values" },
	{ 0xc6c38eb0, "hid_hw_start" },
	{ 0x2b708d10, "hid_unregister_driver" },
};

MODULE_INFO(depends, "hid,ff-memless,usbhid");

MODULE_ALIAS("hid:b0003g*v0000046Dp0000C50C");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C101");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C704");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C714");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C71F");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C30A");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C512");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C215");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C216");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C294");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C20A");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C211");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C219");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C24F");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C283");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C286");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C295");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000CA03");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000CA04");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C299");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C29A");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C29B");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C298");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C29C");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C20E");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C293");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C218");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C287");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C626");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C623");

MODULE_INFO(srcversion, "F51A381A4357D09E30B594A");
