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
	{ 0x27dd129b, "pcim_enable_device" },
	{ 0x18ed72f8, "__pm_runtime_use_autosuspend" },
	{ 0x7c60d490, "__pm_runtime_suspend" },
	{ 0x4117e0fc, "pcim_iomap_table" },
	{ 0xf2d62900, "dma_set_mask" },
	{ 0xc5846169, "pci_disable_device" },
	{ 0xe34c7407, "device_match_any" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xa453352, "pm_runtime_allow" },
	{ 0x2b6f0008, "pm_runtime_forbid" },
	{ 0x8338fd8, "pci_set_master" },
	{ 0xaed06536, "_dev_warn" },
	{ 0x921f329, "pci_restore_state" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x9d766f4b, "pci_clear_master" },
	{ 0x5f130ba8, "pcim_iomap_regions" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xf9b9fb58, "driver_find_device" },
	{ 0xd111bb59, "_dev_info" },
	{ 0xc9aba70, "pci_intx" },
	{ 0xb9e7429c, "memcpy_toio" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x8b95e7b, "pci_unregister_driver" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x7d628444, "memcpy_fromio" },
	{ 0xf354855a, "__pci_register_driver" },
	{ 0x11c66087, "pm_runtime_set_autosuspend_delay" },
	{ 0xf51bf8b0, "pci_enable_device" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x51765820, "devm_request_threaded_irq" },
	{ 0x200dc428, "pci_save_state" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00001022d000015E6sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "CD91CE64A56BF5C8B8312D7");
