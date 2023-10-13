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
	{ 0xf9a482f9, "msleep" },
	{ 0x4bf606ae, "agp_backend_release" },
	{ 0xfd93ee35, "ioremap_wc" },
	{ 0x765395c3, "param_ops_int" },
	{ 0x77358855, "iomem_resource" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x8b7b68bf, "framebuffer_release" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x5b641283, "arch_phys_wc_add" },
	{ 0x6666b996, "agp_copy_info" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xf915b474, "cfb_fillrect" },
	{ 0x68a41536, "param_ops_bool" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0xc5e0801a, "fb_firmware_edid" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xb5c00bec, "agp_unbind_memory" },
	{ 0x131e5561, "param_ops_charp" },
	{ 0xd2c4d7c, "agp_allocate_memory" },
	{ 0x3967b466, "cfb_imageblit" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0xc5850110, "printk" },
	{ 0x7a890c8, "fb_alloc_cmap" },
	{ 0x7761bd3b, "register_framebuffer" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xb0de39d3, "pci_read_config_word" },
	{ 0x961509ac, "pci_get_domain_bus_and_slot" },
	{ 0x5513820d, "agp_free_memory" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x98b71c6, "fb_dealloc_cmap" },
	{ 0x3afc0e60, "i2c_del_adapter" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0xf00c52b4, "fb_find_mode" },
	{ 0x37b8b39e, "screen_info" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0xd0c1e622, "pci_read_config_dword" },
	{ 0x397edd5, "fb_edid_to_monspecs" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x1035c7c2, "__release_region" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x257e034b, "agp_backend_acquire" },
	{ 0x8b95e7b, "pci_unregister_driver" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x259bbf30, "framebuffer_alloc" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xedc03953, "iounmap" },
	{ 0xf354855a, "__pci_register_driver" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xded9b275, "cfb_copyarea" },
	{ 0x8423aab5, "pci_dev_put" },
	{ 0x40185701, "i2c_bit_add_bus" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x50d68377, "arch_phys_wc_del" },
	{ 0x27da1d8b, "agp_bind_memory" },
	{ 0xf51bf8b0, "pci_enable_device" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xe914e41e, "strcpy" },
	{ 0xfe00f05c, "unregister_framebuffer" },
};

MODULE_INFO(depends, "i2c-algo-bit");

MODULE_ALIAS("pci:v00008086d00003577sv*sd*bc03sc00i*");
MODULE_ALIAS("pci:v00008086d00002562sv*sd*bc03sc00i*");
MODULE_ALIAS("pci:v00008086d00003582sv*sd*bc03sc00i*");
MODULE_ALIAS("pci:v00008086d00002572sv*sd*bc03sc00i*");
MODULE_ALIAS("pci:v00008086d0000358Esv*sd*bc03sc00i*");
MODULE_ALIAS("pci:v00008086d00002582sv*sd*bc03sc00i*");
MODULE_ALIAS("pci:v00008086d00002592sv*sd*bc03sc00i*");
MODULE_ALIAS("pci:v00008086d00002772sv*sd*bc03sc00i*");
MODULE_ALIAS("pci:v00008086d000027A2sv*sd*bc03sc00i*");
MODULE_ALIAS("pci:v00008086d000027AEsv*sd*bc03sc00i*");
MODULE_ALIAS("pci:v00008086d000029A2sv*sd*bc03sc00i*");
MODULE_ALIAS("pci:v00008086d00002A02sv*sd*bc03sc00i*");

MODULE_INFO(srcversion, "0F4D5F9E29F90B78F2ADE5E");
