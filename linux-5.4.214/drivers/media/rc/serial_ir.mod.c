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
	{ 0xc371bb96, "param_ops_ulong" },
	{ 0x765395c3, "param_ops_int" },
	{ 0x68a41536, "param_ops_bool" },
	{ 0x74e831b6, "platform_device_unregister" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xa99a62a3, "platform_driver_unregister" },
	{ 0xaf465642, "platform_device_put" },
	{ 0xf14ea0e9, "platform_device_add" },
	{ 0xd73c36a2, "platform_device_alloc" },
	{ 0x19af53eb, "__platform_driver_register" },
	{ 0x12a38747, "usleep_range" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xffae8e8b, "nsecs_to_jiffies" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0xdf8c695a, "__ndelay" },
	{ 0xaed06536, "_dev_warn" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x1cf4def5, "devm_rc_register_device" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0xd111bb59, "_dev_info" },
	{ 0xf9a482f9, "msleep" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0xc7c073b7, "__devm_request_region" },
	{ 0x77358855, "iomem_resource" },
	{ 0x51765820, "devm_request_threaded_irq" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xf4f9453e, "devm_rc_allocate_device" },
	{ 0xc5850110, "printk" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xa3bff5cc, "ir_raw_event_handle" },
	{ 0xb8c5979e, "ir_raw_event_store_with_filter" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "rc-core");


MODULE_INFO(srcversion, "1895C1973DF2F06F6FD283B");
