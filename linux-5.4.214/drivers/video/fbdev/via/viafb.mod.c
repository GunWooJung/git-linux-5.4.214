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
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xf9a482f9, "msleep" },
	{ 0xfd93ee35, "ioremap_wc" },
	{ 0x7ee415d5, "single_open" },
	{ 0x765395c3, "param_ops_int" },
	{ 0x754d539c, "strlen" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x8b7b68bf, "framebuffer_release" },
	{ 0xc62cb64, "proc_create_single_data" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x8ce08cc0, "single_release" },
	{ 0xe35ed617, "seq_puts" },
	{ 0xc5846169, "pci_disable_device" },
	{ 0xb35586ed, "i2c_transfer" },
	{ 0x20000329, "simple_strtoul" },
	{ 0xcbaa4b74, "remove_proc_entry" },
	{ 0x87b8798d, "sg_next" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xf915b474, "cfb_fillrect" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x6513a3fa, "fb_get_color_depth" },
	{ 0x5c75775f, "dma_free_attrs" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xf4b0582f, "gpiochip_remove" },
	{ 0x21ba44a5, "seq_read" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x19af53eb, "__platform_driver_register" },
	{ 0x52ac9eed, "gpiochip_add_data_with_key" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x328bbfeb, "fb_set_suspend" },
	{ 0xc631580a, "console_unlock" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x131e5561, "param_ops_charp" },
	{ 0x8338fd8, "pci_set_master" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0x7369dd1b, "proc_mkdir" },
	{ 0x921f329, "pci_restore_state" },
	{ 0x3967b466, "cfb_imageblit" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0xc5850110, "printk" },
	{ 0x7a890c8, "fb_alloc_cmap" },
	{ 0xd73c36a2, "platform_device_alloc" },
	{ 0x7761bd3b, "register_framebuffer" },
	{ 0xf14ea0e9, "platform_device_add" },
	{ 0x3885862f, "seq_putc" },
	{ 0x5a921311, "strncmp" },
	{ 0xfbaaf01e, "console_lock" },
	{ 0x532b1a31, "dma_alloc_attrs" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x74e831b6, "platform_device_unregister" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x787bfb4b, "gpiochip_get_data" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x98b71c6, "fb_dealloc_cmap" },
	{ 0x3afc0e60, "i2c_del_adapter" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0xb9e7429c, "memcpy_toio" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xd0c1e622, "pci_read_config_dword" },
	{ 0x397edd5, "fb_edid_to_monspecs" },
	{ 0xc07b0863, "fb_destroy_modedb" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x8b95e7b, "pci_unregister_driver" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x74c790d2, "pci_set_power_state" },
	{ 0x259bbf30, "framebuffer_alloc" },
	{ 0xda2b5d09, "seq_lseek" },
	{ 0x37a0cba, "kfree" },
	{ 0xedc03953, "iounmap" },
	{ 0xf354855a, "__pci_register_driver" },
	{ 0xa207ea98, "pci_get_device" },
	{ 0xded9b275, "cfb_copyarea" },
	{ 0x8423aab5, "pci_dev_put" },
	{ 0x40185701, "i2c_bit_add_bus" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0x29361773, "complete" },
	{ 0x9dc6d8c9, "pci_choose_state" },
	{ 0x960650ec, "proc_create" },
	{ 0xa99a62a3, "platform_driver_unregister" },
	{ 0x4a453f53, "iowrite32" },
	{ 0xf51bf8b0, "pci_enable_device" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xe484e35f, "ioread32" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x200dc428, "pci_save_state" },
	{ 0xe914e41e, "strcpy" },
	{ 0xaf465642, "platform_device_put" },
	{ 0xfe00f05c, "unregister_framebuffer" },
};

MODULE_INFO(depends, "i2c-algo-bit");

MODULE_ALIAS("pci:v00001106d00003122sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001106d00007205sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001106d00003108sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001106d00003118sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001106d00003344sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001106d00003157sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001106d00003225sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001106d00003230sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001106d00003343sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001106d00003371sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001106d00001122sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001106d00005122sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001106d00007122sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "87081C221D5CD43CC991D98");
