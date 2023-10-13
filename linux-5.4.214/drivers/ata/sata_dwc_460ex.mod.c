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
	{ 0x9fd50714, "ata_sff_port_ops" },
	{ 0xa99a62a3, "platform_driver_unregister" },
	{ 0x19af53eb, "__platform_driver_register" },
	{ 0xe27a5479, "phy_power_on" },
	{ 0x8265cfb8, "__dma_request_channel" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xf839138c, "ata_qc_complete" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x467da8bf, "ata_bmdma_qc_issue" },
	{ 0x374c53e1, "ata_get_cmd_descript" },
	{ 0xffbb95f8, "ata_sff_exec_command" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x8a1d6948, "_dev_notice" },
	{ 0x1e57910a, "devm_ioremap_resource" },
	{ 0xd072dc20, "platform_get_resource" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x2d2d0a7c, "ata_host_alloc_pinfo" },
	{ 0x6097714d, "sata_sff_hardreset" },
	{ 0x87c50119, "ata_sff_error_handler" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x37a0cba, "kfree" },
	{ 0x4cd53649, "phy_power_off" },
	{ 0x70ed50a, "dma_release_channel" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x6259fd79, "dw_dma_remove" },
	{ 0x6275bdb0, "phy_exit" },
	{ 0xf253fb1a, "ata_host_detach" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "dw_dmac_core");

MODULE_ALIAS("of:N*T*Camcc,sata-460ex");
MODULE_ALIAS("of:N*T*Camcc,sata-460exC*");

MODULE_INFO(srcversion, "4CD743131390BCA2DDFBAB3");
