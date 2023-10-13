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
	{ 0x35a218ab, "param_ops_long" },
	{ 0x765395c3, "param_ops_int" },
	{ 0xa317608d, "pnp_unregister_driver" },
	{ 0x5b641e8c, "pnp_register_driver" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x85bd1608, "__request_region" },
	{ 0xdc481706, "rc_register_device" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x20c79ab5, "pnp_get_resource" },
	{ 0x32437ce4, "rc_free_device" },
	{ 0xe4616689, "rc_allocate_device" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x1000e51, "schedule" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xd55b19f0, "ir_raw_event_store" },
	{ 0xaed06536, "_dev_warn" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xa3bff5cc, "ir_raw_event_handle" },
	{ 0xb8c5979e, "ir_raw_event_store_with_filter" },
	{ 0x479c3c86, "find_next_zero_bit" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0x37a0cba, "kfree" },
	{ 0x534e2a5a, "rc_unregister_device" },
	{ 0x1035c7c2, "__release_region" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc5850110, "printk" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "rc-core");

MODULE_ALIAS("pnp:dITE8704*");
MODULE_ALIAS("acpi*:ITE8704:*");
MODULE_ALIAS("pnp:dITE8713*");
MODULE_ALIAS("acpi*:ITE8713:*");
MODULE_ALIAS("pnp:dITE8708*");
MODULE_ALIAS("acpi*:ITE8708:*");
MODULE_ALIAS("pnp:dITE8709*");
MODULE_ALIAS("acpi*:ITE8709:*");

MODULE_INFO(srcversion, "F3ABF93D2689C7A0E766473");
