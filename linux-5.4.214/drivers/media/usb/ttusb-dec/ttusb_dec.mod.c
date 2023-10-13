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
	{ 0x947be5cd, "param_ops_short" },
	{ 0x6eed2630, "param_array_ops" },
	{ 0xb95a6e6d, "usb_deregister" },
	{ 0xaf37d977, "usb_register_driver" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0x5c9109de, "release_firmware" },
	{ 0x80500894, "request_firmware" },
	{ 0x4e97c8d9, "input_free_device" },
	{ 0xca680f5a, "ttusbdecfe_dvbs_attach" },
	{ 0x94a09154, "input_register_device" },
	{ 0x4f55cb4, "input_allocate_device" },
	{ 0xf9c0b663, "strlcat" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xb9b32561, "usb_set_interface" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0x8b51dea0, "dvb_register_frontend" },
	{ 0xe1af0e90, "ttusbdecfe_dvbt_attach" },
	{ 0xc2fcc7be, "dvb_net_init" },
	{ 0x58367a1e, "dvb_dmxdev_init" },
	{ 0x67480317, "dvb_dmx_init" },
	{ 0x60056b24, "dvb_register_adapter" },
	{ 0xe2c54831, "usb_alloc_coherent" },
	{ 0xedb483d8, "usb_alloc_urb" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x494ba38f, "usb_bulk_msg" },
	{ 0xfb578fc5, "memset" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x69acdf38, "memcpy" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x66c54ff1, "input_event" },
	{ 0x8a2611eb, "usb_submit_urb" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0x2ab40469, "input_unregister_device" },
	{ 0x26d929db, "dvb_unregister_adapter" },
	{ 0xcb13db51, "dvb_unregister_frontend" },
	{ 0x7b0d51ce, "dvb_dmx_release" },
	{ 0x99a57911, "dvb_dmxdev_release" },
	{ 0x9291fd02, "dvb_net_release" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x53590eb7, "usb_kill_urb" },
	{ 0x94c8bc6d, "usb_free_coherent" },
	{ 0x37a0cba, "kfree" },
	{ 0x3273e28d, "usb_free_urb" },
	{ 0xc5850110, "printk" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "ttusbdecfe,dvb-core");

MODULE_ALIAS("usb:v0B48p1006d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B48p1008d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B48p1009d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "919EEA1BD9A7A3ECD84E7E6");
