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
	{ 0x68a41536, "param_ops_bool" },
	{ 0x765395c3, "param_ops_int" },
	{ 0x3967b466, "cfb_imageblit" },
	{ 0xded9b275, "cfb_copyarea" },
	{ 0xf915b474, "cfb_fillrect" },
	{ 0x4e367da1, "driver_for_each_device" },
	{ 0xdb10a0aa, "driver_find" },
	{ 0x6d00f69e, "pci_bus_type" },
	{ 0x6977c140, "ivtv_udma_alloc" },
	{ 0x7761bd3b, "register_framebuffer" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x7a890c8, "fb_alloc_cmap" },
	{ 0xa4191c0b, "memset_io" },
	{ 0x5b641283, "arch_phys_wc_add" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xd5482d6a, "ivtv_init_on_first_open" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x550ce709, "pat_enabled" },
	{ 0xfc2e49e2, "ivtv_firmware_check" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xfe00f05c, "unregister_framebuffer" },
	{ 0x98b71c6, "fb_dealloc_cmap" },
	{ 0x50d68377, "arch_phys_wc_del" },
	{ 0x37a0cba, "kfree" },
	{ 0xdd64e639, "strscpy" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x14f67530, "ivtv_debug" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x967d2d2d, "ivtv_udma_unmap" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x1000e51, "schedule" },
	{ 0xd5fd90f1, "prepare_to_wait" },
	{ 0x45601242, "ivtv_udma_prepare" },
	{ 0xe6cdad07, "ivtv_udma_setup" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0xaf7d0f48, "current_task" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x6235f24b, "ivtv_vapi_result" },
	{ 0xc5850110, "printk" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x11f21aee, "ivtv_vapi" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "ivtv");


MODULE_INFO(srcversion, "52B7B43DF2FD287971C9A5B");
