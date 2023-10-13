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
	{ 0xdc274b8f, "bus_register" },
	{ 0xa4b94fea, "iowrite8_rep" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xd0bb4ec1, "pci_write_config_dword" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x34d3b8d1, "driver_register" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x5094ac27, "pcie_set_readrq" },
	{ 0xc5846169, "pci_disable_device" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3f0546a8, "ioread32_rep" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x982ccbd5, "pci_release_regions" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x5857b225, "ioread16_rep" },
	{ 0x56cf6cd9, "platform_device_register_full" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x8cc79cab, "iowrite16_rep" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xf4b0582f, "gpiochip_remove" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x52ac9eed, "gpiochip_add_data_with_key" },
	{ 0xbfc177bc, "iowrite32_rep" },
	{ 0x8338fd8, "pci_set_master" },
	{ 0xaed06536, "_dev_warn" },
	{ 0xf10de535, "ioread8" },
	{ 0x3bffcc92, "pci_iounmap" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x86f434e2, "driver_unregister" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x74e831b6, "platform_device_unregister" },
	{ 0x5fe1c3f, "device_add" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xc94d2bd9, "bus_unregister" },
	{ 0x787bfb4b, "gpiochip_get_data" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xd111bb59, "_dev_info" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xf441ac43, "ioread8_rep" },
	{ 0x15b8e28e, "platform_device_register" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x12a38747, "usleep_range" },
	{ 0x8e17faf3, "put_device" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x848d372e, "iowrite8" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xd0c1e622, "pci_read_config_dword" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x8b95e7b, "pci_unregister_driver" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xe7a7a03f, "get_device" },
	{ 0x6a86bc1, "iowrite16" },
	{ 0x37a0cba, "kfree" },
	{ 0x4a5eb426, "pci_request_regions" },
	{ 0x535449e7, "device_initialize" },
	{ 0xedc03953, "iounmap" },
	{ 0xf354855a, "__pci_register_driver" },
	{ 0xc5534d64, "ioread16" },
	{ 0x5a4e4713, "device_unregister" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x5c4e734e, "pci_iomap" },
	{ 0xdb2d5c16, "dev_set_name" },
	{ 0x4a453f53, "iowrite32" },
	{ 0xf51bf8b0, "pci_enable_device" },
	{ 0xe484e35f, "ioread32" },
	{ 0x719e0e44, "add_uevent_var" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v000014E4d00000576sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004313sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000A8D8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004331sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004353sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004357sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004358sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004359sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004360sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004365sv00001028sd00000016bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004365sv00001028sd00000018bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004365sv0000105Bsd0000E092bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004365sv0000103Csd0000804Abc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000043A0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000043A9sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000043AAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000043B1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004727sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000A8DBsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000A8DCsv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "2ED48900AFB59BA5D938092");
