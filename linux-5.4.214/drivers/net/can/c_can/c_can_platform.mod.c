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
	{ 0xa99a62a3, "platform_driver_unregister" },
	{ 0x19af53eb, "__platform_driver_register" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x69ee0d12, "register_c_can_dev" },
	{ 0x9962bc44, "pm_runtime_enable" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0xa4d2b9b5, "alloc_c_can_dev" },
	{ 0x1e57910a, "devm_ioremap_resource" },
	{ 0xd072dc20, "platform_get_resource" },
	{ 0x7e73a43b, "platform_get_irq" },
	{ 0x6164d63, "devm_clk_get" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x8958b6b1, "free_c_can_dev" },
	{ 0xfb4ec2db, "__pm_runtime_disable" },
	{ 0x205f8042, "unregister_c_can_dev" },
	{ 0x7ad55ce3, "netif_device_detach" },
	{ 0xc0f59efe, "c_can_power_down" },
	{ 0xaed06536, "_dev_warn" },
	{ 0x216cc777, "netdev_err" },
	{ 0xc5f6f445, "netif_device_attach" },
	{ 0x113c4d84, "c_can_power_up" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "c_can");

MODULE_ALIAS("of:N*T*Cbosch,c_can");
MODULE_ALIAS("of:N*T*Cbosch,c_canC*");
MODULE_ALIAS("of:N*T*Cbosch,d_can");
MODULE_ALIAS("of:N*T*Cbosch,d_canC*");
MODULE_ALIAS("of:N*T*Cti,dra7-d_can");
MODULE_ALIAS("of:N*T*Cti,dra7-d_canC*");
MODULE_ALIAS("of:N*T*Cti,am3352-d_can");
MODULE_ALIAS("of:N*T*Cti,am3352-d_canC*");
MODULE_ALIAS("of:N*T*Cti,am4372-d_can");
MODULE_ALIAS("of:N*T*Cti,am4372-d_canC*");
MODULE_ALIAS("platform:c_can_platform");
MODULE_ALIAS("platform:c_can");
MODULE_ALIAS("platform:d_can");

MODULE_INFO(srcversion, "0FAC198EA7BBB04E8A09594");
