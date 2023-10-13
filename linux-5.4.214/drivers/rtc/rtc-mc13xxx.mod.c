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
	{ 0x75ed0899, "__platform_driver_probe" },
	{ 0x4f2250ba, "rtc_tm_to_time64" },
	{ 0xbaa31e69, "mc13xxx_reg_write" },
	{ 0x8804d3fc, "__rtc_register_device" },
	{ 0x8cd34fef, "mc13xxx_irq_request" },
	{ 0xe10f5c53, "devm_rtc_allocate_device" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x356461c8, "rtc_time64_to_tm" },
	{ 0xa52acdc9, "mc13xxx_irq_status" },
	{ 0x83d9f9d2, "mc13xxx_reg_read" },
	{ 0x4eed1932, "rtc_update_irq" },
	{ 0x3589d732, "mc13xxx_irq_free" },
	{ 0x6ee328a6, "mc13xxx_unlock" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x67cfb638, "mc13xxx_irq_unmask" },
	{ 0xa736d309, "mc13xxx_irq_mask" },
	{ 0x36ac3763, "mc13xxx_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "mc13xxx-core");

MODULE_ALIAS("platform:mc13783-rtc");
MODULE_ALIAS("platform:mc13892-rtc");
MODULE_ALIAS("platform:mc34708-rtc");

MODULE_INFO(srcversion, "90B6B9FFBEC270CA9972F13");
