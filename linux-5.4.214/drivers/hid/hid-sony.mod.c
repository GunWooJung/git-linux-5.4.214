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
	{ 0xa7d5f92e, "ida_destroy" },
	{ 0x2b708d10, "hid_unregister_driver" },
	{ 0xb27fe432, "__hid_register_driver" },
	{ 0x5495392, "hid_debug" },
	{ 0xc5850110, "printk" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x5748356e, "device_create_file" },
	{ 0x9b9a702f, "devm_led_classdev_register_ext" },
	{ 0xce96f2ee, "hid_validate_values" },
	{ 0x84f5e5a5, "input_ff_create_memless" },
	{ 0x7ef2952e, "input_set_capability" },
	{ 0x321dadd0, "hid_hw_open" },
	{ 0x62cf0c71, "power_supply_powers" },
	{ 0xbb2178f9, "devm_power_supply_register" },
	{ 0x15f68f5d, "devm_kasprintf" },
	{ 0xe7a02573, "ida_alloc_range" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xc6854343, "__hid_request" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x6a6e05bf, "kstrtou8" },
	{ 0x174e203e, "device_remove_file" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xffb7c514, "ida_free" },
	{ 0xef0b66a5, "hid_hw_close" },
	{ 0xc32e9ece, "input_mt_init_slots" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x90fade75, "input_mt_report_slot_state" },
	{ 0x54d0c27, "input_mt_sync_frame" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x66c54ff1, "input_event" },
	{ 0xffa8e380, "hid_hw_stop" },
	{ 0xc6c38eb0, "hid_hw_start" },
	{ 0x49bdb973, "hid_open_report" },
	{ 0xd3a6aa10, "power_supply_get_drvdata" },
	{ 0xdb7345ba, "input_alloc_absinfo" },
	{ 0xd4419732, "input_set_abs_params" },
	{ 0x94a09154, "input_register_device" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x754d539c, "strlen" },
	{ 0x2cc132c2, "devm_input_allocate_device" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xaed06536, "_dev_warn" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0x37a0cba, "kfree" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "hid,ff-memless");

MODULE_ALIAS("hid:b0003g*v0000054Cp00000268");
MODULE_ALIAS("hid:b0003g*v0000054Cp0000042F");
MODULE_ALIAS("hid:b0005g*v0000054Cp0000042F");
MODULE_ALIAS("hid:b0003g*v0000054Cp000003D5");
MODULE_ALIAS("hid:b0005g*v0000054Cp000003D5");
MODULE_ALIAS("hid:b0005g*v0000054Cp00000268");
MODULE_ALIAS("hid:b0003g*v0000054Cp0000024B");
MODULE_ALIAS("hid:b0003g*v0000054Cp00000374");
MODULE_ALIAS("hid:b0003g*v0000054Cp00000002");
MODULE_ALIAS("hid:b0003g*v0000054Cp00001000");
MODULE_ALIAS("hid:b0005g*v0000054Cp00000306");
MODULE_ALIAS("hid:b0005g*v0000046Dp00000306");
MODULE_ALIAS("hid:b0005g*v00000609p00000306");
MODULE_ALIAS("hid:b0003g*v0000054Cp000005C4");
MODULE_ALIAS("hid:b0005g*v0000054Cp000005C4");
MODULE_ALIAS("hid:b0003g*v0000054Cp000009CC");
MODULE_ALIAS("hid:b0005g*v0000054Cp000009CC");
MODULE_ALIAS("hid:b0003g*v0000054Cp00000BA0");
MODULE_ALIAS("hid:b0003g*v00001345p00003008");
MODULE_ALIAS("hid:b0005g*v00000609p00000368");
MODULE_ALIAS("hid:b0005g*v00000609p00000369");

MODULE_INFO(srcversion, "4C2DDDB818D64BA4A3C35DF");
