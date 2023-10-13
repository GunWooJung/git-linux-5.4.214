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
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x29361773, "complete" },
	{ 0x3955fcf6, "__kfifo_in_r" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0xdfce2a82, "mbox_request_channel" },
	{ 0xd111bb59, "_dev_info" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x4c4b17c2, "hwmon_device_register_with_groups" },
	{ 0x4d924f20, "memremap" },
	{ 0x23d6bd6e, "pcc_mbox_request_channel" },
	{ 0xacdeb71f, "device_property_read_u32_array" },
	{ 0xeee38cc9, "acpi_match_device" },
	{ 0x139f2189, "__kfifo_alloc" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x3adba3e3, "sysfs_notify" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x33fcf44a, "__kfifo_out_r" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x4a188115, "mbox_chan_txdone" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0xf1969a8e, "__usecs_to_jiffies" },
	{ 0x415e1c09, "mbox_send_message" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x849801aa, "pcc_mbox_free_channel" },
	{ 0x7c9533b4, "mbox_free_channel" },
	{ 0x1a45cb6c, "acpi_disabled" },
	{ 0xdb760f52, "__kfifo_free" },
	{ 0xd3f5b56e, "hwmon_device_unregister" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Capm,xgene-slimpro-hwmon");
MODULE_ALIAS("of:N*T*Capm,xgene-slimpro-hwmonC*");
MODULE_ALIAS("acpi*:APMC0D29:*");
MODULE_ALIAS("acpi*:APMC0D8A:*");

MODULE_INFO(srcversion, "C67806B5CC0088FC15D42DC");
