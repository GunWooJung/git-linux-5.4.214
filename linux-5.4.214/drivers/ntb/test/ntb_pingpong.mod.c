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
	{ 0x1cd6f316, "param_ops_uint" },
	{ 0xb5807f49, "ntb_unregister_client" },
	{ 0xef3c0d77, "__ntb_register_client" },
	{ 0x716265c7, "debugfs_initialized" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xfbdfc558, "hrtimer_start_range_ns" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xaed06536, "_dev_warn" },
	{ 0x245b30bf, "ntb_default_port_number" },
	{ 0x1e4ba250, "ntb_default_peer_port_count" },
	{ 0xa101eb19, "debugfs_create_atomic_t" },
	{ 0x7f3966fa, "debugfs_create_dir" },
	{ 0x4d64d639, "ntb_link_event" },
	{ 0x9f2dda53, "ntb_set_ctx" },
	{ 0xf1c699e0, "ntb_default_peer_port_number" },
	{ 0x1ee7d3cd, "hrtimer_init" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0xa0c6befa, "hrtimer_cancel" },
	{ 0xf8dfde50, "ntb_clear_ctx" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x5b1c5c13, "debugfs_remove_recursive" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "ntb");


MODULE_INFO(srcversion, "F4050CE74E68E98BF350980");
