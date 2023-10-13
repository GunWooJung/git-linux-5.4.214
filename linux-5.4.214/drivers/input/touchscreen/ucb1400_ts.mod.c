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
	{ 0x68a41536, "param_ops_bool" },
	{ 0x765395c3, "param_ops_int" },
	{ 0xa99a62a3, "platform_driver_unregister" },
	{ 0x19af53eb, "__platform_driver_register" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x66c54ff1, "input_event" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0xf9a482f9, "msleep" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x4e97c8d9, "input_free_device" },
	{ 0xab600421, "probe_irq_off" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xb121390a, "probe_irq_on" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x94a09154, "input_register_device" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xd4419732, "input_set_abs_params" },
	{ 0x59259bae, "ucb1400_adc_read" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x4f55cb4, "input_allocate_device" },
	{ 0x2ab40469, "input_unregister_device" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "ucb1400_core");


MODULE_INFO(srcversion, "24430FD9A608AB918FF665B");
