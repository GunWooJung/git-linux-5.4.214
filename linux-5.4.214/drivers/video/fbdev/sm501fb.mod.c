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
	{ 0x3967b466, "cfb_imageblit" },
	{ 0x131e5561, "param_ops_charp" },
	{ 0xc371bb96, "param_ops_ulong" },
	{ 0xa99a62a3, "platform_driver_unregister" },
	{ 0x19af53eb, "__platform_driver_register" },
	{ 0xaed06536, "_dev_warn" },
	{ 0xa4191c0b, "memset_io" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x85bd1608, "__request_region" },
	{ 0xd072dc20, "platform_get_resource" },
	{ 0x7e73a43b, "platform_get_irq" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x12f6f69c, "fb_videomode_to_var" },
	{ 0x7761bd3b, "register_framebuffer" },
	{ 0xd04364dd, "fb_set_cmap" },
	{ 0x7a890c8, "fb_alloc_cmap" },
	{ 0xf00c52b4, "fb_find_mode" },
	{ 0x50a4698c, "fb_videomode_to_modelist" },
	{ 0x397edd5, "fb_edid_to_monspecs" },
	{ 0x5792f848, "strlcpy" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xfbdd5b75, "sm501_misc_control" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x70be26d3, "sm501_modify_reg" },
	{ 0xcdebb827, "sm501_set_clock" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x259bbf30, "framebuffer_alloc" },
	{ 0x8b7b68bf, "framebuffer_release" },
	{ 0x37a0cba, "kfree" },
	{ 0xfe00f05c, "unregister_framebuffer" },
	{ 0x98b71c6, "fb_dealloc_cmap" },
	{ 0x1035c7c2, "__release_region" },
	{ 0x77358855, "iomem_resource" },
	{ 0xedc03953, "iounmap" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x7d628444, "memcpy_fromio" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x23c16d01, "sm501_unit_power" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x999e8297, "vfree" },
	{ 0xc631580a, "console_unlock" },
	{ 0x328bbfeb, "fb_set_suspend" },
	{ 0xfbaaf01e, "console_lock" },
	{ 0xb9e7429c, "memcpy_toio" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x96b29254, "strncasecmp" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "sm501");


MODULE_INFO(srcversion, "7C00ADF709C5C92B3FB6FD1");
