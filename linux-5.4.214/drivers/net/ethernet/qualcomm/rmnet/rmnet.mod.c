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
	{ 0x958767a4, "register_netdevice" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x20eadeb6, "ip_compute_csum" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0xb1089b84, "netdev_rx_handler_register" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x56470118, "__warn_printk" },
	{ 0x949f7342, "__alloc_percpu" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x21d3b421, "__dynamic_netdev_dbg" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xbe92ed72, "skb_trim" },
	{ 0xc5e4a5d1, "cpumask_next" },
	{ 0x57eab2ed, "netdev_master_upper_dev_link" },
	{ 0xb47cca30, "csum_ipv6_magic" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x50cbd88e, "netif_schedule_queue" },
	{ 0xfb578fc5, "memset" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0x9fdecc31, "unregister_netdevice_many" },
	{ 0x838e8353, "netif_tx_wake_queue" },
	{ 0x839e2ef7, "nla_put" },
	{ 0x3ef6e429, "netdev_upper_dev_unlink" },
	{ 0xd523d85d, "skb_push" },
	{ 0x804b1301, "gro_cells_receive" },
	{ 0xbed6138e, "skb_pull" },
	{ 0x1e8aee9f, "rtnl_link_unregister" },
	{ 0xe4bf5722, "__dev_get_by_index" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x92f8784b, "__alloc_skb" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x6c398aad, "netdev_rx_handler_unregister" },
	{ 0xd8e6cdd2, "kfree_skb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x1d0ba5ee, "netdev_upper_dev_link" },
	{ 0xcfb5d782, "pskb_expand_head" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x9f54ead7, "gro_cells_destroy" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x4aebfc6b, "unregister_netdevice_queue" },
	{ 0xa3663702, "gro_cells_init" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xa4f157b5, "rtnl_link_register" },
	{ 0x53569707, "this_cpu_off" },
	{ 0xad263612, "consume_skb" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0xba505b9b, "dev_queue_xmit" },
	{ 0xf89bc02c, "skb_put" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "9AF704597B36B53DCDEA2A1");
