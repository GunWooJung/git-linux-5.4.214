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
	{ 0x65e33f30, "fwnode_handle_put" },
	{ 0x14efa785, "fwnode_property_read_string" },
	{ 0xc70a5bf2, "fwnode_property_present" },
	{ 0x76f87430, "fwnode_property_read_u32_array" },
	{ 0xe8c403, "device_get_next_child_node" },
	{ 0xd617d865, "devm_pwm_get" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x41c10d3e, "devm_backlight_device_register" },
	{ 0xb8b5aa45, "__devm_regmap_init_i2c" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xd111bb59, "_dev_info" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x12b60659, "pwm_apply_state" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x12a38747, "usleep_range" },
	{ 0xc1889514, "regmap_update_bits_base" },
	{ 0x36f1a2b6, "regmap_read" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x904a8908, "regmap_write" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("i2c:lm3630a_bl");

MODULE_INFO(srcversion, "71107A037536B54B893EC56");
