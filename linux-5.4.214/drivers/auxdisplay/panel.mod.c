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
	{ 0xc2448345, "default_llseek" },
	{ 0xa15b8bbf, "parport_unregister_driver" },
	{ 0xb946a912, "__parport_register_driver" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x727ea304, "charlcd_poke" },
	{ 0x8c3253ec, "_raw_spin_trylock" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x24d273d1, "add_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9192a401, "charlcd_register" },
	{ 0xa2a58bbe, "charlcd_alloc" },
	{ 0x37a0cba, "kfree" },
	{ 0x4b2e0ffe, "misc_register" },
	{ 0x9166fada, "strncpy" },
	{ 0x349cba85, "strchr" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x16b41dd, "parport_claim" },
	{ 0xc97796d4, "parport_register_dev_model" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xc5850110, "printk" },
	{ 0x35775925, "misc_deregister" },
	{ 0xd0cc2e18, "charlcd_free" },
	{ 0xac53a91b, "charlcd_unregister" },
	{ 0x60d9cb33, "parport_unregister_device" },
	{ 0x1f85bb35, "parport_release" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x1000e51, "schedule" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xc3aaf0a9, "__put_user_1" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "parport,charlcd");


MODULE_INFO(srcversion, "5E260C3F571C085F46AB2AB");
