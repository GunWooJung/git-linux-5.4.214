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
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0x754d539c, "strlen" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x48a92047, "relay_file_operations" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xc955e6a6, "ath9k_hw_getchan_noise" },
	{ 0x7ef39823, "ieee80211_hdrlen" },
	{ 0xd0632d3a, "ath9k_hw_setrxfilter" },
	{ 0xd0a46a6a, "debugfs_create_file" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x93a1051a, "relay_switch_subbuf" },
	{ 0xc5e4a5d1, "cpumask_next" },
	{ 0x201befae, "ath_printk" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x3135b2a, "relay_close" },
	{ 0xdab19d7c, "ath9k_hw_gettsf64" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0xc2448345, "default_llseek" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0x7e17de9f, "ath9k_hw_getrxfilter" },
	{ 0x67ba7ebf, "debugfs_remove" },
	{ 0xbed6138e, "skb_pull" },
	{ 0x32ee9868, "simple_open" },
	{ 0xb87dfd22, "relay_buf_full" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xd66c8184, "add_device_randomness" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0xbd900a19, "ieee80211_get_hdrlen_from_skb" },
	{ 0x37a0cba, "kfree" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x96848186, "scnprintf" },
	{ 0x9d550422, "relay_open" },
	{ 0xb0e602eb, "memmove" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xcf04cd17, "ath_hw_keyreset" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xc3ae777b, "ath9k_hw_set_txpowerlimit" },
};

MODULE_INFO(depends, "ath9k_hw,cfg80211,ath");


MODULE_INFO(srcversion, "FEC6B04BAFB317ED28E63CA");
