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
	{ 0x6fd5f03e, "da9052_request_irq" },
	{ 0xb13c162f, "devm_rtc_device_register" },
	{ 0x4fc0c5ca, "device_init_wakeup" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x356461c8, "rtc_time64_to_tm" },
	{ 0x4f2250ba, "rtc_tm_to_time64" },
	{ 0xc1889514, "regmap_update_bits_base" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x5838f6c9, "rtc_valid_tm" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xf9a482f9, "msleep" },
	{ 0x36f1a2b6, "regmap_read" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x904a8908, "regmap_write" },
	{ 0x4eed1932, "rtc_update_irq" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "1DADE6889DA551C80A966D4");
