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
	{ 0xa99a62a3, "platform_driver_unregister" },
	{ 0x19af53eb, "__platform_driver_register" },
	{ 0x81140a59, "rapl_add_platform_domain" },
	{ 0x7c941d6, "__cpuhp_setup_state" },
	{ 0x24ab4ecd, "powercap_register_control_type" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xa5e55057, "rdmsrl_safe_on_cpu" },
	{ 0x6228c21f, "smp_call_function_single" },
	{ 0x74e510fc, "rapl_remove_package" },
	{ 0xb352177e, "find_first_bit" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0xd25286f2, "rapl_add_package" },
	{ 0xa91ba10c, "rapl_find_package_domain" },
	{ 0x8f152407, "powercap_unregister_control_type" },
	{ 0xa5fbfe74, "rapl_remove_platform_domain" },
	{ 0xe60548f0, "__cpuhp_remove_state" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "intel_rapl_common");

MODULE_ALIAS("platform:intel_rapl_msr");

MODULE_INFO(srcversion, "75FFFACF193F954C22B0621");
