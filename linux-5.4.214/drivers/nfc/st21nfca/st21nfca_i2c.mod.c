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
	{ 0xf9a482f9, "msleep" },
	{ 0x4bb2059f, "nfc_hci_recv_frame" },
	{ 0x875d03e0, "i2c_del_driver" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xa08d547b, "devm_gpiod_get" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xa04f68d, "st21nfca_hci_probe" },
	{ 0xbe92ed72, "skb_trim" },
	{ 0x66d378f8, "st21nfca_hci_remove" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xd523d85d, "skb_push" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xbed6138e, "skb_pull" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x9853f85f, "devm_acpi_dev_add_driver_gpios" },
	{ 0xb1a20db, "i2c_register_driver" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0x92f8784b, "__alloc_skb" },
	{ 0x12a38747, "usleep_range" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xd8e6cdd2, "kfree_skb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x52ecbc75, "crc_ccitt" },
	{ 0x4fc58c0c, "i2c_transfer_buffer_flags" },
	{ 0xe23f1472, "gpiod_set_value" },
	{ 0xf89bc02c, "skb_put" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x51765820, "devm_request_threaded_irq" },
	{ 0x61853e9a, "device_property_present" },
};

MODULE_INFO(depends, "hci,st21nfca_hci");

MODULE_ALIAS("i2c:st21nfca_hci");
MODULE_ALIAS("of:N*T*Cst,st21nfca-i2c");
MODULE_ALIAS("of:N*T*Cst,st21nfca-i2cC*");
MODULE_ALIAS("of:N*T*Cst,st21nfca_i2c");
MODULE_ALIAS("of:N*T*Cst,st21nfca_i2cC*");
MODULE_ALIAS("acpi*:SMO2100:*");

MODULE_INFO(srcversion, "717B4B9983897347BB5E3D3");
