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
	{ 0x85bd1608, "__request_region" },
	{ 0x3a994f54, "parport_ieee1284_ecp_write_data" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xd0bb4ec1, "pci_write_config_dword" },
	{ 0x965c3321, "parport_ieee1284_ecp_write_addr" },
	{ 0x89c19571, "parport_register_port" },
	{ 0x554a3a00, "parport_remove_port" },
	{ 0x49951708, "sev_enable_key" },
	{ 0x765395c3, "param_ops_int" },
	{ 0x72b243d4, "free_dma" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x37a24b11, "pci_read_config_byte" },
	{ 0xcc242564, "parport_ieee1284_epp_write_addr" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xf2d62900, "dma_set_mask" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x51a3dae5, "pci_match_id" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x56470118, "__warn_printk" },
	{ 0x4016b03e, "platform_bus_type" },
	{ 0x928d7386, "pci_write_config_byte" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x5c75775f, "dma_free_attrs" },
	{ 0x56cf6cd9, "platform_device_register_full" },
	{ 0x7054a3e4, "request_dma" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x91e0d49, "dma_set_coherent_mask" },
	{ 0x19af53eb, "__platform_driver_register" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xa317608d, "pnp_unregister_driver" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x131e5561, "param_ops_charp" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xaf7d0f48, "current_task" },
	{ 0x60e15911, "parport_ieee1284_epp_write_data" },
	{ 0xc5850110, "printk" },
	{ 0xe51150c1, "parport_ieee1284_write_compat" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xd71c099b, "parport_announce_port" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x175e33fb, "dma_spin_lock" },
	{ 0x5a921311, "strncmp" },
	{ 0x6dd853a6, "dma_direct_map_page" },
	{ 0x593c1bac, "__x86_indirect_thunk_rbx" },
	{ 0x532b1a31, "dma_alloc_attrs" },
	{ 0x74e831b6, "platform_device_unregister" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x5b641e8c, "pnp_register_driver" },
	{ 0x854bb4e0, "parport_ieee1284_epp_read_addr" },
	{ 0x20c79ab5, "pnp_get_resource" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xb526d94f, "dma_direct_unmap_page" },
	{ 0xd111bb59, "_dev_info" },
	{ 0xab600421, "probe_irq_off" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x1000e51, "schedule" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x5e3a3912, "parport_irq_handler" },
	{ 0xd0c1e622, "pci_read_config_dword" },
	{ 0x9db53bd9, "parport_wait_event" },
	{ 0xecadd7c7, "dev_driver_string" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x1035c7c2, "__release_region" },
	{ 0x8b95e7b, "pci_unregister_driver" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xb121390a, "probe_irq_on" },
	{ 0x54496b4, "schedule_timeout_interruptible" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x6eed2630, "param_array_ops" },
	{ 0xf354855a, "__pci_register_driver" },
	{ 0xa207ea98, "pci_get_device" },
	{ 0x1ef8f8c, "parport_ieee1284_read_byte" },
	{ 0xfa570438, "parport_ieee1284_read_nibble" },
	{ 0xa99a62a3, "platform_driver_unregister" },
	{ 0xa4e88a5e, "parport_del_port" },
	{ 0xf51bf8b0, "pci_enable_device" },
	{ 0xb9f1f9fa, "parport_wait_peripheral" },
	{ 0x9fe59f14, "dma_ops" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xff028cd3, "parport_ieee1284_epp_read_data" },
	{ 0xe643633c, "parport_ieee1284_ecp_read_data" },
};

MODULE_INFO(depends, "parport");

MODULE_ALIAS("pnp:dPNP0400*");
MODULE_ALIAS("acpi*:PNP0400:*");
MODULE_ALIAS("pnp:dPNP0401*");
MODULE_ALIAS("acpi*:PNP0401:*");
MODULE_ALIAS("pci:v00001106d00000686sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001106d00008231sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001283d00008872sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000131Fd00001020sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000131Fd00001021sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000131Fd00002020sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000131Fd00002021sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001407d00008000sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001407d00008002sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001407d00008003sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001407d00008800sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00009050sv0000D84Dsd00004014bc*sc*i*");
MODULE_ALIAS("pci:v00001409d00007268sv00001409sd00000101bc*sc*i*");
MODULE_ALIAS("pci:v00001409d00007268sv00001409sd00000102bc*sc*i*");
MODULE_ALIAS("pci:v00001409d00007268sv00001409sd00000103bc*sc*i*");
MODULE_ALIAS("pci:v00001409d00007268sv00001409sd00000104bc*sc*i*");
MODULE_ALIAS("pci:v00001409d00007268sv00001409sd00009018bc*sc*i*");
MODULE_ALIAS("pci:v00001592d00000782sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001592d00000783sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014D2d00008001sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014DBd00002120sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014DBd00002121sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001415d00009523sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001415d00009513sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001415d00008403sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001415d0000C000sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001415d0000C004sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001415d0000C100sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001415d0000C104sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001415d0000C110sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001415d0000C114sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001415d0000C118sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001415d0000C11Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000416Cd00000100sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014F2d00000121sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00009710d00009705sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00009710d00009715sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00009710d00009755sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00009710d00009805sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00009710d00009815sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00009710d00009901sv0000A000sd00002000bc*sc*i*");
MODULE_ALIAS("pci:v00009710d00009865sv0000A000sd00001000bc*sc*i*");
MODULE_ALIAS("pci:v00009710d00009865sv0000A000sd00002000bc*sc*i*");
MODULE_ALIAS("pci:v0000135Cd00000278sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001C00d00003050sv00001C00sd00003050bc*sc*i*");

MODULE_INFO(srcversion, "8E05B82B453A6055B239882");
