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
	{ 0xd8ed0bcc, "bgx_set_lmac_mac" },
	{ 0x7405b58d, "pci_enable_sriov" },
	{ 0x339a5a9a, "pci_free_irq_vectors" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x72b238e4, "bgx_get_rx_stats" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xf2d62900, "dma_set_mask" },
	{ 0x7bbccd05, "nr_node_ids" },
	{ 0xc5846169, "pci_disable_device" },
	{ 0x46c5e2e4, "pcim_iomap" },
	{ 0x9922f9f9, "pci_disable_sriov" },
	{ 0x60cd1f2f, "bgx_lmac_get_pfc" },
	{ 0x982ccbd5, "pci_release_regions" },
	{ 0xd8be5fd, "bgx_lmac_rx_tx_enable" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x91e0d49, "dma_set_coherent_mask" },
	{ 0x6ca2152d, "bgx_lmac_set_pfc" },
	{ 0xbf27fdc4, "pci_alloc_irq_vectors_affinity" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0xc5850110, "printk" },
	{ 0x539ca253, "bgx_get_lmac_mac" },
	{ 0x42264715, "bgx_get_lmac_count" },
	{ 0xb0de39d3, "pci_read_config_word" },
	{ 0xc397f585, "bgx_lmac_internal_loopback" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xd111bb59, "_dev_info" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xf101d1b2, "bgx_get_lmac_link_state" },
	{ 0xbe654297, "bgx_get_tx_stats" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x8b95e7b, "pci_unregister_driver" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x226f7074, "pci_irq_vector" },
	{ 0x46cdf933, "bgx_config_timestamping" },
	{ 0x48baa369, "pci_sriov_get_totalvfs" },
	{ 0xc82be691, "bgx_get_map" },
	{ 0x4a5eb426, "pci_request_regions" },
	{ 0x716fd7f0, "bgx_reset_xcast_mode" },
	{ 0xf354855a, "__pci_register_driver" },
	{ 0xc60d0620, "__num_online_cpus" },
	{ 0xf51bf8b0, "pci_enable_device" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0xc99ba38a, "pci_msix_vec_count" },
	{ 0x34eeb48a, "bgx_set_dmac_cam_filter" },
	{ 0xea1cf29d, "pci_find_ext_capability" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xff987a02, "bgx_set_xcast_mode" },
};

MODULE_INFO(depends, "thunder_bgx");

MODULE_ALIAS("pci:v0000177Dd0000A01Esv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "AD77210D4F9E150C7E50E8A");
