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
	{ 0x3e898140, "inet6_del_offload" },
	{ 0x791682a8, "xfrm_unregister_type_offload" },
	{ 0x750b7f7a, "inet6_add_offload" },
	{ 0xc5850110, "printk" },
	{ 0x9912d42b, "xfrm_register_type_offload" },
	{ 0xfc408ce, "xfrm_input" },
	{ 0xce71465f, "xfrm_state_lookup" },
	{ 0xc8efe345, "secpath_set" },
	{ 0xe1670a6b, "xfrm_parse_spi" },
	{ 0x5c3a332e, "__skb_ext_del" },
	{ 0x3ab1e867, "esp6_output_tail" },
	{ 0xd86cf428, "esp6_output_head" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x70ba9008, "inet6_offloads" },
	{ 0x393296d2, "skb_mac_gso_segment" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb71cf1a4, "ipv6_skip_exthdr" },
	{ 0xd523d85d, "skb_push" },
	{ 0x90a69765, "__pskb_pull_tail" },
	{ 0xfaac4ca8, "esp6_input_done2" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "esp6");


MODULE_INFO(srcversion, "5F7E4215A5C1337C4689503");
