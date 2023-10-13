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
	{ 0x32ee9868, "simple_open" },
	{ 0xb5807f49, "ntb_unregister_client" },
	{ 0xef3c0d77, "__ntb_register_client" },
	{ 0x716265c7, "debugfs_initialized" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x7d628444, "memcpy_fromio" },
	{ 0x263ed23b, "__x86_indirect_thunk_r12" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xfd93ee35, "ioremap_wc" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x7f3966fa, "debugfs_create_dir" },
	{ 0x1e4ba250, "ntb_default_peer_port_count" },
	{ 0x9f2dda53, "ntb_set_ctx" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0xf8dfde50, "ntb_clear_ctx" },
	{ 0x5b1c5c13, "debugfs_remove_recursive" },
	{ 0xedc03953, "iounmap" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x248efd3, "kstrtobool_from_user" },
	{ 0x245b30bf, "ntb_default_port_number" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x1000e51, "schedule" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x7d74d522, "kstrtoull_from_user" },
	{ 0xd0a46a6a, "debugfs_create_file" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x532b1a31, "dma_alloc_attrs" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xbb4f4766, "simple_write_to_buffer" },
	{ 0xf1c699e0, "ntb_default_peer_port_number" },
	{ 0x37a0cba, "kfree" },
	{ 0xb9e7429c, "memcpy_toio" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0x96848186, "scnprintf" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x47cfd825, "kstrtouint_from_user" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x5c75775f, "dma_free_attrs" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x67ba7ebf, "debugfs_remove" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "ntb");


MODULE_INFO(srcversion, "7BC9BC209E02FB69A560F66");
