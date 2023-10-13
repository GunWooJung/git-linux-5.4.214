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
	{ 0x3967b466, "cfb_imageblit" },
	{ 0xded9b275, "cfb_copyarea" },
	{ 0xf915b474, "cfb_fillrect" },
	{ 0xcd8be1a9, "matroxfb_unregister_driver" },
	{ 0xb6a9a1b7, "matroxfb_register_driver" },
	{ 0xab781570, "fb_get_options" },
	{ 0x3cf89419, "fb_set_var" },
	{ 0x7761bd3b, "register_framebuffer" },
	{ 0x7a890c8, "fb_alloc_cmap" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xd75956cb, "matroxfb_enable_irq" },
	{ 0x2430083f, "matroxfb_wait_for_sync" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xf05c7b8, "__x86_indirect_thunk_r15" },
	{ 0xeb97322e, "DAC1064_global_restore" },
	{ 0xcfc645f2, "DAC1064_global_init" },
	{ 0x53b954a2, "up_read" },
	{ 0x668b19a1, "down_read" },
	{ 0xcdc90c64, "matroxfb_var2my" },
	{ 0xc5850110, "printk" },
	{ 0xfe00f05c, "unregister_framebuffer" },
	{ 0xce807a25, "up_write" },
	{ 0x57bc19d2, "down_write" },
	{ 0x37a0cba, "kfree" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "matroxfb_base,matroxfb_DAC1064,matroxfb_misc");


MODULE_INFO(srcversion, "0ECBDA0237237F0F38BA0EF");
