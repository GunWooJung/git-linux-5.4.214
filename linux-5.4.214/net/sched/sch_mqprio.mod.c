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
	{ 0x9b0943a2, "unregister_qdisc" },
	{ 0x7b5f6776, "register_qdisc" },
	{ 0xbe92ed72, "skb_trim" },
	{ 0x839e2ef7, "nla_put" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x56470118, "__warn_printk" },
	{ 0x71332fd1, "gnet_stats_copy_queue" },
	{ 0xad2687bf, "gnet_stats_copy_basic" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x10c3f57e, "__gnet_stats_copy_queue" },
	{ 0xa7904be1, "__gnet_stats_copy_basic" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xc5e4a5d1, "cpumask_next" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x984ce9bd, "__nla_parse" },
	{ 0xb55fb344, "netdev_set_tc_queue" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xc32c6d09, "qdisc_create_dflt" },
	{ 0x9a28655f, "default_qdisc_ops" },
	{ 0xbce9369, "pfifo_fast_ops" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x421f3622, "dev_activate" },
	{ 0x9686a901, "dev_deactivate" },
	{ 0xf9887793, "netdev_txq_to_tc" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2b346870, "netdev_set_num_tc" },
	{ 0x37a0cba, "kfree" },
	{ 0xa743d636, "qdisc_put" },
	{ 0x913abc37, "dev_graft_qdisc" },
	{ 0x204093fa, "qdisc_hash_add" },
	{ 0xdb080919, "qdisc_hash_del" },
	{ 0x7020e465, "noop_qdisc" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "ECE00A6D83F85AA214A82EA");
