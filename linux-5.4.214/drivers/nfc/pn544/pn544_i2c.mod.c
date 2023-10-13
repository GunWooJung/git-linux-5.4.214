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
	{ 0x4bb2059f, "nfc_hci_recv_frame" },
	{ 0x875d03e0, "i2c_del_driver" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xa08d547b, "devm_gpiod_get" },
	{ 0xbe92ed72, "skb_trim" },
	{ 0xc5850110, "printk" },
	{ 0x7f343d60, "pn544_hci_remove" },
	{ 0xd523d85d, "skb_push" },
	{ 0xbed6138e, "skb_pull" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x9853f85f, "devm_acpi_dev_add_driver_gpios" },
	{ 0xb1a20db, "i2c_register_driver" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x92f8784b, "__alloc_skb" },
	{ 0x12a38747, "usleep_range" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xd8e6cdd2, "kfree_skb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x52ecbc75, "crc_ccitt" },
	{ 0x4fc58c0c, "i2c_transfer_buffer_flags" },
	{ 0x3243092d, "nfc_fw_download_done" },
	{ 0x80500894, "request_firmware" },
	{ 0xc4fb10cd, "gpiod_set_value_cansleep" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xf89bc02c, "skb_put" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x51765820, "devm_request_threaded_irq" },
	{ 0x5c9109de, "release_firmware" },
	{ 0xe914e41e, "strcpy" },
	{ 0x1b204c27, "pn544_hci_probe" },
};

MODULE_INFO(depends, "hci,pn544,nfc");

MODULE_ALIAS("of:N*T*Cnxp,pn544-i2c");
MODULE_ALIAS("of:N*T*Cnxp,pn544-i2cC*");
MODULE_ALIAS("acpi*:NXP5440:*");
MODULE_ALIAS("i2c:pn544");

MODULE_INFO(srcversion, "6AD54626CE8856F18FB5541");
