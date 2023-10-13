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
	{ 0x131e5561, "param_ops_charp" },
	{ 0x765395c3, "param_ops_int" },
	{ 0x6eed2630, "param_array_ops" },
	{ 0xd095e6da, "hdlcdrv_unregister" },
	{ 0xa15b8bbf, "parport_unregister_driver" },
	{ 0xdeeaed7c, "hdlcdrv_register" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xb946a912, "__parport_register_driver" },
	{ 0x33d1879, "hdlcdrv_arbitrate" },
	{ 0x9e9038f6, "hdlcdrv_receiver" },
	{ 0xb2e11e48, "hdlcdrv_transmitter" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xc6cbbc89, "capable" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xa916b694, "strnlen" },
	{ 0x349cba85, "strchr" },
	{ 0x5a921311, "strncmp" },
	{ 0x754d539c, "strlen" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x83df46f6, "parport_put_port" },
	{ 0xc97796d4, "parport_register_dev_model" },
	{ 0x5c0c361a, "parport_find_base" },
	{ 0x16b41dd, "parport_claim" },
	{ 0xc5850110, "printk" },
	{ 0x60d9cb33, "parport_unregister_device" },
	{ 0x1f85bb35, "parport_release" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "hdlcdrv,parport");


MODULE_INFO(srcversion, "4B0664F94B6283F9E1E6B65");
