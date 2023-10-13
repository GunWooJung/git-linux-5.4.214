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
	{ 0xd5067bba, "rt_mutex_lock" },
	{ 0x714da7f6, "set_primary_fwnode" },
	{ 0xb35586ed, "i2c_transfer" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3656c243, "i2c_add_adapter" },
	{ 0xdc54a076, "__i2c_smbus_xfer" },
	{ 0xe27849d, "rt_mutex_trylock" },
	{ 0x72152111, "rt_mutex_unlock" },
	{ 0x70f7f79, "sysfs_remove_link" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xbdee9d50, "i2c_adapter_type" },
	{ 0xcfe9b0cc, "sysfs_create_link" },
	{ 0x3afc0e60, "i2c_del_adapter" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x53b9230d, "i2c_smbus_xfer" },
	{ 0x843772ae, "i2c_add_numbered_adapter" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9170e150, "acpi_find_child_device" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0xa516655f, "__i2c_transfer" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x15cb5620, "is_acpi_device_node" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "7BED06BCD5A3F14A81CCD58");
