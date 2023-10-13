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
	{ 0x8edbe041, "ufshcd_pltfrm_runtime_idle" },
	{ 0x57cff4be, "ufshcd_pltfrm_runtime_resume" },
	{ 0x1e066ace, "ufshcd_pltfrm_runtime_suspend" },
	{ 0x6efce1ce, "ufshcd_pltfrm_resume" },
	{ 0x4e3a28e7, "ufshcd_pltfrm_suspend" },
	{ 0xa99a62a3, "platform_driver_unregister" },
	{ 0x19af53eb, "__platform_driver_register" },
	{ 0x60c24575, "ufshcd_dme_set_attr" },
	{ 0xc38b1cfa, "ufshcd_pltfrm_init" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xd67deb74, "ufshcd_remove" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "ufshcd-pltfrm,ufshcd-core");

MODULE_ALIAS("of:N*T*Ccdns,ufshc");
MODULE_ALIAS("of:N*T*Ccdns,ufshcC*");
MODULE_ALIAS("of:N*T*Ccdns,ufshc-m31-16nm");
MODULE_ALIAS("of:N*T*Ccdns,ufshc-m31-16nmC*");

MODULE_INFO(srcversion, "6A244C5303A7C8E431EDE9D");
