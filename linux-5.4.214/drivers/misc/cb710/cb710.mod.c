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
	{ 0xd0bb4ec1, "pci_write_config_dword" },
	{ 0x27dd129b, "pcim_enable_device" },
	{ 0x4117e0fc, "pcim_iomap_table" },
	{ 0xbbfe175a, "pci_get_slot" },
	{ 0xc5846169, "pci_disable_device" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0xfb578fc5, "memset" },
	{ 0x921f329, "pci_restore_state" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xffb7c514, "ida_free" },
	{ 0x74e831b6, "platform_device_unregister" },
	{ 0x64bfff20, "sg_miter_next" },
	{ 0x5f130ba8, "pcim_iomap_regions" },
	{ 0xd111bb59, "_dev_info" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x15b8e28e, "platform_device_register" },
	{ 0x7cf7aeda, "devm_free_irq" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xd0c1e622, "pci_read_config_dword" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x8b95e7b, "pci_unregister_driver" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x74c790d2, "pci_set_power_state" },
	{ 0x69acdf38, "memcpy" },
	{ 0xf354855a, "__pci_register_driver" },
	{ 0x8423aab5, "pci_dev_put" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x51765820, "devm_request_threaded_irq" },
	{ 0xa7d5f92e, "ida_destroy" },
	{ 0xe7a02573, "ida_alloc_range" },
	{ 0x200dc428, "pci_save_state" },
	{ 0xaf465642, "platform_device_put" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00001524d00000510sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "FE41CCE746B644327A1EFA4");
