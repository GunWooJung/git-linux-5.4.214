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
	{ 0x765395c3, "param_ops_int" },
	{ 0x4ff518e, "root_device_unregister" },
	{ 0x975869a5, "vme_unregister_bridge" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x721a6218, "vme_register_bridge" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0xfaa8197e, "__root_device_register" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xfaaa4ee1, "vme_irq_handler" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0xc5850110, "printk" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x37a0cba, "kfree" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "A0CA88C327A875AEC97867E");
