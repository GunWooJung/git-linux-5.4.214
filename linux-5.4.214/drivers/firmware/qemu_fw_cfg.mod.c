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
	{ 0xebd2c2f4, "firmware_kobj" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xc5850110, "printk" },
	{ 0xe419bc99, "iowrite32be" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x1bf55fc, "paddr_vmcoreinfo_note" },
	{ 0xcfe9b0cc, "sysfs_create_link" },
	{ 0x7343b8cd, "kset_register" },
	{ 0xe7d72b83, "kobject_set_name" },
	{ 0x8c12bd8e, "kset_find_obj" },
	{ 0x85df9b6c, "strsep" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0x74dbd78d, "sysfs_create_bin_file" },
	{ 0xcccf7597, "kobject_init_and_add" },
	{ 0xdd64e639, "strscpy" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xb26a1add, "elfcorehdr_addr" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x6dc65c0a, "sysfs_create_file_ns" },
	{ 0x7a47b126, "platform_get_resource_byname" },
	{ 0x594bf15b, "ioport_map" },
	{ 0x85bd1608, "__request_region" },
	{ 0xd072dc20, "platform_get_resource" },
	{ 0x91d56fe1, "kset_create_and_add" },
	{ 0x20b41469, "kobject_create_and_add" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x2aad1fd8, "kobject_del" },
	{ 0xe173653a, "sysfs_remove_file_ns" },
	{ 0xe7750f8, "kobject_put" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xfb578fc5, "memset" },
	{ 0x56470118, "__warn_printk" },
	{ 0x26f8f0b8, "iowrite16be" },
	{ 0xa805ecfc, "acpi_release_global_lock" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xf441ac43, "ioread8_rep" },
	{ 0xf10de535, "ioread8" },
	{ 0x6a86bc1, "iowrite16" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xc9f34c1d, "acpi_acquire_global_lock" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0xfc39e32f, "ioport_unmap" },
	{ 0x1035c7c2, "__release_region" },
	{ 0x77358855, "iomem_resource" },
	{ 0xedc03953, "iounmap" },
	{ 0x37a0cba, "kfree" },
	{ 0x5ae189e3, "kset_unregister" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("acpi*:QEMU0002:*");
MODULE_ALIAS("of:N*T*Cqemu,fw-cfg-mmio");
MODULE_ALIAS("of:N*T*Cqemu,fw-cfg-mmioC*");

MODULE_INFO(srcversion, "54722CD73D97E8AF48F188C");
