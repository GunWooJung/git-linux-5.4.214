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
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x49bdb973, "hid_open_report" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xc0c3028b, "mfd_remove_devices" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xc6854343, "__hid_request" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x15f68f5d, "devm_kasprintf" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xaed06536, "_dev_warn" },
	{ 0xfb578fc5, "memset" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xef0b66a5, "hid_hw_close" },
	{ 0xa55d7e61, "mfd_add_devices" },
	{ 0x593c1bac, "__x86_indirect_thunk_rbx" },
	{ 0x321dadd0, "hid_hw_open" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x4884afcb, "hid_set_field" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xa33c0eac, "wait_for_completion_interruptible_timeout" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xffa8e380, "hid_hw_stop" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xb27fe432, "__hid_register_driver" },
	{ 0x29361773, "complete" },
	{ 0xc6c38eb0, "hid_hw_start" },
	{ 0x2b708d10, "hid_unregister_driver" },
	{ 0x943b1666, "devm_kmalloc" },
};

MODULE_INFO(depends, "hid");

MODULE_ALIAS("hid:b*g0003v*p*");

MODULE_INFO(srcversion, "7096C900149F44E149A7FBC");
