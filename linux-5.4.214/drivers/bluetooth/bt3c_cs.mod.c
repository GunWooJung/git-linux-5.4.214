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
	{ 0xb9262523, "pcmcia_unregister_driver" },
	{ 0xfd864eaf, "pcmcia_register_driver" },
	{ 0x56601480, "hci_recv_frame" },
	{ 0x92f8784b, "__alloc_skb" },
	{ 0xf89bc02c, "skb_put" },
	{ 0x718b8b7, "bt_info" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xa4ac9b92, "hci_register_dev" },
	{ 0xf9a482f9, "msleep" },
	{ 0x5c9109de, "release_firmware" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x80500894, "request_firmware" },
	{ 0x64f9650a, "hci_alloc_dev" },
	{ 0xb55067d3, "pcmcia_enable_device" },
	{ 0xc9c33c90, "pcmcia_request_irq" },
	{ 0x6af95259, "pcmcia_loop_config" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xc502ef3, "skb_queue_tail" },
	{ 0xd523d85d, "skb_push" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x32dce1b0, "pcmcia_request_io" },
	{ 0xd8e6cdd2, "kfree_skb" },
	{ 0x7b8c32f1, "bt_err" },
	{ 0x3b89b540, "skb_dequeue" },
	{ 0xd3b018f3, "pcmcia_dev_present" },
	{ 0x19c85322, "pcmcia_disable_device" },
	{ 0x8e8b23c5, "hci_free_dev" },
	{ 0xc1716c35, "hci_unregister_dev" },
	{ 0xf89e6197, "skb_queue_purge" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "pcmcia,bluetooth");

MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paEFCE0A31pb*pcD4CE9B02pd*");

MODULE_INFO(srcversion, "961A8E992FFA2DCD4023B7C");
