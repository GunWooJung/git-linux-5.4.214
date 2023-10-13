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
	{ 0x92a881bb, "kmem_cache_destroy" },
	{ 0x85bd1608, "__request_region" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xf9a482f9, "msleep" },
	{ 0x1d8b98ff, "usb_add_hcd" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x77358855, "iomem_resource" },
	{ 0xf28ad204, "usb_remove_hcd" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x37a24b11, "pci_read_config_byte" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x3a43808f, "usb_create_hcd" },
	{ 0xc5846169, "pci_disable_device" },
	{ 0xb3090fe7, "usb_del_gadget_udc" },
	{ 0x928d7386, "pci_write_config_byte" },
	{ 0x1e57910a, "devm_ioremap_resource" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x6c8e8bfd, "usb_hcd_giveback_urb" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x19af53eb, "__platform_driver_register" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x741cf2fc, "usb_hub_clear_tt_buffer" },
	{ 0xf4b1bd78, "usb_gadget_set_state" },
	{ 0xa9107ac8, "usb_put_hcd" },
	{ 0xfb384d37, "kasprintf" },
	{ 0x8338fd8, "pci_set_master" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x2d3002b1, "usb_hcd_link_urb_to_ep" },
	{ 0x981f5dd3, "usb_gadget_udc_reset" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0xc5850110, "printk" },
	{ 0xbc9b8588, "ehci_cf_port_reset_rwsem" },
	{ 0xb566a6c3, "kmem_cache_free" },
	{ 0xd072dc20, "platform_get_resource" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x24d273d1, "add_timer" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xce807a25, "up_write" },
	{ 0xd9996d5a, "device_wakeup_enable" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x57bc19d2, "down_write" },
	{ 0xd1da9080, "usb_hcd_check_unlink_urb" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x7ccefd28, "kmem_cache_alloc" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x12a38747, "usleep_range" },
	{ 0xe6e46e97, "usb_add_gadget_udc" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x4a2315f5, "usb_ep_set_maxpacket_limit" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x1035c7c2, "__release_region" },
	{ 0x8b95e7b, "pci_unregister_driver" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x51624e26, "kmem_cache_create" },
	{ 0x2bf355c4, "devm_gpiod_get_optional" },
	{ 0x19a304ba, "usb_disabled" },
	{ 0x37a0cba, "kfree" },
	{ 0xedc03953, "iounmap" },
	{ 0xf354855a, "__pci_register_driver" },
	{ 0xc4fb10cd, "gpiod_set_value_cansleep" },
	{ 0xa99a62a3, "platform_driver_unregister" },
	{ 0xbdc7c1, "usb_hcd_unlink_urb_from_ep" },
	{ 0xf51bf8b0, "pci_enable_device" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0xc1514a3b, "free_irq" },
};

MODULE_INFO(depends, "udc-core");

MODULE_ALIAS("pci:v000010B5d00005406sv000010B5sd00009054bc06sc80i00*");

MODULE_INFO(srcversion, "E48DCE0085D09EAA6F9EB95");
