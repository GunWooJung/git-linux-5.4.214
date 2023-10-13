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
	{ 0xb95a6e6d, "usb_deregister" },
	{ 0xaf37d977, "usb_register_driver" },
	{ 0x69acdf38, "memcpy" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xdc58687b, "nfc_digital_register_device" },
	{ 0xd186e8e7, "nfc_digital_allocate_device" },
	{ 0xedb483d8, "usb_alloc_urb" },
	{ 0xe3ef08a7, "usb_get_dev" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xd523d85d, "skb_push" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xfd94814e, "complete_all" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbe92ed72, "skb_trim" },
	{ 0xf89bc02c, "skb_put" },
	{ 0xad263612, "consume_skb" },
	{ 0xf05c7b8, "__x86_indirect_thunk_r15" },
	{ 0xd8e6cdd2, "kfree_skb" },
	{ 0x593c1bac, "__x86_indirect_thunk_rbx" },
	{ 0xbed6138e, "skb_pull" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0x8a2611eb, "usb_submit_urb" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x29361773, "complete" },
	{ 0x92f8784b, "__alloc_skb" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x37a0cba, "kfree" },
	{ 0x815f16c8, "usb_put_dev" },
	{ 0x3273e28d, "usb_free_urb" },
	{ 0x53590eb7, "usb_kill_urb" },
	{ 0x8a01b120, "nfc_digital_free_device" },
	{ 0xd3b8ced, "nfc_digital_unregister_device" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "nfc_digital");

MODULE_ALIAS("usb:v054Cp06C1d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v054Cp06C3d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "735840D656FFE2C17C211CC");
