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
	{ 0xc5850110, "printk" },
	{ 0xbc477a2, "irq_set_irq_type" },
	{ 0x1cf8a6b9, "w1_add_master_device" },
	{ 0x51765820, "devm_request_threaded_irq" },
	{ 0x8281b36, "devm_ioremap" },
	{ 0xd072dc20, "platform_get_resource" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x29361773, "complete" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xf065f629, "ioread16be" },
	{ 0xc5534d64, "ioread16" },
	{ 0xe484e35f, "ioread32" },
	{ 0xfdb9b629, "ioread32be" },
	{ 0xf10de535, "ioread8" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xcc6f6604, "w1_remove_master_device" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0xf9a482f9, "msleep" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x6a86bc1, "iowrite16" },
	{ 0x26f8f0b8, "iowrite16be" },
	{ 0xe419bc99, "iowrite32be" },
	{ 0x848d372e, "iowrite8" },
	{ 0x4a453f53, "iowrite32" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "wire");


MODULE_INFO(srcversion, "DE9D860A7F2FC5EE87D5B60");
