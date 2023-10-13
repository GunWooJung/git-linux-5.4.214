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
	{ 0xcce57a7f, "param_ops_ushort" },
	{ 0x6eed2630, "param_array_ops" },
	{ 0xc21708cd, "unregister_pernet_subsys" },
	{ 0x1709a80e, "register_pernet_subsys" },
	{ 0x40662efd, "ip_vs_conn_in_get" },
	{ 0x38129556, "skb_ensure_writable" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x32624254, "ip_vs_conn_new" },
	{ 0xb589c711, "ip_vs_nfct_expect_related" },
	{ 0xe046e330, "__nf_nat_mangle_tcp_packet" },
	{ 0xb8dba366, "ip_vs_conn_put" },
	{ 0x84490256, "ip_vs_tcp_conn_listen" },
	{ 0xa916b694, "strnlen" },
	{ 0xe3ea2445, "ip_vs_conn_out_get" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x609bcd98, "in6_pton" },
	{ 0xac5fcec0, "in4_pton" },
	{ 0x96b29254, "strncasecmp" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xc5850110, "printk" },
	{ 0x23972135, "register_ip_vs_app_inc" },
	{ 0x229dc411, "register_ip_vs_app" },
	{ 0x81e7551b, "unregister_ip_vs_app" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "ip_vs,nf_nat");


MODULE_INFO(srcversion, "4625A1061038DA4191556E9");
