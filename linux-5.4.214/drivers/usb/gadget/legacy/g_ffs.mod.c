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
	{ 0x1cd6f316, "param_ops_uint" },
	{ 0xcce57a7f, "param_ops_ushort" },
	{ 0xdc67eaad, "param_ops_byte" },
	{ 0x131e5561, "param_ops_charp" },
	{ 0x6eed2630, "param_array_ops" },
	{ 0xd28ce2a0, "ffs_name_dev" },
	{ 0xad3e9f2e, "ffs_single_dev" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xab956f02, "usb_composite_probe" },
	{ 0x35c9d430, "usb_remove_function" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xc5850110, "printk" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x2fe87fdc, "usb_composite_overwrite_options" },
	{ 0x496718df, "usb_add_config" },
	{ 0x15713089, "usb_string_ids_tab" },
	{ 0xd49c16c1, "rndis_borrow_net" },
	{ 0x96bcd5be, "gether_register_netdev" },
	{ 0x1d2e4d7c, "gether_set_gadget" },
	{ 0x54e8b57d, "gether_set_dev_addr" },
	{ 0x2a0eb1ad, "gether_set_host_addr" },
	{ 0x641676d2, "gether_set_qmult" },
	{ 0x3a66f208, "usb_get_function_instance" },
	{ 0x37a0cba, "kfree" },
	{ 0x82fcc0d0, "usb_put_function_instance" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x7d8a9e31, "usb_composite_unregister" },
	{ 0x191062ef, "usb_put_function" },
	{ 0x30d1550c, "usb_add_function" },
	{ 0x8f3b9bbc, "usb_get_function" },
	{ 0x6d71399f, "try_module_get" },
	{ 0xdf46d4f1, "module_put" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "usb_f_fs,libcomposite,usb_f_rndis,u_ether");


MODULE_INFO(srcversion, "5A5A19DCA501474B6128BFD");
