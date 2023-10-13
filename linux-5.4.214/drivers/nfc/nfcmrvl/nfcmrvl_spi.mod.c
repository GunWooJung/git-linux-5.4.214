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
	{ 0x3ce30ef8, "nci_spi_read" },
	{ 0xdaa97e52, "nfcmrvl_nci_unregister_dev" },
	{ 0x1e428af2, "nfcmrvl_nci_recv_frame" },
	{ 0xf6dd8fef, "__spi_register_driver" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xad22201, "nfcmrvl_parse_dt" },
	{ 0xc5850110, "printk" },
	{ 0x86f434e2, "driver_unregister" },
	{ 0x5fa5b4bf, "nci_spi_send" },
	{ 0x38fbead, "nci_spi_allocate_spi" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xa3586a0e, "nfcmrvl_nci_register_dev" },
	{ 0x29361773, "complete" },
	{ 0xf89bc02c, "skb_put" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x51765820, "devm_request_threaded_irq" },
};

MODULE_INFO(depends, "nci_spi,nfcmrvl");

MODULE_ALIAS("of:N*T*Cmarvell,nfc-spi");
MODULE_ALIAS("of:N*T*Cmarvell,nfc-spiC*");
MODULE_ALIAS("spi:nfcmrvl_spi");

MODULE_INFO(srcversion, "23120799A62BB74370771FA");
