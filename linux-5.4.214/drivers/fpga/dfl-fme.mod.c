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
	{ 0xee9f9b02, "dfl_fpga_cdev_release_port" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0x3b5c6b0f, "dfl_fpga_cdev_assign_port" },
	{ 0x628fe55b, "dfl_fpga_dev_ops_register" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x518498d8, "fpga_image_info_alloc" },
	{ 0x999e8297, "vfree" },
	{ 0xf881967a, "dfl_fpga_dev_feature_uinit" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x19af53eb, "__platform_driver_register" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x6a6e05bf, "kstrtou8" },
	{ 0xaf7d0f48, "current_task" },
	{ 0xd73c36a2, "platform_device_alloc" },
	{ 0xf14ea0e9, "platform_device_add" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x74e831b6, "platform_device_unregister" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x8e17faf3, "put_device" },
	{ 0xe36dbb58, "dfl_fpga_dev_feature_init" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x7dd35ee6, "platform_device_add_data" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0xb2b884c, "fpga_bridges_put" },
	{ 0x424be4e5, "dfl_fpga_dev_ops_unregister" },
	{ 0x93ecf269, "fpga_image_info_free" },
	{ 0x96848186, "scnprintf" },
	{ 0x3a2bec7d, "fpga_region_program_fpga" },
	{ 0xa99a62a3, "platform_driver_unregister" },
	{ 0xca08c2ff, "fpga_region_class_find" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xaf465642, "platform_device_put" },
};

MODULE_INFO(depends, "dfl,fpga-mgr,fpga-bridge,fpga-region");


MODULE_INFO(srcversion, "077356B10F52BD543F2D9CA");
