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
	{ 0x473e7988, "eth_validate_addr" },
	{ 0x820db7ec, "eth_mac_addr" },
	{ 0x8acf4ec6, "unregister_netdev" },
	{ 0x2816d12d, "free_netdev" },
	{ 0xc21596aa, "register_netdev" },
	{ 0xf3b47f67, "xp_partition_id" },
	{ 0xc6fb8710, "alloc_netdev_mqs" },
	{ 0xf0fa7dc3, "ether_setup" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x12e285ec, "is_uv_system" },
	{ 0x345c9217, "xpc_disconnect" },
	{ 0xa6a40b7a, "__dev_kfree_skb_any" },
	{ 0x5b551d6c, "netif_carrier_off" },
	{ 0x5743f145, "netif_carrier_on" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x50087170, "netif_rx_ni" },
	{ 0x4d59d915, "eth_type_trans" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x68fa7d28, "xp_remote_memcpy" },
	{ 0xf89bc02c, "skb_put" },
	{ 0x120103ea, "__netdev_alloc_skb" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xc04c7267, "xpc_connect" },
	{ 0xaed06536, "_dev_warn" },
	{ 0x37a0cba, "kfree" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0xb352177e, "find_first_bit" },
	{ 0xad263612, "consume_skb" },
	{ 0xead4f7fe, "xp_max_npartitions" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x69acdf38, "memcpy" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0xe68acd6c, "xpc_interface" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x64ba5017, "xp_pa" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "xp");


MODULE_INFO(srcversion, "A0EB1A3D2ECB9010C1F5C6B");
