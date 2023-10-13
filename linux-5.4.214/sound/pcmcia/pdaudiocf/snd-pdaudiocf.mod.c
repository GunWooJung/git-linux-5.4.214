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
	{ 0xd3b018f3, "pcmcia_dev_present" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xb55067d3, "pcmcia_enable_device" },
	{ 0x7f0bf069, "snd_ak4117_reinit" },
	{ 0x765395c3, "param_ops_int" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xfd864eaf, "pcmcia_register_driver" },
	{ 0x691edb72, "snd_pcm_period_elapsed" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x4f816e9b, "snd_pcm_format_big_endian" },
	{ 0x58f84c2d, "seq_printf" },
	{ 0xa3cdc179, "snd_ak4117_check_rate_and_errors" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x68a41536, "param_ops_bool" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x32dce1b0, "pcmcia_request_io" },
	{ 0x76cff281, "snd_card_disconnect" },
	{ 0xf67d62b6, "snd_ak4117_create" },
	{ 0x131e5561, "param_ops_charp" },
	{ 0x21a10496, "snd_ak4117_build" },
	{ 0x99f86ed6, "snd_device_new" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x585079d2, "snd_pcm_set_ops" },
	{ 0xd56b098d, "snd_card_free_when_closed" },
	{ 0xfab7e0a5, "snd_pcm_lib_get_vmalloc_page" },
	{ 0x39f4ef50, "snd_ak4117_external_rate" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xeac73847, "irq_regs" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xdaed65a6, "snd_pcm_lib_ioctl" },
	{ 0x26be0b39, "snd_card_new" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x35b57060, "_snd_pcm_lib_alloc_vmalloc_buffer" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9ff4ea41, "snd_ak4117_reg_write" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x3796bdcc, "snd_pcm_format_little_endian" },
	{ 0x8a4baec, "snd_card_rw_proc_new" },
	{ 0x37a0cba, "kfree" },
	{ 0xa61aa028, "snd_pcm_format_unsigned" },
	{ 0x6eed2630, "param_array_ops" },
	{ 0xb9262523, "pcmcia_unregister_driver" },
	{ 0x3d549164, "snd_card_free" },
	{ 0x2c3bd8c1, "snd_card_register" },
	{ 0xe1f25fb, "snd_pcm_new" },
	{ 0xff3bd408, "snd_pcm_lib_free_vmalloc_buffer" },
	{ 0x19c85322, "pcmcia_disable_device" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xe914e41e, "strcpy" },
};

MODULE_INFO(depends, "pcmcia,snd-ak4117,snd-pcm,snd");

MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa396D19D2pb71717B49pc*pd*");

MODULE_INFO(srcversion, "686A81BCAB216F1D64AC6D1");
