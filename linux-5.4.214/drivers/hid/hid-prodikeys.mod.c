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
	{ 0x765395c3, "param_ops_int" },
	{ 0x131e5561, "param_ops_charp" },
	{ 0x68a41536, "param_ops_bool" },
	{ 0x6eed2630, "param_array_ops" },
	{ 0x2b708d10, "hid_unregister_driver" },
	{ 0xb27fe432, "__hid_register_driver" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x3d549164, "snd_card_free" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x2c3bd8c1, "snd_card_register" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x5748356e, "device_create_file" },
	{ 0xa1637162, "snd_rawmidi_set_ops" },
	{ 0x9166fada, "strncpy" },
	{ 0xef0af3db, "snd_rawmidi_new" },
	{ 0x99f86ed6, "snd_device_new" },
	{ 0x26be0b39, "snd_card_new" },
	{ 0xc6c38eb0, "hid_hw_start" },
	{ 0x49bdb973, "hid_open_report" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x3232dfdb, "usb_hid_driver" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x66c54ff1, "input_event" },
	{ 0xc6854343, "__hid_request" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xd111bb59, "_dev_info" },
	{ 0xffa8e380, "hid_hw_stop" },
	{ 0x37a0cba, "kfree" },
	{ 0xd56b098d, "snd_card_free_when_closed" },
	{ 0x76cff281, "snd_card_disconnect" },
	{ 0x174e203e, "device_remove_file" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x754d539c, "strlen" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb2bc72b9, "snd_rawmidi_receive" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xc5850110, "printk" },
	{ 0x5495392, "hid_debug" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "hid,snd,snd-rawmidi,usbhid");

MODULE_ALIAS("hid:b0003g*v0000041Ep00002801");

MODULE_INFO(srcversion, "7B28E39116A59BCB043F10A");
