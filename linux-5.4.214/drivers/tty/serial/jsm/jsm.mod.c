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
	{ 0xb7a0d56a, "uart_write_wakeup" },
	{ 0x765395c3, "param_ops_int" },
	{ 0x6c798fbc, "uart_add_one_port" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xc5846169, "pci_disable_device" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x982ccbd5, "pci_release_regions" },
	{ 0xdc3e4f72, "uart_unregister_driver" },
	{ 0x97b943e0, "tty_buffer_request_room" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x174e8e65, "uart_remove_one_port" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x8338fd8, "pci_set_master" },
	{ 0xaed06536, "_dev_warn" },
	{ 0x374eae6e, "__tty_insert_flip_char" },
	{ 0x921f329, "pci_restore_state" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0xc5850110, "printk" },
	{ 0x8760c74e, "tty_insert_flip_string_fixed_flag" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xf11543ff, "find_first_zero_bit" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x79c26afa, "uart_handle_dcd_change" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb9e7429c, "memcpy_toio" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x8b95e7b, "pci_unregister_driver" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x37a0cba, "kfree" },
	{ 0x4a5eb426, "pci_request_regions" },
	{ 0xedc03953, "iounmap" },
	{ 0x7d628444, "memcpy_fromio" },
	{ 0xf354855a, "__pci_register_driver" },
	{ 0x6fca3e42, "uart_register_driver" },
	{ 0xcb763749, "tty_flip_buffer_push" },
	{ 0xf51bf8b0, "pci_enable_device" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x200dc428, "pci_save_state" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v0000114Fd000000C8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000114Fd000000C9sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000114Fd000000CAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000114Fd000000CBsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000114Fd000000F4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000114Fd000000B1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000114Fd000000B0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000114Fd000000CCsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000114Fd000000CDsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000114Fd000000CEsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000114Fd000000F0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000114Fd000000F1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000114Fd000000F2sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000114Fd000000F3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000114Fd00000028sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000114Fd000000D0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000114Fd00000029sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000114Fd000000D1sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "FF92145F81C320F655F7A69");
