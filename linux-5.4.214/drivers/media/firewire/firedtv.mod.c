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
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xf9a482f9, "msleep" },
	{ 0x34d3b8d1, "driver_register" },
	{ 0x765395c3, "param_ops_int" },
	{ 0x67480317, "dvb_dmx_init" },
	{ 0x26d929db, "dvb_unregister_adapter" },
	{ 0x754d539c, "strlen" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x6dc50487, "fw_csr_string" },
	{ 0x8b51dea0, "dvb_register_frontend" },
	{ 0xaeb78fdd, "dvb_register_device" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xcc1a94ce, "fw_bus_type" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xcb13db51, "dvb_unregister_frontend" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0xdd64e639, "strscpy" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x9291fd02, "dvb_net_release" },
	{ 0x9255eff7, "fw_iso_context_start" },
	{ 0x95523e25, "fw_iso_context_queue_flush" },
	{ 0x66c54ff1, "input_event" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xfb578fc5, "memset" },
	{ 0x947be5cd, "param_ops_short" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x99a57911, "dvb_dmxdev_release" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xc2fcc7be, "dvb_net_init" },
	{ 0x86f434e2, "driver_unregister" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x6cdf5bee, "dvb_generic_release" },
	{ 0x5a921311, "strncmp" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x5ae8a115, "noop_llseek" },
	{ 0x3a35e172, "fw_iso_buffer_destroy" },
	{ 0x88b5e122, "dvb_unregister_device" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x7b0d51ce, "dvb_dmx_release" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0xd111bb59, "_dev_info" },
	{ 0xe3f0d416, "fw_iso_context_queue" },
	{ 0x5184b38a, "dvb_generic_ioctl" },
	{ 0xdcf60586, "dvb_dmx_swfilter_packets" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x94a09154, "input_register_device" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x2ed53eac, "dvb_generic_open" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x4e97c8d9, "input_free_device" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x830adb64, "fw_core_add_address_handler" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x60056b24, "dvb_register_adapter" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xfa2dfe94, "fw_iso_context_stop" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x510199b2, "fw_core_remove_address_handler" },
	{ 0x37a0cba, "kfree" },
	{ 0x9dd2ca1a, "fw_iso_context_create" },
	{ 0x69acdf38, "memcpy" },
	{ 0x2ab40469, "input_unregister_device" },
	{ 0x4df02057, "crc32_be" },
	{ 0x6eed2630, "param_array_ops" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x47969e1d, "fw_iso_buffer_init" },
	{ 0x187828b1, "fw_run_transaction" },
	{ 0x14472564, "fw_iso_context_destroy" },
	{ 0x58367a1e, "dvb_dmxdev_init" },
	{ 0x4f55cb4, "input_allocate_device" },
};

MODULE_INFO(depends, "dvb-core,firewire-core");

MODULE_ALIAS("ieee1394:ven00001287mo00000024sp0000A02Dver00010001*");
MODULE_ALIAS("ieee1394:ven00001287mo00000025sp0000A02Dver00010001*");
MODULE_ALIAS("ieee1394:ven00001287mo00000026sp0000A02Dver00010001*");
MODULE_ALIAS("ieee1394:ven00001287mo00000034sp0000A02Dver00010001*");
MODULE_ALIAS("ieee1394:ven00001287mo00000035sp0000A02Dver00010001*");
MODULE_ALIAS("ieee1394:ven00001287mo00000036sp0000A02Dver00010001*");

MODULE_INFO(srcversion, "6CD5E07BEBB05FFB03FE326");
