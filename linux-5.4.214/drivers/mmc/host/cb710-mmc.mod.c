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
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0x90c7e35e, "sg_miter_stop" },
	{ 0x146a50c2, "cb710_sg_dwiter_read_next_block" },
	{ 0x6e03f850, "sg_miter_start" },
	{ 0xaed06536, "_dev_warn" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xec2ca07a, "cb710_pci_update_config_reg" },
	{ 0xb20c402c, "cb710_sg_dwiter_write_next_block" },
	{ 0xf10de535, "ioread8" },
	{ 0x40ca826f, "mmc_request_done" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x2cbcc89, "mmc_detect_change" },
	{ 0x848d372e, "iowrite8" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xe484e35f, "ioread32" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x6d3954a4, "mmc_add_host" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0xd0c1e622, "pci_read_config_dword" },
	{ 0x947fbbbc, "mmc_alloc_host" },
	{ 0x8bd4fa4f, "mmc_free_host" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x4a453f53, "iowrite32" },
	{ 0x5ee03f1f, "cb710_set_irq_handler" },
	{ 0xb846722a, "mmc_remove_host" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x6a86bc1, "iowrite16" },
	{ 0xc5534d64, "ioread16" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "cb710");


MODULE_INFO(srcversion, "B46F3E51AE3C0238F815E64");
