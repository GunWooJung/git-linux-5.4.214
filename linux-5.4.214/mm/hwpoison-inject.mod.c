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
	{ 0x3f556282, "simple_attr_release" },
	{ 0xa615d9a, "simple_attr_write" },
	{ 0x2a456f5f, "simple_attr_read" },
	{ 0x91fc7183, "generic_file_llseek" },
	{ 0x2176e42a, "hwpoison_filter_memcg" },
	{ 0x6ba36c6a, "hwpoison_filter_flags_value" },
	{ 0x747d39b3, "debugfs_create_u64" },
	{ 0x15ea2648, "hwpoison_filter_flags_mask" },
	{ 0x326cefe5, "hwpoison_filter_dev_minor" },
	{ 0x8d7e3373, "hwpoison_filter_dev_major" },
	{ 0x57d403e2, "debugfs_create_u32" },
	{ 0xd0a46a6a, "debugfs_create_file" },
	{ 0x7f3966fa, "debugfs_create_dir" },
	{ 0x5b1c5c13, "debugfs_remove_recursive" },
	{ 0x7918d817, "memory_failure" },
	{ 0xc5850110, "printk" },
	{ 0x82de01e, "__put_devmap_managed_page" },
	{ 0x75942744, "__put_page" },
	{ 0x587f22d7, "devmap_managed_key" },
	{ 0xafdf946a, "hwpoison_filter" },
	{ 0x21625954, "PageHuge" },
	{ 0x87802936, "shake_page" },
	{ 0xcc9268fc, "hwpoison_filter_enable" },
	{ 0xa958720f, "get_hwpoison_page" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xa94a09bb, "mem_section" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0xb907513f, "unpoison_memory" },
	{ 0xc6cbbc89, "capable" },
	{ 0x703de441, "simple_attr_open" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "60DF7DA04538D13F5A6628E");
