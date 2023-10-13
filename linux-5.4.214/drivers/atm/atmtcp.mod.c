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
	{ 0x7669ab7d, "deregister_atm_ioctl" },
	{ 0xc7942ee8, "register_atm_ioctl" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x8e17faf3, "put_device" },
	{ 0x6f395e65, "__module_get" },
	{ 0xfeb41a9b, "atm_init_aal5" },
	{ 0x7dedaa1b, "vcc_insert_socket" },
	{ 0x125a2a89, "atm_dev_lookup" },
	{ 0xc6cbbc89, "capable" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xcafebbff, "atm_dev_register" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0x1000e51, "schedule" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0x92f8784b, "__alloc_skb" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0xaf7d0f48, "current_task" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xdf46d4f1, "module_put" },
	{ 0x72f006c4, "atm_dev_deregister" },
	{ 0x37a0cba, "kfree" },
	{ 0xc5850110, "printk" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xad263612, "consume_skb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x69acdf38, "memcpy" },
	{ 0xf89bc02c, "skb_put" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0xed388c3b, "atm_alloc_charge" },
	{ 0xbed6138e, "skb_pull" },
	{ 0x2cc2d52d, "vcc_hash" },
	{ 0x32ae5741, "_raw_read_lock" },
	{ 0x44c6e633, "vcc_sklist_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "atm");


MODULE_INFO(srcversion, "ECC5DDD7DE84CDDC8771242");
