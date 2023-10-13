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
	{ 0x2fe9b3cd, "xt_unregister_targets" },
	{ 0xc8dbe1c6, "xt_unregister_target" },
	{ 0x3fbc2bb8, "xt_register_targets" },
	{ 0xa8ae0069, "xt_register_target" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xe9b98ee, "nf_ct_set_timeout" },
	{ 0x1c368756, "nf_ct_l4proto_find" },
	{ 0x1e26d86f, "nf_ct_helper_ext_add" },
	{ 0x3411866d, "nf_conntrack_helper_try_module_get" },
	{ 0xa916b694, "strnlen" },
	{ 0x5a513ff0, "nf_ct_ext_add" },
	{ 0xe014893c, "nf_ct_tmpl_free" },
	{ 0x9193d81d, "nf_ct_tmpl_alloc" },
	{ 0xedca43ba, "nf_ct_netns_get" },
	{ 0xc5850110, "printk" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2a18c74, "nf_conntrack_destroy" },
	{ 0x8b1774a4, "nf_ct_destroy_timeout" },
	{ 0x11f3e50e, "nf_ct_netns_put" },
	{ 0xe64adcb0, "nf_conntrack_helper_put" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "x_tables,nf_conntrack");


MODULE_INFO(srcversion, "7D4AFAF6904113AA04ED85D");
