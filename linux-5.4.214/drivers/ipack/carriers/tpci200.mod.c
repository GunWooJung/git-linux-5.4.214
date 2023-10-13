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
	{ 0xb3e9e4a8, "ipack_put_device" },
	{ 0x4108f87b, "ipack_device_add" },
	{ 0xc643934, "ipack_device_init" },
	{ 0x43fb4fbd, "ipack_bus_register" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xf51bf8b0, "pci_enable_device" },
	{ 0x4a453f53, "iowrite32" },
	{ 0xe484e35f, "ioread32" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0xb23de490, "pci_request_region" },
	{ 0xd522f41c, "pci_dev_get" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x8423aab5, "pci_dev_put" },
	{ 0x83e475e1, "ipack_bus_unregister" },
	{ 0xc5846169, "pci_disable_device" },
	{ 0xe37407fe, "pci_release_region" },
	{ 0x3bffcc92, "pci_iounmap" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x6a86bc1, "iowrite16" },
	{ 0xc5534d64, "ioread16" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x37a0cba, "kfree" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "ipack");

MODULE_ALIAS("pci:v00001498d000030C8sv00001498sd0000300Abc*sc*i*");

MODULE_INFO(srcversion, "5AF562BB905A3431503D695");
