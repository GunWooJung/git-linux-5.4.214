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
	{ 0xd7c68d05, "param_get_bool" },
	{ 0x2b708d10, "hid_unregister_driver" },
	{ 0xb27fe432, "__hid_register_driver" },
	{ 0x321dadd0, "hid_hw_open" },
	{ 0x1c89a710, "hid_add_device" },
	{ 0xc6c38eb0, "hid_hw_start" },
	{ 0x5792f848, "strlcpy" },
	{ 0x20415a21, "hid_allocate_device" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x49bdb973, "hid_open_report" },
	{ 0x62cf0c71, "power_supply_powers" },
	{ 0x1418158d, "power_supply_register" },
	{ 0x15f68f5d, "devm_kasprintf" },
	{ 0x754d539c, "strlen" },
	{ 0xf928c918, "power_supply_changed" },
	{ 0x66c54ff1, "input_event" },
	{ 0xa6ec525f, "hid_input_report" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xd74eb759, "param_set_bool" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xd3a6aa10, "power_supply_get_drvdata" },
	{ 0xc5850110, "printk" },
	{ 0x4e97c8d9, "input_free_device" },
	{ 0x94a09154, "input_register_device" },
	{ 0xdb7345ba, "input_alloc_absinfo" },
	{ 0xd4419732, "input_set_abs_params" },
	{ 0x7ef2952e, "input_set_capability" },
	{ 0x4f55cb4, "input_allocate_device" },
	{ 0x5495392, "hid_debug" },
	{ 0x2757c65b, "hid_parse_report" },
	{ 0xffa8e380, "hid_hw_stop" },
	{ 0xef0b66a5, "hid_hw_close" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xc0db57d8, "hid_destroy_device" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x2ab40469, "input_unregister_device" },
	{ 0xebdd7402, "power_supply_unregister" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x37a0cba, "kfree" },
	{ 0xf9a482f9, "msleep" },
	{ 0x69acdf38, "memcpy" },
	{ 0x13dd8367, "hid_alloc_report_buf" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "hid");

MODULE_ALIAS("hid:b0003g*v000028DEp00001102");
MODULE_ALIAS("hid:b0003g*v000028DEp00001142");

MODULE_INFO(srcversion, "59CC1B0E5A1A72045DE76F9");
