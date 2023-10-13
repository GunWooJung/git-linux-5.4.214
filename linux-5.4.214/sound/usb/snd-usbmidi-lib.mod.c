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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xed93c0b3, "module_layout" },
	{ 0x863ed2a4, "snd_rawmidi_proceed" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x53b954a2, "up_read" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0x53590eb7, "usb_kill_urb" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xa1637162, "snd_rawmidi_set_ops" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xef0af3db, "snd_rawmidi_new" },
	{ 0x668b19a1, "down_read" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xaed06536, "_dev_warn" },
	{ 0xfb578fc5, "memset" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xaf7d0f48, "current_task" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xb9b32561, "usb_set_interface" },
	{ 0x904b4af4, "snd_ctl_notify" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0x25358e1b, "usb_control_msg" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xa2d1167f, "snd_rawmidi_transmit_peek" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x94c8bc6d, "usb_free_coherent" },
	{ 0xce807a25, "up_write" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x57bc19d2, "down_write" },
	{ 0x82072614, "tasklet_kill" },
	{ 0xd5145120, "usb_urb_ep_type_check" },
	{ 0x81b69e41, "snd_ctl_enum_info" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x8a2611eb, "usb_submit_urb" },
	{ 0x3b431728, "snd_rawmidi_transmit_ack" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x494ba38f, "usb_bulk_msg" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x4d16dbe5, "snd_ctl_new1" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xd8749720, "usb_autopm_get_interface_no_resume" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xd5fd90f1, "prepare_to_wait" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xe2c54831, "usb_alloc_coherent" },
	{ 0xff94b8b9, "snd_ctl_add" },
	{ 0xe7399ee1, "snd_rawmidi_transmit" },
	{ 0x3273e28d, "usb_free_urb" },
	{ 0x7b4da6ff, "__init_rwsem" },
	{ 0xb2bc72b9, "snd_rawmidi_receive" },
	{ 0xedb483d8, "usb_alloc_urb" },
	{ 0xe914e41e, "strcpy" },
};

MODULE_INFO(depends, "snd-rawmidi,snd");


MODULE_INFO(srcversion, "A6AEE6DB88D520E8A80C5DA");
