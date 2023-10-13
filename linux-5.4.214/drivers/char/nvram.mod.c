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
	{ 0xeb233a45, "__kmalloc" },
	{ 0xed8d36e6, "generic_file_llseek_size" },
	{ 0xc62cb64, "proc_create_single_data" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x58f84c2d, "seq_printf" },
	{ 0xcbaa4b74, "remove_proc_entry" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x4b2e0ffe, "misc_register" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xaf7d0f48, "current_task" },
	{ 0xc5850110, "printk" },
	{ 0x9e64fbfe, "rtc_cmos_read" },
	{ 0x2def7f76, "rtc_cmos_write" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xc6cbbc89, "capable" },
	{ 0x7040fff9, "rtc_lock" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x37a0cba, "kfree" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0x35775925, "misc_deregister" },
	{ 0x88db9f48, "__check_object_size" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "A75FDC62185CE026EDEE659");
