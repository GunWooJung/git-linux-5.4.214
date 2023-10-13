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
	{ 0x1cd6f316, "param_ops_uint" },
	{ 0x765395c3, "param_ops_int" },
	{ 0xa317608d, "pnp_unregister_driver" },
	{ 0x74e831b6, "platform_device_unregister" },
	{ 0xaf465642, "platform_device_put" },
	{ 0xf14ea0e9, "platform_device_add" },
	{ 0xa99a62a3, "platform_driver_unregister" },
	{ 0xd73c36a2, "platform_device_alloc" },
	{ 0x5b641e8c, "pnp_register_driver" },
	{ 0x19af53eb, "__platform_driver_register" },
	{ 0x2b8ab42, "sg_copy_to_buffer" },
	{ 0xaf7d0f48, "current_task" },
	{ 0x47939e0d, "__tasklet_hi_schedule" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0x905695ab, "sg_copy_from_buffer" },
	{ 0x2cbcc89, "mmc_detect_change" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x175e33fb, "dma_spin_lock" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x40ca826f, "mmc_request_done" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0x20c79ab5, "pnp_get_resource" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x56470118, "__warn_printk" },
	{ 0xecadd7c7, "dev_driver_string" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x6d3954a4, "mmc_add_host" },
	{ 0x6dd853a6, "dma_direct_map_page" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x7054a3e4, "request_dma" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0x85bd1608, "__request_region" },
	{ 0xc5850110, "printk" },
	{ 0xb846722a, "mmc_remove_host" },
	{ 0x1035c7c2, "__release_region" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0x82072614, "tasklet_kill" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x72b243d4, "free_dma" },
	{ 0x37a0cba, "kfree" },
	{ 0xb526d94f, "dma_direct_unmap_page" },
	{ 0x9fe59f14, "dma_ops" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x8bd4fa4f, "mmc_free_host" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x947fbbbc, "mmc_alloc_host" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pnp:dWEC0517*");
MODULE_ALIAS("acpi*:WEC0517:*");
MODULE_ALIAS("pnp:dWEC0518*");
MODULE_ALIAS("acpi*:WEC0518:*");

MODULE_INFO(srcversion, "2932D5BC35291911F764EA3");
