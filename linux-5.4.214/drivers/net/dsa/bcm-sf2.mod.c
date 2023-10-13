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
	{ 0x9030a607, "dsa_switch_resume" },
	{ 0x63d58c02, "flow_rule_match_ip" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x888b323, "mdiobus_unregister" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x19af53eb, "__platform_driver_register" },
	{ 0x45321be4, "flow_rule_match_ipv6_addrs" },
	{ 0xa58561b3, "flow_rule_match_ports" },
	{ 0xc5850110, "printk" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xc47fece0, "dsa_unregister_switch" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x7c4c511, "ethtool_rx_flow_rule_create" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xf11543ff, "find_first_zero_bit" },
	{ 0x2d525545, "b53_switch_alloc" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xa916b694, "strnlen" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x70bc6634, "flow_rule_match_ipv4_addrs" },
	{ 0x778e4100, "dsa_switch_suspend" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x63c4d61f, "__bitmap_weight" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xa99a62a3, "platform_driver_unregister" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x5c2a1f33, "ethtool_rx_flow_rule_destroy" },
};

MODULE_INFO(depends, "dsa_core,b53_common");

MODULE_ALIAS("of:N*T*Cbrcm,bcm7445-switch-v4.0");
MODULE_ALIAS("of:N*T*Cbrcm,bcm7445-switch-v4.0C*");
MODULE_ALIAS("of:N*T*Cbrcm,bcm7278-switch-v4.0");
MODULE_ALIAS("of:N*T*Cbrcm,bcm7278-switch-v4.0C*");
MODULE_ALIAS("of:N*T*Cbrcm,bcm7278-switch-v4.8");
MODULE_ALIAS("of:N*T*Cbrcm,bcm7278-switch-v4.8C*");

MODULE_INFO(srcversion, "27CE123CCF62F2FD84105C3");
