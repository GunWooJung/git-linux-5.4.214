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
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x5a6d229d, "mccic_irq" },
	{ 0xc5846169, "pci_disable_device" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xdd64e639, "strscpy" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x3656c243, "i2c_add_adapter" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x902adfad, "mccic_register" },
	{ 0x8338fd8, "pci_set_master" },
	{ 0xaed06536, "_dev_warn" },
	{ 0xacdbf6b7, "mccic_shutdown" },
	{ 0x921f329, "pci_restore_state" },
	{ 0x3bffcc92, "pci_iounmap" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xc5850110, "printk" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x3afc0e60, "i2c_del_adapter" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x8b95e7b, "pci_unregister_driver" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x2a4cbc0b, "mccic_suspend" },
	{ 0x37a0cba, "kfree" },
	{ 0xf354855a, "__pci_register_driver" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x945199c2, "mccic_resume" },
	{ 0x3b47a4d, "clkdev_create" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x5c4e734e, "pci_iomap" },
	{ 0x4a453f53, "iowrite32" },
	{ 0xf51bf8b0, "pci_enable_device" },
	{ 0xa1d6c8f1, "i2c_new_device" },
	{ 0xe484e35f, "ioread32" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x200dc428, "pci_save_state" },
};

MODULE_INFO(depends, "mcam-core");

MODULE_ALIAS("pci:v000011ABd00004102sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "58534177CBF0AC894C04F5C");
