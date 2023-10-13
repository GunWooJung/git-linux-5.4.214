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
	{ 0x74e831b6, "platform_device_unregister" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xa99a62a3, "platform_driver_unregister" },
	{ 0x56cf6cd9, "platform_device_register_full" },
	{ 0x19af53eb, "__platform_driver_register" },
	{ 0xab781570, "fb_get_options" },
	{ 0x7761bd3b, "register_framebuffer" },
	{ 0x259bbf30, "framebuffer_alloc" },
	{ 0xc5850110, "printk" },
	{ 0x85bd1608, "__request_region" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x1035c7c2, "__release_region" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0xedc03953, "iounmap" },
	{ 0x8b7b68bf, "framebuffer_release" },
	{ 0xfe00f05c, "unregister_framebuffer" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xb0e602eb, "memmove" },
	{ 0xa4191c0b, "memset_io" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "D5BFB85B5D3DFB32FE1E25D");
