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
	{ 0x86f434e2, "driver_unregister" },
	{ 0x4f4feb31, "class_interface_unregister" },
	{ 0x20d72ea6, "scsi_register_driver" },
	{ 0xf2cfcd3b, "scsi_register_interface" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x1b6694f0, "__scsi_iterate_devices" },
	{ 0x7fb299de, "enclosure_register" },
	{ 0xb11ffc4e, "sas_get_address" },
	{ 0x4ea695b2, "enclosure_for_each_device" },
	{ 0x6b3eed9b, "scsi_is_sas_rphy" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xd09a6f25, "enclosure_component_alloc" },
	{ 0x1b38ed15, "enclosure_component_register" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xaaf8f961, "kobject_uevent" },
	{ 0x8b653e8, "enclosure_add_device" },
	{ 0xfb578fc5, "memset" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x17d0ff05, "__scsi_execute" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x5158a831, "enclosure_remove_device" },
	{ 0x8b430185, "enclosure_unregister" },
	{ 0x8e17faf3, "put_device" },
	{ 0x37a0cba, "kfree" },
	{ 0x7911082f, "enclosure_find" },
	{ 0x4007983b, "sdev_prefix_printk" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "enclosure,scsi_transport_sas");


MODULE_INFO(srcversion, "5F96A66949F5E83EC6A7FE0");
