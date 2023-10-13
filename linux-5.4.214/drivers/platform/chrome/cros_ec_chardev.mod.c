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
	{ 0xa99a62a3, "platform_driver_unregister" },
	{ 0x19af53eb, "__platform_driver_register" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x2773c485, "__wake_up_locked" },
	{ 0x69acdf38, "memcpy" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x5b2f27fb, "do_wait_intr" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0xaf7d0f48, "current_task" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xa916b694, "strnlen" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xef064b69, "cros_ec_cmd_xfer_status" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x907d14d, "blocking_notifier_chain_register" },
	{ 0xebb33591, "nonseekable_open" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x9fd8b035, "cros_ec_cmd_xfer" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x4b2e0ffe, "misc_register" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x56470118, "__warn_printk" },
	{ 0x37a0cba, "kfree" },
	{ 0x4ece3615, "blocking_notifier_chain_unregister" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x35775925, "misc_deregister" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "2AF22A10E9ABEED8774BC10");
