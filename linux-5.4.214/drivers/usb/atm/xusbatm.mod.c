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
	{ 0xcce57a7f, "param_ops_ushort" },
	{ 0xdc67eaad, "param_ops_byte" },
	{ 0x6eed2630, "param_array_ops" },
	{ 0x746500fd, "usbatm_usb_disconnect" },
	{ 0xb95a6e6d, "usb_deregister" },
	{ 0xaf37d977, "usb_register_driver" },
	{ 0xc5850110, "printk" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xb9b32561, "usb_set_interface" },
	{ 0xb03ebff, "usb_driver_claim_interface" },
	{ 0x190599d3, "usb_altnum_to_altsetting" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x7794ba54, "usb_driver_release_interface" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0xa2d33a1d, "usbatm_usb_probe" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "usbatm");


MODULE_INFO(srcversion, "8874015DD65844BE4130A67");
