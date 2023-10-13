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
	{ 0xfb4ec2db, "__pm_runtime_disable" },
	{ 0x18ed72f8, "__pm_runtime_use_autosuspend" },
	{ 0x317dc8f4, "snd_sof_suspend" },
	{ 0xd676461a, "snd_sof_device_probe" },
	{ 0x19af53eb, "__platform_driver_register" },
	{ 0x131e5561, "param_ops_charp" },
	{ 0x76a94088, "snd_sof_resume" },
	{ 0xb65baa75, "snd_sof_runtime_suspend" },
	{ 0x3bd1fe4c, "device_get_match_data" },
	{ 0xaed06536, "_dev_warn" },
	{ 0x88fb5c20, "snd_sof_device_remove" },
	{ 0xbba8cdfa, "snd_soc_acpi_find_machine" },
	{ 0x58681319, "snd_sof_runtime_resume" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x9962bc44, "pm_runtime_enable" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x452205b9, "snd_sof_runtime_idle" },
	{ 0x11c66087, "pm_runtime_set_autosuspend_delay" },
	{ 0xa99a62a3, "platform_driver_unregister" },
	{ 0x943b1666, "devm_kmalloc" },
};

MODULE_INFO(depends, "snd-sof,snd-soc-acpi");


MODULE_INFO(srcversion, "DA00605F2B809569FFC3CC7");
