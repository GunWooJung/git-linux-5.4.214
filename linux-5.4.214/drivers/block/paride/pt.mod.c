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
	{ 0x5ae8a115, "noop_llseek" },
	{ 0xb4b1a06b, "class_destroy" },
	{ 0x14e23ddd, "device_destroy" },
	{ 0xd267dbfb, "device_create" },
	{ 0x6bc3fbc0, "__unregister_chrdev" },
	{ 0x5328374d, "__class_create" },
	{ 0xbce3803, "__register_chrdev" },
	{ 0xb21ba07d, "pi_unregister_driver" },
	{ 0xabb5d934, "pi_release" },
	{ 0x81ecacfe, "pi_init" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x4267110a, "pi_register_driver" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x37a0cba, "kfree" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x54496b4, "schedule_timeout_interruptible" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x637744bb, "pi_read_block" },
	{ 0x5da57723, "pi_disconnect" },
	{ 0xe7261545, "pi_write_block" },
	{ 0x540b9806, "pi_write_regr" },
	{ 0xd10f693e, "pi_connect" },
	{ 0xc5850110, "printk" },
	{ 0xedde963f, "pi_read_regr" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "paride");


MODULE_INFO(srcversion, "A6D962B43A95846D5B88683");
