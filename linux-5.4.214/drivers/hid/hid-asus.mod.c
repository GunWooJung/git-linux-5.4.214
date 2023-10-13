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
	{ 0x2b708d10, "hid_unregister_driver" },
	{ 0xb27fe432, "__hid_register_driver" },
	{ 0xc5850110, "printk" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xca944cd, "devm_kfree" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x9b9a702f, "devm_led_classdev_register_ext" },
	{ 0x57c46ceb, "asus_wmi_evaluate_method" },
	{ 0xc32e9ece, "input_mt_init_slots" },
	{ 0xdb7345ba, "input_alloc_absinfo" },
	{ 0xd4419732, "input_set_abs_params" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x54d0c27, "input_mt_sync_frame" },
	{ 0xf928c918, "power_supply_changed" },
	{ 0x90fade75, "input_mt_report_slot_state" },
	{ 0x66c54ff1, "input_event" },
	{ 0x6d253dca, "dmi_match" },
	{ 0xc6c38eb0, "hid_hw_start" },
	{ 0x49bdb973, "hid_open_report" },
	{ 0x62cf0c71, "power_supply_powers" },
	{ 0xbb2178f9, "devm_power_supply_register" },
	{ 0x15f68f5d, "devm_kasprintf" },
	{ 0x3232dfdb, "usb_hid_driver" },
	{ 0x1e6d26a8, "strstr" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xd3a6aa10, "power_supply_get_drvdata" },
	{ 0xffa8e380, "hid_hw_stop" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x69acdf38, "memcpy" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0xb0e602eb, "memmove" },
	{ 0xd111bb59, "_dev_info" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xaed06536, "_dev_warn" },
	{ 0x37a0cba, "kfree" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "hid,asus-wmi,usbhid");

MODULE_ALIAS("hid:b0018g*v00000B05p00008585");
MODULE_ALIAS("hid:b0018g*v00000B05p00000101");
MODULE_ALIAS("hid:b0003g*v00000B05p00001854");
MODULE_ALIAS("hid:b0003g*v00000B05p00001837");
MODULE_ALIAS("hid:b0003g*v00000B05p00001822");
MODULE_ALIAS("hid:b0003g*v00000B05p00001869");
MODULE_ALIAS("hid:b0003g*v00000B05p000017E0");
MODULE_ALIAS("hid:b0003g*v00000B05p00001807");
MODULE_ALIAS("hid:b0003g*v00000B05p0000183D");
MODULE_ALIAS("hid:b0003g*v000004F2p00001125");
MODULE_ALIAS("hid:b0003g*v0000062Ap00005110");
MODULE_ALIAS("hid:b0003g*v00000C45p00005112");
MODULE_ALIAS("hid:b0005g*v00000B05p00008502");

MODULE_INFO(srcversion, "00AA14400CF1D66B7D233F1");
