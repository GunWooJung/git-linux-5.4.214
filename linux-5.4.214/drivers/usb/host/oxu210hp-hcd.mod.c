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
	{ 0x765395c3, "param_ops_int" },
	{ 0x1cd6f316, "param_ops_uint" },
	{ 0x68a41536, "param_ops_bool" },
	{ 0x4016b03e, "platform_bus_type" },
	{ 0xa99a62a3, "platform_driver_unregister" },
	{ 0x19af53eb, "__platform_driver_register" },
	{ 0x1000e51, "schedule" },
	{ 0x5bf4ef75, "usb_hcd_resume_root_hub" },
	{ 0x543eed24, "usb_hcd_poll_rh_status" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x151f4898, "schedule_timeout_uninterruptible" },
	{ 0x69acdf38, "memcpy" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x37a0cba, "kfree" },
	{ 0x6c8e8bfd, "usb_hcd_giveback_urb" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0x7e64181d, "usb_calc_bus_time" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xb22b81f, "usb_hc_died" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x96848186, "scnprintf" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0xbc477a2, "irq_set_irq_type" },
	{ 0x1e57910a, "devm_ioremap_resource" },
	{ 0xd072dc20, "platform_get_resource" },
	{ 0x19a304ba, "usb_disabled" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xf9a482f9, "msleep" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xd9996d5a, "device_wakeup_enable" },
	{ 0x1d8b98ff, "usb_add_hcd" },
	{ 0x3a43808f, "usb_create_hcd" },
	{ 0xa9107ac8, "usb_put_hcd" },
	{ 0xf28ad204, "usb_remove_hcd" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "8C70BFE220698CC162C9929");
