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
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x5c75775f, "dma_free_attrs" },
	{ 0x56cf6cd9, "platform_device_register_full" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x16cdc340, "acpi_get_table" },
	{ 0x267df662, "smp_call_on_cpu" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xa82f8d7f, "sysfs_remove_group" },
	{ 0x91e0d49, "dma_set_coherent_mask" },
	{ 0x19af53eb, "__platform_driver_register" },
	{ 0xaed06536, "_dev_warn" },
	{ 0xfb578fc5, "memset" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xc5850110, "printk" },
	{ 0xc2107c52, "sysfs_create_group" },
	{ 0x9e64fbfe, "rtc_cmos_read" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x65e0d6d7, "memory_read_from_buffer" },
	{ 0x9e9fdd9d, "memunmap" },
	{ 0x532b1a31, "dma_alloc_attrs" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x74e831b6, "platform_device_unregister" },
	{ 0xa04f945a, "cpus_read_lock" },
	{ 0xac1a55be, "unregister_reboot_notifier" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x7040fff9, "rtc_lock" },
	{ 0x3517383e, "register_reboot_notifier" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x4d924f20, "memremap" },
	{ 0x18fb2caf, "cpus_read_unlock" },
	{ 0x69acdf38, "memcpy" },
	{ 0xa99a62a3, "platform_driver_unregister" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "16A75FF09CC9729E34E5351");
