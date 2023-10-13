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
	{ 0x2108e3e0, "usb_gstrings_attach" },
	{ 0x37c1c72a, "usb_free_all_descriptors" },
	{ 0xffaa944, "usb_ep_queue" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x93ec655f, "g_audio_cleanup" },
	{ 0x298538f8, "u_audio_start_capture" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x6b926abb, "usb_function_unregister" },
	{ 0x82fcc0d0, "usb_put_function_instance" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x4b70bb1, "usb_ep_autoconfig" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x3b346986, "config_group_init_type_name" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xb651eaf4, "g_audio_setup" },
	{ 0x6d73fc48, "usb_function_register" },
	{ 0xf6c85d74, "u_audio_stop_playback" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x57115beb, "u_audio_stop_capture" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x720888c9, "u_audio_start_playback" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0xc3375c60, "usb_assign_descriptors" },
	{ 0xfa7bdbc3, "usb_interface_id" },
	{ 0x656e4a6e, "snprintf" },
};

MODULE_INFO(depends, "libcomposite,udc-core,u_audio");


MODULE_INFO(srcversion, "DEBEBF0D37A8F26F08E7541");
