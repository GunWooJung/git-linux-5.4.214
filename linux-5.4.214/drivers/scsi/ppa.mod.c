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
	{ 0xa15b8bbf, "parport_unregister_driver" },
	{ 0xb946a912, "__parport_register_driver" },
	{ 0xf8c6e3da, "scsi_scan_host" },
	{ 0xa33bf30d, "scsi_add_host_with_dma" },
	{ 0x8ed9fa14, "scsi_host_alloc" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xd5fd90f1, "prepare_to_wait" },
	{ 0xc97796d4, "parport_register_dev_model" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0xaf7d0f48, "current_task" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x87b8798d, "sg_next" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x16b41dd, "parport_claim" },
	{ 0x49951708, "sev_enable_key" },
	{ 0x37a0cba, "kfree" },
	{ 0x60d9cb33, "parport_unregister_device" },
	{ 0xf4e6656e, "scsi_host_put" },
	{ 0x665ec217, "scsi_remove_host" },
	{ 0x1f85bb35, "parport_release" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x2c8218b3, "blk_queue_bounce_limit" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x58f84c2d, "seq_printf" },
	{ 0xc5850110, "printk" },
	{ 0x5a921311, "strncmp" },
	{ 0x20000329, "simple_strtoul" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "parport");


MODULE_INFO(srcversion, "B3B44468A20FAFCB19B0A44");
