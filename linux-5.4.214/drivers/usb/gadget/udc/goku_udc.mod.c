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
	{ 0x8b95e7b, "pci_unregister_driver" },
	{ 0xf354855a, "__pci_register_driver" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x710ef7fc, "usb_gadget_unmap_request" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xf0979a46, "usb_gadget_giveback_request" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x8f261499, "usb_add_gadget_udc_release" },
	{ 0x8338fd8, "pci_set_master" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x85bd1608, "__request_region" },
	{ 0xf51bf8b0, "pci_enable_device" },
	{ 0x4a2315f5, "usb_ep_set_maxpacket_limit" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xc5f8bce8, "usb_gadget_map_request" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x9424a91, "usb_gadget_ep_match_desc" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xc5850110, "printk" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0xc5846169, "pci_disable_device" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x1035c7c2, "__release_region" },
	{ 0x77358855, "iomem_resource" },
	{ 0xedc03953, "iounmap" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xb3090fe7, "usb_del_gadget_udc" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x37a0cba, "kfree" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "udc-core");

MODULE_ALIAS("pci:v0000102Fd00000107sv*sd*bc0Csc03iFE*");

MODULE_INFO(srcversion, "006E257B03C1FEBB8118995");
