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
	{ 0x6971447a, "rtc_month_days" },
	{ 0x77358855, "iomem_resource" },
	{ 0x9fb3106c, "rtc_add_group" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0x263ed23b, "__x86_indirect_thunk_r12" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0x58f84c2d, "seq_printf" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x19af53eb, "__platform_driver_register" },
	{ 0x80ca5026, "_bin2bcd" },
	{ 0x4859b8bb, "rtc_year_days" },
	{ 0x4eed1932, "rtc_update_irq" },
	{ 0xaed06536, "_dev_warn" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0xc5850110, "printk" },
	{ 0xe7b00dfb, "__x86_indirect_thunk_r13" },
	{ 0x593c1bac, "__x86_indirect_thunk_rbx" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xd072dc20, "platform_get_resource" },
	{ 0xce8b1878, "__x86_indirect_thunk_r14" },
	{ 0xb6936ffe, "_bcd2bin" },
	{ 0xcd47c63, "rtc_nvmem_register" },
	{ 0x8804d3fc, "__rtc_register_device" },
	{ 0xe10f5c53, "devm_rtc_allocate_device" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xc7c073b7, "__devm_request_region" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x8281b36, "devm_ioremap" },
	{ 0xf05c7b8, "__x86_indirect_thunk_r15" },
	{ 0x7e73a43b, "platform_get_irq" },
	{ 0xa99a62a3, "platform_driver_unregister" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x51765820, "devm_request_threaded_irq" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "81990A761BB6D2CC03C23BD");
