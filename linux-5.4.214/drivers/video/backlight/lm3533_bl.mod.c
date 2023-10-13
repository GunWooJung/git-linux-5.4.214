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
	{ 0xea4f16c3, "lm3533_ctrlbank_set_max_current" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xc2107c52, "sysfs_create_group" },
	{ 0x41c10d3e, "devm_backlight_device_register" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0xdd7946f0, "lm3533_ctrlbank_set_brightness" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0xa05c9532, "lm3533_read" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x78386743, "lm3533_update" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0xa82f8d7f, "sysfs_remove_group" },
	{ 0x96848186, "scnprintf" },
	{ 0x6500117c, "lm3533_ctrlbank_get_pwm" },
	{ 0xb71b2705, "lm3533_ctrlbank_set_pwm" },
	{ 0x6a6e05bf, "kstrtou8" },
	{ 0x7babf728, "lm3533_ctrlbank_enable" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xa66c8885, "lm3533_ctrlbank_get_brightness" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x79c3be69, "lm3533_ctrlbank_disable" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "lm3533-ctrlbank,lm3533-core");


MODULE_INFO(srcversion, "D039BC369478C10D27A3750");
