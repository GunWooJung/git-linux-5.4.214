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
	{ 0xeb233a45, "__kmalloc" },
	{ 0xc42da65d, "v4l2_async_register_subdev" },
	{ 0x8baa46a, "fwnode_graph_get_remote_port_parent" },
	{ 0x65e33f30, "fwnode_handle_put" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x39c574d6, "v4l2_async_subdev_notifier_register" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x192ef12, "v4l2_async_notifier_cleanup" },
	{ 0x16f2cdd6, "v4l2_async_notifier_init" },
	{ 0x89ca7e31, "fwnode_get_next_parent" },
	{ 0x26a8b060, "fwnode_device_is_available" },
	{ 0x6296bb23, "v4l2_async_notifier_add_subdev" },
	{ 0xc70a5bf2, "fwnode_property_present" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xaed06536, "_dev_warn" },
	{ 0xc5850110, "printk" },
	{ 0xcd994d52, "v4l2_async_notifier_add_fwnode_subdev" },
	{ 0x3384a303, "is_acpi_data_node" },
	{ 0xee51b70b, "fwnode_property_read_u64_array" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x76f87430, "fwnode_property_read_u32_array" },
	{ 0xd7b1c202, "fwnode_graph_parse_endpoint" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x834ee700, "fwnode_get_parent" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0xc0155fd5, "fwnode_property_get_reference_args" },
	{ 0xa0b493f3, "fwnode_get_next_child_node" },
	{ 0x75efe0fb, "fwnode_graph_get_port_parent" },
	{ 0x37a0cba, "kfree" },
	{ 0xecd1d8c5, "fwnode_graph_get_next_endpoint" },
	{ 0xd0865ac4, "dev_fwnode" },
	{ 0xf0a367e6, "fwnode_graph_get_remote_endpoint" },
	{ 0x86fe200d, "v4l2_async_notifier_unregister" },
	{ 0x15cb5620, "is_acpi_device_node" },
};

MODULE_INFO(depends, "videodev");


MODULE_INFO(srcversion, "3D19AC5C99C94117042B119");
