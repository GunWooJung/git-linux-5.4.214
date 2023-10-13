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
	{ 0x765395c3, "param_ops_int" },
	{ 0xa99a62a3, "platform_driver_unregister" },
	{ 0x19af53eb, "__platform_driver_register" },
	{ 0x51765820, "devm_request_threaded_irq" },
	{ 0xbd6e4545, "irq_create_mapping_affinity" },
	{ 0xb13c162f, "devm_rtc_device_register" },
	{ 0x4fc0c5ca, "device_init_wakeup" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xaed06536, "_dev_warn" },
	{ 0x41826a4a, "max8997_bulk_write" },
	{ 0x318d6fec, "mutex_is_locked" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xded2ada4, "max8997_bulk_read" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x4eed1932, "rtc_update_irq" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xc5850110, "printk" },
	{ 0xea02a1d2, "max8997_read_reg" },
	{ 0x99899416, "max8997_update_reg" },
	{ 0xd111bb59, "_dev_info" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xf9a482f9, "msleep" },
	{ 0xfc3092d6, "max8997_write_reg" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("platform:max8997-rtc");

MODULE_INFO(srcversion, "76174828739DCAF1DFED3C2");
