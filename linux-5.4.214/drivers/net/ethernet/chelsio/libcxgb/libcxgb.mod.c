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
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x73588f11, "dst_release" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x949f7342, "__alloc_percpu" },
	{ 0x999e8297, "vfree" },
	{ 0xe717b7e6, "neigh_destroy" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x922f45a6, "__bitmap_clear" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0xc5e4a5d1, "cpumask_next" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xfb578fc5, "memset" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0x64127b67, "bitmap_find_next_zero_area_off" },
	{ 0xc5850110, "printk" },
	{ 0xe7b00dfb, "__x86_indirect_thunk_r13" },
	{ 0x721c9d1f, "init_net" },
	{ 0x615911d7, "__bitmap_set" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x744b2b27, "ip6_route_output_flags" },
	{ 0x8de894fe, "make_kuid" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x31ec3ae6, "ip_route_output_flow" },
	{ 0xf05c7b8, "__x86_indirect_thunk_r15" },
	{ 0x63c4d61f, "__bitmap_weight" },
	{ 0xd542439, "__ipv6_addr_type" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "0C6FA290FBD02089051E3BA");
