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
	{ 0xeb233a45, "__kmalloc" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x263ed23b, "__x86_indirect_thunk_r12" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0xf37d2c0b, "gpio_to_desc" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0xa1f9a134, "__x86_indirect_thunk_rsi" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x403f9529, "gpio_request_one" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x201befae, "ath_printk" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0xfb578fc5, "memset" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0x1edb69d6, "ktime_get_raw_ts64" },
	{ 0xe7b00dfb, "__x86_indirect_thunk_r13" },
	{ 0x593c1bac, "__x86_indirect_thunk_rbx" },
	{ 0xce8b1878, "__x86_indirect_thunk_r14" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xa2bca77e, "ath_hw_get_listen_time" },
	{ 0xf08b651e, "ath_regd_get_band_ctl" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2e194ff1, "ath_hw_cycle_counters_update" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x1db6f908, "ath_hw_setbssidmask" },
	{ 0xfe990052, "gpio_free" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xffb817fb, "gpiod_set_raw_value" },
	{ 0xf05c7b8, "__x86_indirect_thunk_r15" },
	{ 0x96848186, "scnprintf" },
	{ 0xb352177e, "find_first_bit" },
	{ 0x63c4d61f, "__bitmap_weight" },
	{ 0xfe88309f, "gpiod_get_raw_value" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x9e7d6bd0, "__udelay" },
};

MODULE_INFO(depends, "ath");


MODULE_INFO(srcversion, "27FE61AF10DD602E42B323A");
