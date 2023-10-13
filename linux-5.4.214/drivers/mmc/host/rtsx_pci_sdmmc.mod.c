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
	{ 0xa99a62a3, "platform_driver_unregister" },
	{ 0x19af53eb, "__platform_driver_register" },
	{ 0xc547221b, "rtsx_pci_write_ppbuf" },
	{ 0x2b8ab42, "sg_copy_to_buffer" },
	{ 0x37a0cba, "kfree" },
	{ 0x905695ab, "sg_copy_from_buffer" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x6a3f02b1, "rtsx_pci_dma_transfer" },
	{ 0x87deb4a5, "rtsx_pci_send_cmd_no_wait" },
	{ 0xc6612a5, "rtsx_pci_read_ppbuf" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x42c3318f, "rtsx_pci_card_pull_ctl_disable" },
	{ 0xd30c3e73, "rtsx_pci_card_power_off" },
	{ 0x16a92161, "rtsx_pci_switch_clock" },
	{ 0x54d3baa3, "rtsx_pci_card_power_on" },
	{ 0xc9668c35, "rtsx_pci_card_pull_ctl_enable" },
	{ 0x6655b793, "rtsx_pci_send_cmd" },
	{ 0x26c394d6, "rtsx_pci_card_exist" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xf9a482f9, "msleep" },
	{ 0xe65263b6, "rtsx_pci_switch_output_voltage" },
	{ 0xf692ed97, "rtsx_pci_read_register" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xea93e370, "rtsx_pci_card_exclusive_check" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xe484e35f, "ioread32" },
	{ 0x8ff28e91, "rtsx_pci_start_run" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xf62d224b, "rtsx_pci_dma_map_sg" },
	{ 0xd45ed47b, "rtsx_pci_dma_unmap_sg" },
	{ 0xb926360c, "rtsx_pci_write_register" },
	{ 0x2cbcc89, "mmc_detect_change" },
	{ 0x6d3954a4, "mmc_add_host" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x947fbbbc, "mmc_alloc_host" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x8bd4fa4f, "mmc_free_host" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0xb846722a, "mmc_remove_host" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x40ca826f, "mmc_request_done" },
	{ 0x5efddaaa, "rtsx_pci_complete_unfinished_transfer" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x8cf21293, "rtsx_pci_add_cmd" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "rtsx_pci");

MODULE_ALIAS("platform:rtsx_pci_sdmmc");

MODULE_INFO(srcversion, "98E9313692108452684B60A");
