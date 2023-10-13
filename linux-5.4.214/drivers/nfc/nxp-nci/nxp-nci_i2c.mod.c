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
	{ 0x875d03e0, "i2c_del_driver" },
	{ 0x6f5aa457, "nci_recv_frame" },
	{ 0xa08d547b, "devm_gpiod_get" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xbda33fc3, "nxp_nci_probe" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x9853f85f, "devm_acpi_dev_add_driver_gpios" },
	{ 0xb1a20db, "i2c_register_driver" },
	{ 0x92f8784b, "__alloc_skb" },
	{ 0x12a38747, "usleep_range" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xd8e6cdd2, "kfree_skb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x4fc58c0c, "i2c_transfer_buffer_flags" },
	{ 0xed5fd77c, "nxp_nci_remove" },
	{ 0xc56d7886, "nxp_nci_fw_recv_frame" },
	{ 0xe23f1472, "gpiod_set_value" },
	{ 0xf89bc02c, "skb_put" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0xc1514a3b, "free_irq" },
};

MODULE_INFO(depends, "nci,nxp-nci");

MODULE_ALIAS("of:N*T*Cnxp,nxp-nci-i2c");
MODULE_ALIAS("of:N*T*Cnxp,nxp-nci-i2cC*");
MODULE_ALIAS("acpi*:NXP1001:*");
MODULE_ALIAS("acpi*:NXP7471:*");
MODULE_ALIAS("i2c:nxp-nci_i2c");

MODULE_INFO(srcversion, "897F27B3A5EEA30F2EB08BD");
