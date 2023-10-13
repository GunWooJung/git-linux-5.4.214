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
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x5fb88a3, "devm_usb_get_phy" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x2b9997fb, "atomic_notifier_chain_register" },
	{ 0x1418158d, "power_supply_register" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xf40cb154, "devm_usb_get_phy_by_phandle" },
	{ 0xa08d547b, "devm_gpiod_get" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0xd3a6aa10, "power_supply_get_drvdata" },
	{ 0x6c731ec2, "usb_gadget_connect" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x12a38747, "usleep_range" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x78cdd186, "usb_gadget_disconnect" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xf928c918, "power_supply_changed" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xe23f1472, "gpiod_set_value" },
	{ 0xebdd7402, "power_supply_unregister" },
	{ 0x7181db30, "atomic_notifier_chain_unregister" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "udc-core");


MODULE_INFO(srcversion, "5261CFC53E10245CB17DE0C");
