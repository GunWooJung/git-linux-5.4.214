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

MODULE_INFO(staging, "Y");

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xed93c0b3, "module_layout" },
	{ 0xfd05907, "gb_gbphy_register_driver" },
	{ 0xf28ad204, "usb_remove_hcd" },
	{ 0x3a43808f, "usb_create_hcd" },
	{ 0xa9107ac8, "usb_put_hcd" },
	{ 0x2ddbf8ad, "gb_gbphy_deregister_driver" },
	{ 0xaed06536, "_dev_warn" },
	{ 0x3c375ccc, "gb_operation_sync_timeout" },
	{ 0x8ef3357e, "gb_connection_destroy" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xe7c8c0fc, "gb_operation_request_send_sync_timeout" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x473c262d, "gb_connection_enable" },
	{ 0x18fb44dd, "gb_connection_create" },
	{ 0x69acdf38, "memcpy" },
	{ 0x71fef88e, "gb_connection_disable" },
	{ 0x5bf4ef75, "usb_hcd_resume_root_hub" },
	{ 0x70117f57, "gb_operation_put" },
	{ 0x5c8c319a, "gb_operation_create_flags" },
};

MODULE_INFO(depends, "gb-gbphy,greybus");


MODULE_INFO(srcversion, "D05FAA9A391F5997406B22E");
