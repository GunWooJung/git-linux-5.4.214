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
	{ 0x53590eb7, "usb_kill_urb" },
	{ 0xe2e277fa, "flexcop_device_initialize" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x566b627d, "flexcop_device_kfree" },
	{ 0xc46ec519, "flexcop_sram_ctrl" },
	{ 0xfb578fc5, "memset" },
	{ 0xb95a6e6d, "usb_deregister" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xb9b32561, "usb_set_interface" },
	{ 0x25358e1b, "usb_control_msg" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x91a16357, "flexcop_device_kmalloc" },
	{ 0x94c8bc6d, "usb_free_coherent" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x8a2611eb, "usb_submit_urb" },
	{ 0x874cb15d, "flexcop_sram_set_dest" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xa8124485, "flexcop_pass_dmx_packets" },
	{ 0xec387bf1, "flexcop_wan_set_speed" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x69acdf38, "memcpy" },
	{ 0xaf37d977, "usb_register_driver" },
	{ 0xe2c54831, "usb_alloc_coherent" },
	{ 0x3273e28d, "usb_free_urb" },
	{ 0x875c1039, "flexcop_device_exit" },
	{ 0xedb483d8, "usb_alloc_urb" },
};

MODULE_INFO(depends, "b2c2-flexcop");

MODULE_ALIAS("usb:v0AF7p0101d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "CD23BCC3D2BD54009404448");
