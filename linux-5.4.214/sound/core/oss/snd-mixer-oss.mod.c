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
	{ 0x24a94b26, "snd_info_get_line" },
	{ 0x53b954a2, "up_read" },
	{ 0xe701ed36, "snd_ctl_find_numid" },
	{ 0x754d539c, "strlen" },
	{ 0xf8edb3af, "snd_card_file_remove" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x5c42b5ca, "no_llseek" },
	{ 0xddb02d73, "snd_info_create_card_entry" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x58f84c2d, "seq_printf" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x198788b4, "snd_lookup_oss_minor_data" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0xebb33591, "nonseekable_open" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x668b19a1, "down_read" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x8df3789f, "snd_oss_info_register" },
	{ 0x904b4af4, "snd_ctl_notify" },
	{ 0x5792f848, "strlcpy" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xdf46d4f1, "module_put" },
	{ 0x1340e7d3, "snd_mixer_oss_notify_callback" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x72f9ab42, "snd_card_file_add" },
	{ 0x8e17faf3, "put_device" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xcf757527, "snd_card_ref" },
	{ 0x874ebf40, "snd_register_oss_device" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x2078a99d, "snd_ctl_find_id" },
	{ 0xb5f700cc, "snd_unregister_oss_device" },
	{ 0x9e6d79f8, "snd_info_get_str" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x25522ab1, "snd_info_free_entry" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x3496ec42, "snd_info_register" },
	{ 0x6d71399f, "try_module_get" },
};

MODULE_INFO(depends, "snd");


MODULE_INFO(srcversion, "BB3373FA68508DF90223C57");
