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
	{ 0xa24f23d8, "__request_module" },
	{ 0xf9a482f9, "msleep" },
	{ 0x53b954a2, "up_read" },
	{ 0x765395c3, "param_ops_int" },
	{ 0x37a24b11, "pci_read_config_byte" },
	{ 0xbe79f39c, "pci_set_cacheline_size" },
	{ 0x5e2381c7, "pci_stop_and_remove_bus_device" },
	{ 0x7ab88a45, "system_freezing_cnt" },
	{ 0xf5a6dec0, "pci_fixup_cardbus" },
	{ 0x56470118, "__warn_printk" },
	{ 0x928d7386, "pci_write_config_byte" },
	{ 0x5790e7a0, "pci_unlock_rescan_remove" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2d397ee6, "pci_bus_assign_resources" },
	{ 0x8a1d6948, "_dev_notice" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xa82f8d7f, "sysfs_remove_group" },
	{ 0xabaae129, "kthread_create_on_node" },
	{ 0x668b19a1, "down_read" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0xaed06536, "_dev_warn" },
	{ 0xdeeb6e3e, "device_register" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xaf7d0f48, "current_task" },
	{ 0x53963c6, "freezing_slow_path" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x85e73dd7, "kthread_stop" },
	{ 0xc2107c52, "sysfs_create_group" },
	{ 0xa191fd37, "class_unregister" },
	{ 0xe7b00dfb, "__x86_indirect_thunk_r13" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x47cff70, "pci_bus_add_devices" },
	{ 0xce807a25, "up_write" },
	{ 0x5fd264df, "__class_register" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x57bc19d2, "down_write" },
	{ 0xd0b0536, "pci_scan_slot" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x8e17faf3, "put_device" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xcce18d6, "pci_scan_bridge" },
	{ 0x1000e51, "schedule" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x4482cdb, "__refrigerator" },
	{ 0xab37f21b, "wake_up_process" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xddbeeecc, "pci_lock_rescan_remove" },
	{ 0xe7a7a03f, "get_device" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x37a0cba, "kfree" },
	{ 0x9e61bb05, "set_freezable" },
	{ 0x5a4e4713, "device_unregister" },
	{ 0x29361773, "complete" },
	{ 0xdb2d5c16, "dev_set_name" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0x94fec38a, "pci_bus_size_bridges" },
	{ 0x719e0e44, "add_uevent_var" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "7B16E3851074C16259723E9");
