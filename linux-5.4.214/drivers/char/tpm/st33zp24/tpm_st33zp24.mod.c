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
	{ 0x3fa6d454, "tpm_pm_resume" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0x7ab88a45, "system_freezing_cnt" },
	{ 0xf37d2c0b, "gpio_to_desc" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xb5319585, "tpm1_do_selftest" },
	{ 0xaf7d0f48, "current_task" },
	{ 0x53963c6, "freezing_slow_path" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x79a3da7a, "tpmm_chip_alloc" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x4603116d, "tpm_chip_register" },
	{ 0xd111bb59, "_dev_info" },
	{ 0xdb91a2d7, "tpm_pm_suspend" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xcdcff6fb, "tpm_chip_unregister" },
	{ 0x8def230c, "tpm_calc_ordinal_duration" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xfcec0987, "enable_irq" },
	{ 0xffb817fb, "gpiod_set_raw_value" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x51765820, "devm_request_threaded_irq" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "9E30BEE87F67724D28A3B31");
