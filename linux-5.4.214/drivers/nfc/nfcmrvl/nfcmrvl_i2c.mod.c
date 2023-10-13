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
	{ 0xdaa97e52, "nfcmrvl_nci_unregister_dev" },
	{ 0x1e428af2, "nfcmrvl_nci_recv_frame" },
	{ 0x875d03e0, "i2c_del_driver" },
	{ 0xad22201, "nfcmrvl_parse_dt" },
	{ 0xc5850110, "printk" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xb1a20db, "i2c_register_driver" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x92f8784b, "__alloc_skb" },
	{ 0x12a38747, "usleep_range" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xd8e6cdd2, "kfree_skb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xa3586a0e, "nfcmrvl_nci_register_dev" },
	{ 0x4fc58c0c, "i2c_transfer_buffer_flags" },
	{ 0xf89bc02c, "skb_put" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x51765820, "devm_request_threaded_irq" },
};

MODULE_INFO(depends, "nfcmrvl");

MODULE_ALIAS("i2c:nfcmrvl_i2c");
MODULE_ALIAS("of:N*T*Cmarvell,nfc-i2c");
MODULE_ALIAS("of:N*T*Cmarvell,nfc-i2cC*");

MODULE_INFO(srcversion, "D90B620E8564CD94583AB1D");
