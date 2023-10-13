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
	{ 0xa24f23d8, "__request_module" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x765395c3, "param_ops_int" },
	{ 0x449962d6, "dvb_usb_device_exit" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x2bb2479a, "dvb_usb_device_init" },
	{ 0xb35586ed, "i2c_transfer" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xdd64e639, "strscpy" },
	{ 0xe55191a1, "dvb_frontend_detach" },
	{ 0x947be5cd, "param_ops_short" },
	{ 0xb95a6e6d, "usb_deregister" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0xc5850110, "printk" },
	{ 0xb9b32561, "usb_set_interface" },
	{ 0x25358e1b, "usb_control_msg" },
	{ 0x868784cb, "__symbol_get" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x494ba38f, "usb_bulk_msg" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0x6eed2630, "param_array_ops" },
	{ 0xf05c7b8, "__x86_indirect_thunk_r15" },
	{ 0xaf37d977, "usb_register_driver" },
	{ 0xd55b19f0, "ir_raw_event_store" },
	{ 0x6e9dd606, "__symbol_put" },
	{ 0xa3bff5cc, "ir_raw_event_handle" },
};

MODULE_INFO(depends, "dvb-usb,dvb-core,rc-core");

MODULE_ALIAS("usb:v14F7p0500d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "4B942ADC4DC8E3FD9C6484D");
