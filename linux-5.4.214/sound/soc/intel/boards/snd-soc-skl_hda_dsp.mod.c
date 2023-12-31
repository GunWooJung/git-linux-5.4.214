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
	{ 0x2d25fadb, "devm_snd_soc_register_card" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xb6f50bc, "snd_soc_pm_ops" },
	{ 0x19af53eb, "__platform_driver_register" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xc2d88d9b, "hdac_hdmi_jack_port_init" },
	{ 0xaed06536, "_dev_warn" },
	{ 0xbad22dc6, "snd_jack_add_new_kctl" },
	{ 0x1e6d26a8, "strstr" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x9f46ced8, "__sw_hweight64" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0xe8c76cb3, "snd_soc_card_jack_new" },
	{ 0x7996188b, "hdac_hdmi_jack_init" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xa99a62a3, "platform_driver_unregister" },
	{ 0x943b1666, "devm_kmalloc" },
};

MODULE_INFO(depends, "snd-soc-core,snd-soc-hdac-hdmi,snd");


MODULE_INFO(srcversion, "93BB64A1DD715D2A452F031");
