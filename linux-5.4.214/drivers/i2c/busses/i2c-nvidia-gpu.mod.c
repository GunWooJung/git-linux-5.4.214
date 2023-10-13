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
	{ 0x8b95e7b, "pci_unregister_driver" },
	{ 0xf354855a, "__pci_register_driver" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0xa453352, "pm_runtime_allow" },
	{ 0x7c60d490, "__pm_runtime_suspend" },
	{ 0x18ed72f8, "__pm_runtime_use_autosuspend" },
	{ 0x11c66087, "pm_runtime_set_autosuspend_delay" },
	{ 0xa1d6c8f1, "i2c_new_device" },
	{ 0x3656c243, "i2c_add_adapter" },
	{ 0xbf27fdc4, "pci_alloc_irq_vectors_affinity" },
	{ 0x46c5e2e4, "pcim_iomap" },
	{ 0x8338fd8, "pci_set_master" },
	{ 0x27dd129b, "pcim_enable_device" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x12a38747, "usleep_range" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x339a5a9a, "pci_free_irq_vectors" },
	{ 0x3afc0e60, "i2c_del_adapter" },
	{ 0x8bdf333d, "__pm_runtime_resume" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v000010DEd*sv*sd*bc0Csc80i*");

MODULE_INFO(srcversion, "B1B480FAA3D3FD0FB31601B");
