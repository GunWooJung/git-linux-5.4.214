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
	{ 0x4fc02643, "rhashtable_walk_exit" },
	{ 0x10825ed5, "sock_diag_put_meminfo" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xb3351c6c, "rhashtable_walk_next" },
	{ 0x18350ef9, "sock_diag_unregister" },
	{ 0x32ae5741, "_raw_read_lock" },
	{ 0x9abd0bb8, "sock_i_ino" },
	{ 0xbe92ed72, "skb_trim" },
	{ 0xcf431496, "sock_diag_register" },
	{ 0xe21e70bc, "rhashtable_walk_stop" },
	{ 0xf08050c4, "rhashtable_walk_start_check" },
	{ 0x839e2ef7, "nla_put" },
	{ 0x7e7ce407, "nl_table" },
	{ 0xa731f387, "nl_table_lock" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x555f9eca, "rhashtable_walk_enter" },
	{ 0x37a0cba, "kfree" },
	{ 0xf1dca5b6, "sock_diag_save_cookie" },
	{ 0xa6884eab, "__nlmsg_put" },
	{ 0xfe87cdd0, "__netlink_dump_start" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "6927D99B8A924BC14296E48");
