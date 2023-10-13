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
	{ 0x5b49b982, "param_get_uint" },
	{ 0x1cd6f316, "param_ops_uint" },
	{ 0x8b95e7b, "pci_unregister_driver" },
	{ 0xf354855a, "__pci_register_driver" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x37723f76, "mISDNisac_irq" },
	{ 0x9934e351, "mISDNisar_irq" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x5c9109de, "release_firmware" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x5b70e77a, "mISDN_register_device" },
	{ 0x85bd1608, "__request_region" },
	{ 0x73af4fb0, "mISDNisar_init" },
	{ 0x709327b0, "mISDNisac_init" },
	{ 0x80500894, "request_firmware" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xf51bf8b0, "pci_enable_device" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x37a0cba, "kfree" },
	{ 0x1c1b9f8e, "_raw_write_unlock_irqrestore" },
	{ 0xe25ee9d3, "_raw_write_lock_irqsave" },
	{ 0xc5846169, "pci_disable_device" },
	{ 0x1035c7c2, "__release_region" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0xa4217a75, "mISDN_unregister_device" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x49951708, "sev_enable_key" },
	{ 0x32ae5741, "_raw_read_lock" },
	{ 0xdd4fc9f6, "param_set_uint" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x6d71399f, "try_module_get" },
	{ 0xc5850110, "printk" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xdf46d4f1, "module_put" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "mISDNipac,mISDNisar,mISDN_core");

MODULE_ALIAS("pci:v0000E159d00000002sv00000051sd00000001bc*sc*i*");
MODULE_ALIAS("pci:v0000E159d00000002sv00000054sd00000001bc*sc*i*");

MODULE_INFO(srcversion, "659F695AB9C8CAD95B2C4D6");
