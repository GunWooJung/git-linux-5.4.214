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
	{ 0x1cd6f316, "param_ops_uint" },
	{ 0xc371bb96, "param_ops_ulong" },
	{ 0x5c42b5ca, "no_llseek" },
	{ 0x4b2e0ffe, "misc_register" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xc5846169, "pci_disable_device" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0xf51bf8b0, "pci_enable_device" },
	{ 0x51a3dae5, "pci_match_id" },
	{ 0x29e52193, "pci_get_class" },
	{ 0xedc03953, "iounmap" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x35775925, "misc_deregister" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0x1000e51, "schedule" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0xaf7d0f48, "current_task" },
	{ 0xc5850110, "printk" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x37a0cba, "kfree" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00001389d00000001sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001389d00000002sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001389d00000003sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "3F979258DBE8A445807933F");
