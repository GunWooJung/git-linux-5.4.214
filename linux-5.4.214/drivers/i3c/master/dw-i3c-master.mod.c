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
	{ 0xa99a62a3, "platform_driver_unregister" },
	{ 0x19af53eb, "__platform_driver_register" },
	{ 0xb72cb064, "i3c_master_disec_locked" },
	{ 0xb9883e89, "i3c_master_add_i3c_dev_locked" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x29361773, "complete" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x2a1c70d7, "i3c_master_register" },
	{ 0x51765820, "devm_request_threaded_irq" },
	{ 0x7e73a43b, "platform_get_irq" },
	{ 0xb2210d64, "reset_control_deassert" },
	{ 0x815588a6, "clk_enable" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x25ce0c78, "__devm_reset_control_get" },
	{ 0x6164d63, "devm_clk_get" },
	{ 0x1e57910a, "devm_ioremap_resource" },
	{ 0xd072dc20, "platform_get_resource" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x452baac1, "i3c_master_set_info" },
	{ 0xf807382b, "i3c_master_get_free_addr" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x37a0cba, "kfree" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x6c4b6684, "reset_control_assert" },
	{ 0x9bbf0126, "i3c_master_unregister" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "i3c");

MODULE_ALIAS("of:N*T*Csnps,dw-i3c-master-1.00a");
MODULE_ALIAS("of:N*T*Csnps,dw-i3c-master-1.00aC*");

MODULE_INFO(srcversion, "73BF236C8D2DB709E2683F8");
