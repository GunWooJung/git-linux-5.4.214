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
	{ 0x2d3385d3, "system_wq" },
	{ 0x55bf5bc8, "is_fw_load" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x765395c3, "param_ops_int" },
	{ 0x691edb72, "snd_pcm_period_elapsed" },
	{ 0xf174db01, "v4l2_subdev_call_wrappers" },
	{ 0xbdb457b0, "_snd_pcm_stream_lock_irqsave" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x53590eb7, "usb_kill_urb" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x999e8297, "vfree" },
	{ 0xdd64e639, "strscpy" },
	{ 0xbe08b227, "usb_unlink_urb" },
	{ 0x8a0fbe36, "snd_pcm_hw_constraint_integer" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0xc0d65c3, "cx231xx_register_extension" },
	{ 0xfb578fc5, "memset" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0x585079d2, "snd_pcm_set_ops" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x6b7712bc, "snd_pcm_stream_unlock_irqrestore" },
	{ 0xdaed65a6, "snd_pcm_lib_ioctl" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x26be0b39, "snd_card_new" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x8a2611eb, "usb_submit_urb" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xbe8fd8c0, "cx231xx_capture_start" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xa822d504, "cx231xx_set_alt_setting" },
	{ 0x3d549164, "snd_card_free" },
	{ 0x2c3bd8c1, "snd_card_register" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xe1f25fb, "snd_pcm_new" },
	{ 0x3e95082d, "vmalloc_to_page" },
	{ 0x3273e28d, "usb_free_urb" },
	{ 0xc7f597a7, "cx231xx_unregister_extension" },
	{ 0xedb483d8, "usb_alloc_urb" },
};

MODULE_INFO(depends, "cx231xx,snd-pcm,videodev,snd");


MODULE_INFO(srcversion, "ED0AACD08CFFA33FE7D6CEC");
