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
	{ 0x2d3385d3, "system_wq" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x534e2a5a, "rc_unregister_device" },
	{ 0x765395c3, "param_ops_int" },
	{ 0x67480317, "dvb_dmx_init" },
	{ 0xa0fbac79, "wake_up_bit" },
	{ 0x26d929db, "dvb_unregister_adapter" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x9e6e4b91, "dvb_create_media_graph" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x7ac306ff, "dvb_frontend_suspend" },
	{ 0x8b51dea0, "dvb_register_frontend" },
	{ 0x408d30b0, "dvb_frontend_resume" },
	{ 0xfa11908a, "__media_device_usb_init" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x53590eb7, "usb_kill_urb" },
	{ 0xcb13db51, "dvb_unregister_frontend" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xdd64e639, "strscpy" },
	{ 0xe4616689, "rc_allocate_device" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0x9291fd02, "dvb_net_release" },
	{ 0x3656c243, "i2c_add_adapter" },
	{ 0xe55191a1, "dvb_frontend_detach" },
	{ 0xf9c0b663, "strlcat" },
	{ 0x3feecaf6, "dvb_dmx_swfilter_raw" },
	{ 0x32437ce4, "rc_free_device" },
	{ 0x99a57911, "dvb_dmxdev_release" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x80985cc4, "dvb_dmx_swfilter" },
	{ 0xc2fcc7be, "dvb_net_init" },
	{ 0xe7b00dfb, "__x86_indirect_thunk_r13" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xdc481706, "rc_register_device" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x7b0d51ce, "dvb_dmx_release" },
	{ 0x7751ad77, "dvb_dmx_swfilter_204" },
	{ 0xf2306d34, "media_device_cleanup" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x3afc0e60, "i2c_del_adapter" },
	{ 0x16e297c3, "bit_wait" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x8a2611eb, "usb_submit_urb" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x12a38747, "usleep_range" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x494ba38f, "usb_bulk_msg" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x60056b24, "dvb_register_adapter" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x1984d421, "out_of_line_wait_on_bit" },
	{ 0xea5f4b29, "__media_device_register" },
	{ 0x37a0cba, "kfree" },
	{ 0xf05c7b8, "__x86_indirect_thunk_r15" },
	{ 0x80500894, "request_firmware" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x3273e28d, "usb_free_urb" },
	{ 0x21bb6ef4, "media_device_unregister" },
	{ 0x5c9109de, "release_firmware" },
	{ 0xedb483d8, "usb_alloc_urb" },
	{ 0x58367a1e, "dvb_dmxdev_init" },
};

MODULE_INFO(depends, "rc-core,dvb-core,mc");


MODULE_INFO(srcversion, "E613B09C232368D460779F5");
