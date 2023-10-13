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
	{ 0x875d03e0, "i2c_del_driver" },
	{ 0xb1a20db, "i2c_register_driver" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x9c68f47f, "cec_transmit_done_ts" },
	{ 0x5330a196, "cec_received_msg_ts" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x47101dd7, "cec_register_cec_notifier" },
	{ 0x3b7ef154, "devm_remove_action" },
	{ 0x4b080ad0, "cec_register_adapter" },
	{ 0xff4f8ad5, "cec_notifier_get_conn" },
	{ 0x51765820, "devm_request_threaded_irq" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x33560c9e, "devm_add_action" },
	{ 0xc7b2393b, "cec_allocate_adapter" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0xaed06536, "_dev_warn" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xf9a482f9, "msleep" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x69acdf38, "memcpy" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0xb35586ed, "i2c_transfer" },
	{ 0x207c2627, "cec_delete_adapter" },
	{ 0xb4e2add, "cec_notifier_put" },
	{ 0xb172111a, "cec_unregister_adapter" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("i2c:tda9950");

MODULE_INFO(srcversion, "853CD6F0D4B93819622BDA9");
