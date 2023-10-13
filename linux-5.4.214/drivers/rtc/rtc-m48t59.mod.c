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
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8281b36, "devm_ioremap" },
	{ 0x8804d3fc, "__rtc_register_device" },
	{ 0xcd47c63, "rtc_nvmem_register" },
	{ 0xe10f5c53, "devm_rtc_allocate_device" },
	{ 0x51765820, "devm_request_threaded_irq" },
	{ 0x7e73a43b, "platform_get_irq" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0xd072dc20, "platform_get_resource" },
	{ 0x4eed1932, "rtc_update_irq" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x5838f6c9, "rtc_valid_tm" },
	{ 0x58f84c2d, "seq_printf" },
	{ 0xb6936ffe, "_bcd2bin" },
	{ 0xce8b1878, "__x86_indirect_thunk_r14" },
	{ 0x593c1bac, "__x86_indirect_thunk_rbx" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0xe7b00dfb, "__x86_indirect_thunk_r13" },
	{ 0x80ca5026, "_bin2bcd" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "E2A8CA0967EC4EA850220B2");
