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
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x45d14bdf, "hypercall_page" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xf7866b4f, "bind_evtchn_to_irqhandler_lateeoi" },
	{ 0x89eba28e, "irq_to_desc" },
	{ 0x6932b09e, "stream_open" },
	{ 0x5c42b5ca, "no_llseek" },
	{ 0x56470118, "__warn_printk" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0xfb384d37, "kasprintf" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x4b2e0ffe, "misc_register" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xaf7d0f48, "current_task" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0x8a78989f, "irq_from_evtchn" },
	{ 0xe007edf, "xen_evtchn_nr_channels" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0x419892d3, "fasync_helper" },
	{ 0xea5cbce, "xen_irq_lateeoi" },
	{ 0x4ea53e2d, "xen_set_affinity_evtchn" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xc7002ac4, "evtchn_make_refcounted" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0xcca5839d, "xen_vcpu_id" },
	{ 0x6a5cb5ee, "__get_free_pages" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xf8386d97, "cpumask_next_and" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x731dba7a, "xen_domain_type" },
	{ 0xde793eab, "kill_fasync" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x35775925, "misc_deregister" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x7712771a, "unbind_from_irqhandler" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "BD332E5196974C3DF7C8051");
