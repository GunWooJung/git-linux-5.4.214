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
	{ 0x195390f1, "w1_unregister_family" },
	{ 0x855f3b29, "w1_register_family" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xc5850110, "printk" },
	{ 0xc89a56bf, "w1_write_block" },
	{ 0xc4a837a5, "w1_reset_bus" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x37a0cba, "kfree" },
	{ 0xf9a482f9, "msleep" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0xaed06536, "_dev_warn" },
	{ 0x63757e92, "w1_calc_crc8" },
	{ 0x2db79d6e, "w1_read_block" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x8276e581, "w1_next_pullup" },
	{ 0x9ea21153, "w1_read_8" },
	{ 0xadc30d10, "w1_write_8" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x3ab00a6c, "w1_reset_select_slave" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "wire");


MODULE_INFO(srcversion, "2A8B923D74713F70ABBC6AA");
