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
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xd0bb4ec1, "pci_write_config_dword" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0xfd93ee35, "ioremap_wc" },
	{ 0x765395c3, "param_ops_int" },
	{ 0x77358855, "iomem_resource" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x37a24b11, "pci_read_config_byte" },
	{ 0x8b7b68bf, "framebuffer_release" },
	{ 0x969d6892, "pci_unmap_rom" },
	{ 0xa4191c0b, "memset_io" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xbbfe175a, "pci_get_slot" },
	{ 0xc5846169, "pci_disable_device" },
	{ 0x5b641283, "arch_phys_wc_add" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0x29e52193, "pci_get_class" },
	{ 0x928d7386, "pci_write_config_byte" },
	{ 0xf915b474, "cfb_fillrect" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x999e8297, "vfree" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x131e5561, "param_ops_charp" },
	{ 0xaed06536, "_dev_warn" },
	{ 0x3967b466, "cfb_imageblit" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0xc5850110, "printk" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x7a890c8, "fb_alloc_cmap" },
	{ 0xc5f08363, "pci_map_rom" },
	{ 0x7761bd3b, "register_framebuffer" },
	{ 0x5a921311, "strncmp" },
	{ 0xb0de39d3, "pci_read_config_word" },
	{ 0x5792f848, "strlcpy" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xc6cbbc89, "capable" },
	{ 0xd111bb59, "_dev_info" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0xa916b694, "strnlen" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x96b29254, "strncasecmp" },
	{ 0xd0c1e622, "pci_read_config_dword" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x1035c7c2, "__release_region" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x8b95e7b, "pci_unregister_driver" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x259bbf30, "framebuffer_alloc" },
	{ 0xedc03953, "iounmap" },
	{ 0x7d628444, "memcpy_fromio" },
	{ 0xf354855a, "__pci_register_driver" },
	{ 0xa207ea98, "pci_get_device" },
	{ 0xded9b275, "cfb_copyarea" },
	{ 0x8423aab5, "pci_dev_put" },
	{ 0x50d68377, "arch_phys_wc_del" },
	{ 0xf51bf8b0, "pci_enable_device" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xfe00f05c, "unregister_framebuffer" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00001039d00000300sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001039d00005300sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001039d00006300sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001039d00000310sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001039d00000315sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001039d00000325sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001039d00005315sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001039d00006325sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001039d00000330sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001039d00006330sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000018CAd00000020sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000018CAd00000040sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "03D89F04B582DA15997022F");
