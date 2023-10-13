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
	{ 0x6eed2630, "param_array_ops" },
	{ 0x765395c3, "param_ops_int" },
	{ 0xdaed65a6, "snd_pcm_lib_ioctl" },
	{ 0x75c4b6cb, "tm6000_unregister_extension" },
	{ 0x69b51072, "tm6000_register_extension" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x2c3bd8c1, "snd_card_register" },
	{ 0x585079d2, "snd_pcm_set_ops" },
	{ 0xe1f25fb, "snd_pcm_new" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xddb9b8ac, "snd_component_add" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xdd64e639, "strscpy" },
	{ 0x26be0b39, "snd_card_new" },
	{ 0x8a0fbe36, "snd_pcm_hw_constraint_integer" },
	{ 0x9debba24, "snd_pcm_hw_constraint_pow2" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x999e8297, "vfree" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x3e95082d, "vmalloc_to_page" },
	{ 0x1b0c77b3, "tm6000_set_audio_bitrate" },
	{ 0xa44c00b4, "tm6000_set_reg_mask" },
	{ 0x37a0cba, "kfree" },
	{ 0x3d549164, "snd_card_free" },
	{ 0xc5850110, "printk" },
	{ 0x691edb72, "snd_pcm_period_elapsed" },
	{ 0xa04c692d, "snd_pcm_stream_unlock" },
	{ 0x59665f29, "snd_pcm_stream_lock" },
	{ 0x69acdf38, "memcpy" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "snd-pcm,tm6000,snd");


MODULE_INFO(srcversion, "94EB9BD787CDDDCD227B682");
