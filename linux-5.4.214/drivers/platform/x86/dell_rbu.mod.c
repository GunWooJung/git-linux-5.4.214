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
	{ 0xc9d8b484, "param_ops_string" },
	{ 0xc371bb96, "param_ops_ulong" },
	{ 0x74e831b6, "platform_device_unregister" },
	{ 0xdeb089a7, "sysfs_remove_bin_file" },
	{ 0x74dbd78d, "sysfs_create_bin_file" },
	{ 0x56cf6cd9, "platform_device_register_full" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xab65ed80, "set_memory_uc" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x6a5cb5ee, "__get_free_pages" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x5c9109de, "release_firmware" },
	{ 0xaf7ad1b4, "request_firmware_nowait" },
	{ 0x1e6d26a8, "strstr" },
	{ 0xc5850110, "printk" },
	{ 0x69acdf38, "memcpy" },
	{ 0x65e0d6d7, "memory_read_from_buffer" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x96848186, "scnprintf" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x37a0cba, "kfree" },
	{ 0x91607d95, "set_memory_wb" },
	{ 0x4302d0eb, "free_pages" },
	{ 0xfb578fc5, "memset" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "A219B40C62FA6538B6026C5");
