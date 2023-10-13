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
	{ 0xa99a62a3, "platform_driver_unregister" },
	{ 0x19af53eb, "__platform_driver_register" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x56470118, "__warn_printk" },
	{ 0xecadd7c7, "dev_driver_string" },
	{ 0x6dd853a6, "dma_direct_map_page" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x42041512, "i2c_get_dma_safe_msg_buf" },
	{ 0xfa3d16f3, "amd_mp2_rw" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x7c60d490, "__pm_runtime_suspend" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x3656c243, "i2c_add_adapter" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x714da7f6, "set_primary_fwnode" },
	{ 0xe37a5514, "i2c_acpi_find_bus_speed" },
	{ 0xda9d1160, "device_link_add" },
	{ 0x1b9b6ec2, "amd_mp2_register_cb" },
	{ 0x8bdf333d, "__pm_runtime_resume" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x70bc8e8b, "amd_mp2_find_device" },
	{ 0xae7be25, "acpi_bus_get_device" },
	{ 0x15cb5620, "is_acpi_device_node" },
	{ 0x3afc0e60, "i2c_del_adapter" },
	{ 0x9da6f8d7, "amd_mp2_unregister_cb" },
	{ 0x71487468, "amd_mp2_bus_enable_set" },
	{ 0x7daa6b71, "amd_mp2_rw_timeout" },
	{ 0xb526d94f, "dma_direct_unmap_page" },
	{ 0x9fe59f14, "dma_ops" },
	{ 0x4dae16e4, "i2c_put_dma_safe_msg_buf" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x381bed48, "amd_mp2_process_event" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x29361773, "complete" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "i2c-amd-mp2-pci");

MODULE_ALIAS("acpi*:AMDI0011:*");

MODULE_INFO(srcversion, "50A5CC89DC227602FE519FD");
