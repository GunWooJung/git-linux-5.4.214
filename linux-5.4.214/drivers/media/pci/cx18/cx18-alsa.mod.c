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
	{ 0x6d00f69e, "pci_bus_type" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x765395c3, "param_ops_int" },
	{ 0x691edb72, "snd_pcm_period_elapsed" },
	{ 0x4e367da1, "driver_for_each_device" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x97912209, "cx18_ext_init" },
	{ 0x999e8297, "vfree" },
	{ 0x59665f29, "snd_pcm_stream_lock" },
	{ 0xdd64e639, "strscpy" },
	{ 0x8a0fbe36, "snd_pcm_hw_constraint_integer" },
	{ 0x6801f47b, "cx18_stop_v4l2_encode_stream" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x71259f1a, "cx18_release_stream" },
	{ 0x38b49b02, "cx18_claim_stream" },
	{ 0xc5850110, "printk" },
	{ 0x585079d2, "snd_pcm_set_ops" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xdaed65a6, "snd_pcm_lib_ioctl" },
	{ 0x26be0b39, "snd_card_new" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xa04c692d, "snd_pcm_stream_unlock" },
	{ 0xc228d4b5, "cx18_start_v4l2_encode_stream" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x3d549164, "snd_card_free" },
	{ 0x2c3bd8c1, "snd_card_register" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xe1f25fb, "snd_pcm_new" },
	{ 0x3e95082d, "vmalloc_to_page" },
	{ 0xdb10a0aa, "driver_find" },
};

MODULE_INFO(depends, "snd-pcm,cx18,snd");


MODULE_INFO(srcversion, "22F631425933D2E68939F37");
