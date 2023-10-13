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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xed93c0b3, "module_layout" },
	{ 0x584bb3f, "ufshcd_runtime_suspend" },
	{ 0x709dfc4a, "ufshcd_alloc_host" },
	{ 0xe77dbf94, "ufshcd_system_suspend" },
	{ 0xbcf5066b, "ufshcd_init" },
	{ 0xe7dfb6e3, "ufshcd_system_resume" },
	{ 0x427a6892, "ufshcd_shutdown" },
	{ 0xc5850110, "printk" },
	{ 0xccd841fc, "ufshcd_runtime_idle" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xd111bb59, "_dev_info" },
	{ 0xa6a1092a, "ufshcd_runtime_resume" },
	{ 0x9962bc44, "pm_runtime_enable" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb98c9772, "__pm_runtime_set_status" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x11254f5e, "ufshcd_dealloc_host" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x7e73a43b, "platform_get_irq" },
	{ 0xc423de90, "devm_platform_ioremap_resource" },
};

MODULE_INFO(depends, "ufshcd-core");


MODULE_INFO(srcversion, "A42A5867A561BC93C53ADF4");
