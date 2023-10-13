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
	{ 0xdaec76a7, "ata_host_alloc" },
	{ 0x3a4f6a32, "ata_sff_interrupt" },
	{ 0x765395c3, "param_ops_int" },
	{ 0x5814e313, "ata_scsi_unlock_native_capacity" },
	{ 0x4a0df7d9, "ata_platform_remove_one" },
	{ 0xe6cf0c30, "ata_scsi_slave_destroy" },
	{ 0xd97b9d96, "ata_scsi_queuecmd" },
	{ 0x9fd50714, "ata_sff_port_ops" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x67c23766, "ata_sff_data_xfer32" },
	{ 0x33f57d5a, "ata_port_desc" },
	{ 0x19af53eb, "__platform_driver_register" },
	{ 0xf5ef26ac, "ata_dev_next" },
	{ 0x725524e1, "ata_scsi_slave_config" },
	{ 0x486e2fb3, "ata_dev_printk" },
	{ 0xd072dc20, "platform_get_resource" },
	{ 0x81aebe3e, "ata_sff_data_xfer" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x56ce6cd8, "ata_host_activate" },
	{ 0x9cf173, "ata_cable_unknown" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x8281b36, "devm_ioremap" },
	{ 0x7e50a8a0, "ata_common_sdev_attrs" },
	{ 0xa99a62a3, "platform_driver_unregister" },
	{ 0x2ceb96bf, "ata_std_bios_param" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0xd8037265, "ata_scsi_ioctl" },
	{ 0x7e75c696, "devm_ioport_map" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "B35F676C830137BFDB06626");
