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
	{ 0x765395c3, "param_ops_int" },
	{ 0x7514cd74, "xenbus_unregister_driver" },
	{ 0x7bf7a9e8, "__xenbus_register_frontend" },
	{ 0xdb66ef20, "xen_pci_frontend" },
	{ 0x85cb2c45, "xen_has_pv_devices" },
	{ 0x54ea6dfe, "xen_start_flags" },
	{ 0x731dba7a, "xen_domain_type" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x418342ee, "xenbus_dev_error" },
	{ 0x539f157b, "pci_xen_swiotlb_init_late" },
	{ 0x5e51cd74, "swiotlb_nr_tbl" },
	{ 0x961509ac, "pci_get_domain_bus_and_slot" },
	{ 0xc6572a90, "xenbus_read_unsigned" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x6502d9c2, "xenbus_scanf" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xd72feba2, "xenbus_read_driver_state" },
	{ 0xe65f7d31, "pci_find_bus" },
	{ 0x38a71b7e, "pci_free_resource_list" },
	{ 0x47cff70, "pci_bus_add_devices" },
	{ 0x8170a9fd, "pci_walk_bus" },
	{ 0xf5ea6660, "pci_scan_root_bus" },
	{ 0xb352177e, "find_first_bit" },
	{ 0x944c43f, "node_states" },
	{ 0x77358855, "iomem_resource" },
	{ 0x27cdca93, "pci_add_resource" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0x587138e0, "xenbus_switch_state" },
	{ 0x75362760, "xenbus_dev_fatal" },
	{ 0x732852fe, "xenbus_transaction_end" },
	{ 0x6aa2a877, "xenbus_printf" },
	{ 0x52431348, "xenbus_transaction_start" },
	{ 0x34eab46d, "bind_evtchn_to_irqhandler" },
	{ 0xe2fce310, "xenbus_alloc_evtchn" },
	{ 0x96ec6791, "xenbus_grant_ring" },
	{ 0x6a5cb5ee, "__get_free_pages" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xc5850110, "printk" },
	{ 0xaed06536, "_dev_warn" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x642eb5c6, "xen_poll_irq_timeout" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x8cda8029, "xen_clear_irq_pending" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x45d14bdf, "hypercall_page" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x293efc00, "pci_scan_single_device" },
	{ 0xbbfe175a, "pci_get_slot" },
	{ 0x8423aab5, "pci_dev_put" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x2a79eade, "pci_claim_resource" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x372cfd6e, "gnttab_end_foreign_access" },
	{ 0x6e3b5ee, "xenbus_free_evtchn" },
	{ 0x7712771a, "unbind_from_irqhandler" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x5790e7a0, "pci_unlock_rescan_remove" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x246d22df, "pci_remove_bus" },
	{ 0x5a4e4713, "device_unregister" },
	{ 0x37a0cba, "kfree" },
	{ 0x5e2381c7, "pci_stop_and_remove_bus_device" },
	{ 0xddbeeecc, "pci_lock_rescan_remove" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "F83A99A673C94EE4E0A8EEE");
