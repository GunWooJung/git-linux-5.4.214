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
	{ 0x53b954a2, "up_read" },
	{ 0x3de9cae1, "crypto_remove_final" },
	{ 0x984ce9bd, "__nla_parse" },
	{ 0xa0fa5e83, "crypto_mod_put" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x5bd0748f, "crypto_del_default_rng" },
	{ 0xc49c71e6, "crypto_remove_spawns" },
	{ 0x457594fa, "crypto_alg_list" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xdd64e639, "strscpy" },
	{ 0xbe92ed72, "skb_trim" },
	{ 0x668b19a1, "down_read" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x7c72d98d, "crypto_mod_get" },
	{ 0xc21708cd, "unregister_pernet_subsys" },
	{ 0xc5850110, "printk" },
	{ 0xe698f19a, "netlink_kernel_release" },
	{ 0xa4265621, "crypto_unregister_instance" },
	{ 0x11a90242, "netlink_rcv_skb" },
	{ 0x839e2ef7, "nla_put" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8f4f774, "netlink_unicast" },
	{ 0xce807a25, "up_write" },
	{ 0x57bc19d2, "down_write" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xc2637667, "netlink_capable" },
	{ 0x92f8784b, "__alloc_skb" },
	{ 0xa916b694, "strnlen" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xd8e6cdd2, "kfree_skb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x1709a80e, "register_pernet_subsys" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xec6bedce, "__netlink_kernel_create" },
	{ 0x341f19e6, "crypto_alg_mod_lookup" },
	{ 0x35d3dc46, "crypto_alg_sem" },
	{ 0xa6884eab, "__nlmsg_put" },
	{ 0xfe87cdd0, "__netlink_dump_start" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "FC344AB96742250ED9F5A7D");
