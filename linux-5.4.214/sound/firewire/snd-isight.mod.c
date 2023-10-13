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
	{ 0xe3fde125, "fw_csr_iterator_next" },
	{ 0xf395cbe4, "fw_iso_resources_update" },
	{ 0x34d3b8d1, "driver_register" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x3d6ec95a, "iso_packets_buffer_init" },
	{ 0x691edb72, "snd_pcm_period_elapsed" },
	{ 0x30dc27a1, "fw_iso_resources_init" },
	{ 0x78d38ba1, "snd_pcm_stop_xrun" },
	{ 0xcc1a94ce, "fw_bus_type" },
	{ 0xe80e5087, "fw_csr_iterator_init" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x76cff281, "snd_card_disconnect" },
	{ 0x9255eff7, "fw_iso_context_start" },
	{ 0x95523e25, "fw_iso_context_queue_flush" },
	{ 0xfb578fc5, "memset" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x86f434e2, "driver_unregister" },
	{ 0xfab7e0a5, "snd_pcm_lib_get_vmalloc_page" },
	{ 0xa050d17e, "iso_packets_buffer_destroy" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xdaed65a6, "snd_pcm_lib_ioctl" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xa9fef4ad, "snd_ctl_boolean_mono_info" },
	{ 0x26be0b39, "snd_card_new" },
	{ 0x1d794007, "fw_iso_resources_destroy" },
	{ 0xe3f0d416, "fw_iso_context_queue" },
	{ 0x8e17faf3, "put_device" },
	{ 0x35b57060, "_snd_pcm_lib_alloc_vmalloc_buffer" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x4d16dbe5, "snd_ctl_new1" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xc87a9506, "fw_iso_resources_allocate" },
	{ 0xe7a7a03f, "get_device" },
	{ 0xfa2dfe94, "fw_iso_context_stop" },
	{ 0x9dd2ca1a, "fw_iso_context_create" },
	{ 0x69acdf38, "memcpy" },
	{ 0x3d549164, "snd_card_free" },
	{ 0x2c3bd8c1, "snd_card_register" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xe1f25fb, "snd_pcm_new" },
	{ 0xff3bd408, "snd_pcm_lib_free_vmalloc_buffer" },
	{ 0xff94b8b9, "snd_ctl_add" },
	{ 0x2c720061, "snd_fw_transaction" },
	{ 0x90344add, "fw_iso_resources_free" },
	{ 0x14472564, "fw_iso_context_destroy" },
};

MODULE_INFO(depends, "firewire-core,snd-firewire-lib,snd-pcm,snd");

MODULE_ALIAS("ieee1394:ven*mo*sp00000A27ver00000010*");

MODULE_INFO(srcversion, "4684208F7E1898B13612A76");
