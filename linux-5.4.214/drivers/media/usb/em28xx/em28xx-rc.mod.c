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
	{ 0x2d3385d3, "system_wq" },
	{ 0x91f1a115, "em28xx_read_reg" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x534e2a5a, "rc_unregister_device" },
	{ 0x765395c3, "param_ops_int" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x721f7cc7, "em28xx_free_device" },
	{ 0x73acdd4b, "em28xx_write_regs" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xc7ba3d4e, "dev_printk" },
	{ 0xb35586ed, "i2c_transfer" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x56470118, "__warn_printk" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xff79d472, "em28xx_register_extension" },
	{ 0xe4616689, "rc_allocate_device" },
	{ 0x66c54ff1, "input_event" },
	{ 0xf9c0b663, "strlcat" },
	{ 0xdb1785ec, "em28xx_find_led" },
	{ 0xaed06536, "_dev_warn" },
	{ 0x32437ce4, "rc_free_device" },
	{ 0xe5109a0f, "em28xx_toggle_reg_bits" },
	{ 0xe6f26e12, "rc_keydown" },
	{ 0xe68d1135, "em28xx_unregister_extension" },
	{ 0xdc481706, "rc_register_device" },
	{ 0x2bffad42, "em28xx_write_reg_bits" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x78041b8f, "byte_rev_table" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xd111bb59, "_dev_info" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x94a09154, "input_register_device" },
	{ 0x4e97c8d9, "input_free_device" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x4fc58c0c, "i2c_transfer_buffer_flags" },
	{ 0x37a0cba, "kfree" },
	{ 0x2ab40469, "input_unregister_device" },
	{ 0x249b8396, "i2c_probe_func_quick_read" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x78668228, "em28xx_write_reg" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x921d7c65, "em28xx_boards" },
	{ 0x4f55cb4, "input_allocate_device" },
};

MODULE_INFO(depends, "em28xx,rc-core");


MODULE_INFO(srcversion, "C7FCCE1410AC031A8255F3F");
