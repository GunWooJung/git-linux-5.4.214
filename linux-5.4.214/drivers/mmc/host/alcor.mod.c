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
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x6a9a5a6c, "dma_direct_map_sg" },
	{ 0x94589e9e, "dma_direct_unmap_sg" },
	{ 0x9fe59f14, "dma_ops" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x7c245c32, "alcor_read32be" },
	{ 0xaf47ce9e, "alcor_read32" },
	{ 0xaed06536, "_dev_warn" },
	{ 0x2cbcc89, "mmc_detect_change" },
	{ 0x87b8798d, "sg_next" },
	{ 0xb846722a, "mmc_remove_host" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x8bd4fa4f, "mmc_free_host" },
	{ 0x6d3954a4, "mmc_add_host" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x51765820, "devm_request_threaded_irq" },
	{ 0x947fbbbc, "mmc_alloc_host" },
	{ 0x501f93e6, "alcor_write32" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x85000ff9, "alcor_write16" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x84acd352, "alcor_write32be" },
	{ 0xfc6ab156, "alcor_write8" },
	{ 0x6e03f850, "sg_miter_start" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0xbfc177bc, "iowrite32_rep" },
	{ 0x90c7e35e, "sg_miter_stop" },
	{ 0x3f0546a8, "ioread32_rep" },
	{ 0x64bfff20, "sg_miter_next" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0x40ca826f, "mmc_request_done" },
	{ 0x27e06dcb, "alcor_read8" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "alcor_pci");

MODULE_ALIAS("platform:alcor_sdmmc");

MODULE_INFO(srcversion, "A9DD2E5B16AA0105871C517");
