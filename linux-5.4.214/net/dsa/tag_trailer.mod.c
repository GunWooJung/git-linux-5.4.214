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
	{ 0x4a75ed2d, "dsa_tag_drivers_unregister" },
	{ 0x53f6f97d, "dsa_tag_drivers_register" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xad263612, "consume_skb" },
	{ 0xace59822, "skb_copy_and_csum_dev" },
	{ 0xf89bc02c, "skb_put" },
	{ 0x92f8784b, "__alloc_skb" },
	{ 0x90a69765, "__pskb_pull_tail" },
	{ 0xa1713526, "pskb_trim_rcsum_slow" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "dsa_core");


MODULE_INFO(srcversion, "17948EE8633A57EF767DF73");
