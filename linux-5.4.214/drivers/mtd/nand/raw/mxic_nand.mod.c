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
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0x815588a6, "clk_enable" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xb7329c06, "clk_set_phase" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0x51181121, "mtd_device_parse_register" },
	{ 0x5566c033, "nand_scan_with_ids" },
	{ 0x51765820, "devm_request_threaded_irq" },
	{ 0x7e73a43b, "platform_get_irq" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc423de90, "devm_platform_ioremap_resource" },
	{ 0x6164d63, "devm_clk_get" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xaed06536, "_dev_warn" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x29361773, "complete" },
	{ 0x3ae5364c, "nand_release" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "mtd,nand");

MODULE_ALIAS("of:N*T*Cmxic,multi-itfc-v009-nand-controller");
MODULE_ALIAS("of:N*T*Cmxic,multi-itfc-v009-nand-controllerC*");

MODULE_INFO(srcversion, "4918049C9E17C5D73021A0C");
