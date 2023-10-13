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
	{ 0x2f2c95c4, "flush_work" },
	{ 0xebdd7402, "power_supply_unregister" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xaed06536, "_dev_warn" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xbd6e4545, "irq_create_mapping_affinity" },
	{ 0x7a47b126, "platform_get_resource_byname" },
	{ 0x1418158d, "power_supply_register" },
	{ 0xde6c92a5, "devm_iio_channel_get" },
	{ 0xd111bb59, "_dev_info" },
	{ 0xfaa6b854, "lp8788_write_byte" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xf928c918, "power_supply_changed" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x96848186, "scnprintf" },
	{ 0x5bfbdd92, "iio_read_channel_processed" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x4c412aba, "lp8788_read_byte" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "industrialio");


MODULE_INFO(srcversion, "F693E7F61346B34896047DB");
