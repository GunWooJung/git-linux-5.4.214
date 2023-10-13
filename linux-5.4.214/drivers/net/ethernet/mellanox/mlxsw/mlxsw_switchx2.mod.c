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
	{ 0xeb1919a4, "netdev_info" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x71e1d813, "mlxsw_core_port_clear" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x8f996a30, "ethtool_convert_legacy_u32_to_link_mode" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x5743f145, "netif_carrier_on" },
	{ 0x5b551d6c, "netif_carrier_off" },
	{ 0xbfb7df3c, "mlxsw_core_driver_priv" },
	{ 0xa6a40b7a, "__dev_kfree_skb_any" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0xbb314989, "mlxsw_core_trap_register" },
	{ 0xf948518e, "mlxsw_core_driver_unregister" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x76a65e3b, "mlxsw_core_port_init" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0xc5e4a5d1, "cpumask_next" },
	{ 0x8967b534, "mlxsw_pci_driver_register" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x1d3ccf63, "mlxsw_pci_driver_unregister" },
	{ 0xaed06536, "_dev_warn" },
	{ 0xca34ccf, "mlxsw_core_max_ports" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0xc5850110, "printk" },
	{ 0xc7a6ead9, "ethtool_op_get_link" },
	{ 0x2816d12d, "free_netdev" },
	{ 0xc21596aa, "register_netdev" },
	{ 0x2899f099, "netif_receive_skb" },
	{ 0x5792f848, "strlcpy" },
	{ 0xd523d85d, "skb_push" },
	{ 0x5a50e82e, "mlxsw_core_port_eth_set" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xaf793668, "__alloc_percpu_gfp" },
	{ 0xd252e62d, "mlxsw_core_skb_transmit_busy" },
	{ 0x8fcee47e, "mlxsw_core_driver_register" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x55e31703, "ethtool_convert_link_mode_to_legacy_u32" },
	{ 0xa37c9ae7, "mlxsw_core_port_devlink_port_get" },
	{ 0x4a6ed376, "mlxsw_core_port_fini" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x4d59d915, "eth_type_trans" },
	{ 0xcfb5d782, "pskb_expand_head" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x216cc777, "netdev_err" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xc134d82b, "mlxsw_core_trap_unregister" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x8acf4ec6, "unregister_netdev" },
	{ 0xa7765e88, "mlxsw_reg_query" },
	{ 0xbfd01f33, "mlxsw_core_port_ib_set" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xb2e8db8a, "mlxsw_core_skb_transmit" },
	{ 0x8854d198, "mlxsw_reg_write" },
	{ 0xe3a1262e, "alloc_etherdev_mqs" },
	{ 0xf4909bea, "mlxsw_core_port_type_get" },
};

MODULE_INFO(depends, "mlxsw_core,mlxsw_pci");

MODULE_ALIAS("pci:v000015B3d0000C738sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "21EAC3B991EC4CE60EBB17E");
