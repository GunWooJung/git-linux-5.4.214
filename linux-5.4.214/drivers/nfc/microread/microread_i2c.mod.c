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
	{ 0x4bb2059f, "nfc_hci_recv_frame" },
	{ 0x875d03e0, "i2c_del_driver" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xbe92ed72, "skb_trim" },
	{ 0x306c7afa, "microread_probe" },
	{ 0xc5850110, "printk" },
	{ 0xd523d85d, "skb_push" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xbed6138e, "skb_pull" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xb1a20db, "i2c_register_driver" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x92f8784b, "__alloc_skb" },
	{ 0x12a38747, "usleep_range" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xd8e6cdd2, "kfree_skb" },
	{ 0x70078531, "microread_remove" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x4fc58c0c, "i2c_transfer_buffer_flags" },
	{ 0xf89bc02c, "skb_put" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0xc1514a3b, "free_irq" },
};

MODULE_INFO(depends, "hci,microread");

MODULE_ALIAS("i2c:microread");

MODULE_INFO(srcversion, "ADE6EA5AE70D63096521658");
