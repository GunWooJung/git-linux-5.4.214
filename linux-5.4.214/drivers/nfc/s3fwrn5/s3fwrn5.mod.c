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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xed93c0b3, "module_layout" },
	{ 0xc52f6b9e, "nci_req_complete" },
	{ 0x6fc4af2b, "crypto_alloc_shash" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x6f5aa457, "nci_recv_frame" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x9eff83, "nci_core_init" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xfb578fc5, "memset" },
	{ 0xa8cc8d0e, "nci_unregister_device" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xe579ff5f, "nci_prop_cmd" },
	{ 0x1dbcc31c, "nci_core_reset" },
	{ 0xa824503f, "crypto_shash_digest" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xd111bb59, "_dev_info" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x92f8784b, "__alloc_skb" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xd8e6cdd2, "kfree_skb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xa33c0eac, "wait_for_completion_interruptible_timeout" },
	{ 0xf369487d, "crypto_destroy_tfm" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x69acdf38, "memcpy" },
	{ 0x80500894, "request_firmware" },
	{ 0x29361773, "complete" },
	{ 0xf89bc02c, "skb_put" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x28f18d0, "nci_register_device" },
	{ 0x5c9109de, "release_firmware" },
	{ 0xfc41cf36, "nci_allocate_device" },
	{ 0x8798274e, "nci_free_device" },
	{ 0xe914e41e, "strcpy" },
};

MODULE_INFO(depends, "nci");


MODULE_INFO(srcversion, "452F63AA563AEA19FE32809");
