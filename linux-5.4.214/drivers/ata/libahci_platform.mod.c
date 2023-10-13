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
	{ 0xb077e70a, "clk_unprepare" },
	{ 0x3b57f4f2, "phy_init" },
	{ 0x672552d, "ata_dummy_port_ops" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xe5b6e9e8, "__pm_runtime_idle" },
	{ 0xea50dad3, "ahci_ignore_sss" },
	{ 0x815588a6, "clk_enable" },
	{ 0xfb4ec2db, "__pm_runtime_disable" },
	{ 0xafa5203c, "ahci_save_initial_config" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x1643a127, "regulator_disable" },
	{ 0xf2d62900, "dma_set_mask" },
	{ 0xe59ad398, "ata_host_suspend" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xa8622e6e, "ahci_reset_em" },
	{ 0x2e1ca751, "clk_put" },
	{ 0x1e57910a, "devm_ioremap_resource" },
	{ 0x8bdf333d, "__pm_runtime_resume" },
	{ 0x959dbc1c, "ata_host_resume" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x624c8c1, "phy_set_mode_ext" },
	{ 0x33f57d5a, "ata_port_desc" },
	{ 0x8b1b1560, "devres_alloc_node" },
	{ 0x91e0d49, "dma_set_coherent_mask" },
	{ 0x2d2d0a7c, "ata_host_alloc_pinfo" },
	{ 0x4cd53649, "phy_power_off" },
	{ 0xaed06536, "_dev_warn" },
	{ 0xaaf41bd0, "ahci_print_info" },
	{ 0xf22dbe5a, "devres_open_group" },
	{ 0xe27a5479, "phy_power_on" },
	{ 0xb2210d64, "reset_control_deassert" },
	{ 0xd072dc20, "platform_get_resource" },
	{ 0xe8e8beff, "ahci_reset_controller" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xd111bb59, "_dev_info" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x868b9359, "devm_regulator_get" },
	{ 0x6275bdb0, "phy_exit" },
	{ 0x8278702f, "ahci_host_activate" },
	{ 0x9962bc44, "pm_runtime_enable" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x6da41d88, "ahci_init_controller" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xb98c9772, "__pm_runtime_set_status" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x8137ca2f, "devm_reset_control_array_get" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xa619e2b0, "devres_add" },
	{ 0xc94e6153, "ahci_set_em_messages" },
	{ 0x41187327, "clk_get" },
	{ 0x37a0cba, "kfree" },
	{ 0x6c4b6684, "reset_control_assert" },
	{ 0x74130e69, "regulator_put" },
	{ 0xabc3b361, "devm_of_phy_get" },
	{ 0xaae99157, "devres_remove_group" },
	{ 0x7e73a43b, "platform_get_irq" },
	{ 0x8378e785, "regulator_get" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x5133f82a, "devres_release_group" },
	{ 0xfe543c51, "regulator_enable" },
	{ 0x947d4b8b, "ahci_ops" },
};

MODULE_INFO(depends, "libahci");


MODULE_INFO(srcversion, "7F2EE1263B16F4342D9BBF3");
