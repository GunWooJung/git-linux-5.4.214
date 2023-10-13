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
	{ 0xc9d8b484, "param_ops_string" },
	{ 0x765395c3, "param_ops_int" },
	{ 0x6eed2630, "param_array_ops" },
	{ 0x19faf0c0, "kfree_skb_list" },
	{ 0x676728e4, "skb_segment" },
	{ 0xf89bc02c, "skb_put" },
	{ 0x120103ea, "__netdev_alloc_skb" },
	{ 0x37a0cba, "kfree" },
	{ 0x9f54f444, "bpf_prog_destroy" },
	{ 0x91735db4, "bpf_prog_free" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x3a26ed11, "sched_clock" },
	{ 0xf84bd6ee, "bpf_stats_enabled_key" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xd8e6cdd2, "kfree_skb" },
	{ 0xd8e9013a, "skb_add_rx_frag" },
	{ 0x7ea3fb3a, "__free_pages" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xa52ae5eb, "alloc_pages_current" },
	{ 0x721c9d1f, "init_net" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x92f8784b, "__alloc_skb" },
	{ 0xc60bc673, "bpf_prog_select_runtime" },
	{ 0x216157cd, "bpf_prog_alloc" },
	{ 0x9bb7645b, "bpf_prog_create" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xc5850110, "printk" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1a9a433c, "prandom_u32_state" },
	{ 0xeb233a45, "__kmalloc" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "C5FEF4F6B7E72CBA03008DE");
