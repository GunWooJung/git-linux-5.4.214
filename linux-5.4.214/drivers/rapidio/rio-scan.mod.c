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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xed93c0b3, "module_layout" },
	{ 0x68a41536, "param_ops_bool" },
	{ 0xe1bd6c99, "rio_init_mports" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x4f74f234, "rio_register_scan" },
	{ 0xb0c5b922, "rio_pw_enable" },
	{ 0x8fd91625, "rio_local_set_device_id" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x44e3d58, "rio_set_port_lockout" },
	{ 0xbe57c940, "rio_get_comptag" },
	{ 0xb352177e, "find_first_bit" },
	{ 0x80cfd813, "rio_route_add_entry" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xaad94dbf, "rio_mport_chk_dev_access" },
	{ 0xf9a482f9, "msleep" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xf61c927b, "rio_unlock_device" },
	{ 0xcdb7641, "rio_route_get_entry" },
	{ 0x48f36920, "rio_lock_device" },
	{ 0x7bfc4f60, "rio_enable_rx_tx_port" },
	{ 0x814aa7f1, "rio_dev_get" },
	{ 0x5afaebe, "rio_add_device" },
	{ 0x9ce96a13, "rio_attach_device" },
	{ 0x74c1adab, "rio_mport_get_feature" },
	{ 0x14c2d836, "rio_mport_get_physefb" },
	{ 0x79acaee3, "rio_route_clr_table" },
	{ 0xf11543ff, "find_first_zero_bit" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x5045db23, "rio_free_net" },
	{ 0x60911e75, "rio_add_net" },
	{ 0xdb2d5c16, "dev_set_name" },
	{ 0xddc02ffb, "rio_alloc_net" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xc5850110, "printk" },
	{ 0xd9b10d78, "rio_mport_write_config_32" },
	{ 0x342b92a4, "__rio_local_write_config_32" },
	{ 0x3191b8ed, "rio_mport_read_config_32" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xeeb579ee, "__rio_local_read_config_32" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x37a0cba, "kfree" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "5BE704947BB54CA932BD471");
