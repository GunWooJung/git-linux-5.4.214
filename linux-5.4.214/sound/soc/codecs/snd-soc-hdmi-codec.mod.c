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
	{ 0xe56a9336, "snd_pcm_format_width" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0x11eba48e, "snd_pcm_create_iec958_consumer_hw_params" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xc216d5c2, "snd_pcm_hw_constraint_eld" },
	{ 0x19af53eb, "__platform_driver_register" },
	{ 0xf13afacc, "snd_soc_dapm_add_routes" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x4d16dbe5, "snd_ctl_new1" },
	{ 0x3d160fb1, "devm_snd_soc_register_component" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x37a0cba, "kfree" },
	{ 0xb14ab1ef, "hdmi_audio_infoframe_init" },
	{ 0x72455018, "snd_pcm_add_chmap_ctls" },
	{ 0x4102c82b, "snd_soc_jack_report" },
	{ 0xff94b8b9, "snd_ctl_add" },
	{ 0xa99a62a3, "platform_driver_unregister" },
	{ 0x943b1666, "devm_kmalloc" },
};

MODULE_INFO(depends, "snd-pcm,snd-soc-core,snd");


MODULE_INFO(srcversion, "071291BABE040214AA43ABC");
