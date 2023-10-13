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
	{ 0xa6334991, "fb_sys_read" },
	{ 0xc371bb96, "param_ops_ulong" },
	{ 0x1cd6f316, "param_ops_uint" },
	{ 0x74e831b6, "platform_device_unregister" },
	{ 0xa99a62a3, "platform_driver_unregister" },
	{ 0xaf465642, "platform_device_put" },
	{ 0xf14ea0e9, "platform_device_add" },
	{ 0xd73c36a2, "platform_device_alloc" },
	{ 0x19af53eb, "__platform_driver_register" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x90b152c8, "sys_fillrect" },
	{ 0xb77d54c9, "sys_copyarea" },
	{ 0x7a545545, "sys_imageblit" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xc5850110, "printk" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x7761bd3b, "register_framebuffer" },
	{ 0x259bbf30, "framebuffer_alloc" },
	{ 0x40a9b349, "vzalloc" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x1000e51, "schedule" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xd5fd90f1, "prepare_to_wait" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0xaf7d0f48, "current_task" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0x8b7b68bf, "framebuffer_release" },
	{ 0x999e8297, "vfree" },
	{ 0xfe00f05c, "unregister_framebuffer" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "fb_sys_fops,sysfillrect,syscopyarea,sysimgblt");


MODULE_INFO(srcversion, "B2B8A1B8313F52CC9F00021");
