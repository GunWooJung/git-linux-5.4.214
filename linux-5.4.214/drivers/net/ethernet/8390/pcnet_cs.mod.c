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
	{ 0x765395c3, "param_ops_int" },
	{ 0x6eed2630, "param_array_ops" },
	{ 0xf3b4b1e6, "ei_poll" },
	{ 0x432e266e, "ei_get_stats" },
	{ 0x32f85a01, "ei_tx_timeout" },
	{ 0x473e7988, "eth_validate_addr" },
	{ 0x820db7ec, "eth_mac_addr" },
	{ 0x824cf6a7, "ei_set_multicast_list" },
	{ 0xc4423bc4, "ei_start_xmit" },
	{ 0xb9262523, "pcmcia_unregister_driver" },
	{ 0xfd864eaf, "pcmcia_register_driver" },
	{ 0x24d273d1, "add_timer" },
	{ 0xc5850110, "printk" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x21d3b421, "__dynamic_netdev_dbg" },
	{ 0xc21596aa, "register_netdev" },
	{ 0xe2987380, "__alloc_ei_netdev" },
	{ 0xe8b1a3d2, "netdev_warn" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0x49951708, "sev_enable_key" },
	{ 0x8a1d6948, "_dev_notice" },
	{ 0xd111bb59, "_dev_info" },
	{ 0xaed06536, "_dev_warn" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7183b998, "pcmcia_release_window" },
	{ 0xcbd5b45e, "pcmcia_map_mem_page" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0xc446ef36, "pcmcia_request_window" },
	{ 0xb55067d3, "pcmcia_enable_device" },
	{ 0x6af95259, "pcmcia_loop_config" },
	{ 0x32dce1b0, "pcmcia_request_io" },
	{ 0xbea30ae1, "ei_open" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xd3b018f3, "pcmcia_dev_present" },
	{ 0x119721ac, "ei_interrupt" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x627d090c, "ei_close" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xeb1919a4, "netdev_info" },
	{ 0x2816d12d, "free_netdev" },
	{ 0x8acf4ec6, "unregister_netdev" },
	{ 0xedc03953, "iounmap" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x19c85322, "pcmcia_disable_device" },
	{ 0x7ad55ce3, "netif_device_detach" },
	{ 0xc5f6f445, "netif_device_attach" },
	{ 0x418b0d46, "NS8390_init" },
	{ 0x216cc777, "netdev_err" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "8390,pcmcia");

MODULE_ALIAS("pcmcia:m0057c0021f*fn*pfn00pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m0104c000Af*fn*pfn00pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m0105cEA15f*fn*pfn00pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m0143c3341f*fn*pfn00pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m0143cC0ABf*fn*pfn00pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m021Bc0101f*fn*pfn00pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m08A1cC0ABf*fn*pfn00pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn00pa578BA6E7pbB0AC62C4pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn00paBA9EB7E2pb077C174Epc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn00pa1A424A1CpbB23897FFpc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn00pa2A151FACpb48B932AEpc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn00pa0733CC81pbB3765033pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn00paF7CB0B07pb7A821B58pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn00paB2CED065pb3CED0555pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn00paDCFE12D3pbCD8906CCpc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn00paDCFE12D3pbC67C648Fpc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn00pfn*paB569A6E5pb5BD4FF2Cpc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn00pfn*paB569A6E5pb4BDF15C3pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn00pfn*paB569A6E5pbAE911C15pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn00pfn*pa11C2DA09pb7289DC5DpcAAD95E1Fpd*");
MODULE_ALIAS("pcmcia:m*c*f*fn00pfn*pa*pb1ED59302pc*pd*");
MODULE_ALIAS("pcmcia:m0057c1004f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m0104c000Df*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m0104c0075f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m0104c0145f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m0149c0230f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m0149c4530f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m0149cC1ABf*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m0186c0110f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m01BFc8041f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m0213c2452f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m026Fc0300f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m026Fc0307f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m026Fc030Af*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m0274c1103f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m0274c1121f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:mC001c0009f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa352FFF7Fpb00B2E941pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paB38BCC2Epb4DE88352pcEACA6C8Dpd7E57C22E*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa9533672Epb281F1C5Dpc3FF7175Bpd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa9FE55D3Dpb85601198pc3FF7175Bpd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa9999AB35pb00B2E941pc4B0D829Epd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa738A0019pb281F1C5Dpc5E9D92C0pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa3D294BE4pbEB9AAB6Cpc3FF7175Bpd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa1D55D7ECpbE4C64D34pc3FF7175Bpd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa547E66DCpb6B260753pc3FF7175Bpd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa932B7189pb699E4436pc6F6652E0pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa281F1C5DpbD4CD2F20pcB87ADD82pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa281F1C5DpbD4CD2F20pc7D3D83A8pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa67F236ABpb*pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paDFC6B5B2pbCB112A11pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paDFC6B5B2pb5542BFFFpc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paBB7FBDD7pbCD91CC68pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa36634A66pbC6D05997pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paBB7FBDD7pb28E299F8pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa36634A66pb62241D96pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa5070A7F9pb82F96E96pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa5070A7F9pb86741224pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa93B15570pb75EC3EFBpc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa93B15570pb461C5247pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa93B15570pb82F96E96pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa578BA6E7pb0A9888C1pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa578BA6E7pb939FEDBDpc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa313ADBC8pb08D9F190pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa3A7ADE0Fpb41C64504pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa552AB682pbEEB1BA6Apc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa44EBF863pb93AE4D79pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paBC477DDEpbFBA775A7pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paFA2E424DpbE9190D8Apc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paFA2E424Dpb3953D9B9pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa21CAB552pbF6F90722pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa0A21501ApbA51564A2pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa0A21501Apb6589340Apc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa5261440Fpb8797663Bpc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa5261440FpbFA9D85BDpc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa5261440FpbC49BD73Dpc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paD4FDCBD8pbC49BD73Dpc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa5261440Fpb6705FCAApc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa5261440Fpb47D5CA83pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa5261440Fpb485E85D9pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa110D26D9pb9FD2F0A2pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa9791A90Epb9FD2F0A2pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa5261440Fpb73EC0D88pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paEE5AF0ADpb7C2ADD04pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa77008979pb9D8D445Dpc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa77008979pbFD184814pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa5CD66D9Dpb84697CE0pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa0C629325pbB4E7DBAFpc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa697403D8pbE160B995pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa697403D8pbA6D3B233pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa69616CB3pbE600E76Epc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa1A424A1CpbF28C8398pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa1A424A1CpbD9A1D05Bpc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa1A424A1Cpb50DCD0ECpc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa1A424A1Cpb0F0073F9pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa725B842DpbF1EFEE84pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa725B842Dpb2DB1F8E9pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa55632FD5pbDC65F2B1pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa6A26D1CFpbDC65F2B1pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa6A26D1CFpbC4F84EFBpc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa6701DA11pb6701DA11pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa53C864C6pbEDD059F6pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa53C864C6pb929C486Cpc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa00B2E941pb4B0D829Epc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa96767301pb71FBBC61pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa8DD86181pbF2B52517pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paB4BE14E3pb4B0D829Epc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa2A151FACpbF00555CBpc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa2A151FACpbC1B7E327pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa76E171BDpb6EB1C947pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paE3736C88pb00B2E941pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa60CB09A6pb60CB09A6pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa93693494pb93693494pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa547E66DCpb6FC5459Bpc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa56C538D2pb11B0FFC0pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paB18DC3B4pbCC51A956pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paAF8144C9pb868F6616pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paA89B87D3pb1EB88E64pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa7BCB459ApbA5C81FA5pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa1128E633pbCE2A89B3pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa313C7BE3pb0AFB54A2pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa1B7827B2pbCDA71D1Cpc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa1B7827B2pbFEC71E40pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa1B7827B2pb79FBA4F7pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa1B7827B2pb931AFAABpc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paBBEFB52FpbD2897A97pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa0733CC81pb32EE8C78pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paF7CB0B07pb6701DA11pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa0733CC81pb453C3F9Dpc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa0733CC81pb66C5A389pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa0733CC81pb3A3B28E9pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa0733CC81pb7A3E5C3Apc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa88FCDEDApb6D772737pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa88FCDEDApb0E714BEEpc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa88FCDEDApb81090922pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa88FCDEDApbC1E2521Cpc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paF866B0B0pb6F6652E0pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa20841B68pbAF8A3578pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paD830297FpbD265C307pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa44445376pb8DED41D4pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa78D64BC0pbCA0CA4B8pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa481E0094pbA2EB0CF3pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa481E0094pb41A6916Cpc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa4B91CEC7pbE70220D6pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa2E6DA59Bpb0478E472pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa648D55C1pbBDE526C7pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa36E1191Fpb60C229B9pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa36E1191FpbA6617EC8pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa18DF0BA0pbBC912D76pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa9AA79DC3pb60E5BC0Epc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa820A67B6pb31ED1A5Fpc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paAEDAEC74pbAD050EF1pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa281F1C5Dpb6E41773Bpc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa281F1C5Dpb00B2E941pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa281F1C5Dpb3FF7175Bpc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa281F1C5Dpb4DE2F6C8pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa281F1C5Dpb5E9D92C0pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa281F1C5Dpb929C486Cpc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa281F1C5Dpb4D8817C8pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa281F1C5DpbFE871EEBpc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa281F1C5Dpb45F1F3B4pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa281F1C5DpbEC5DBCA7pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa7500E246pb00B2E941pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa281F1C5DpbE707F641pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paDCFE12D3pbCD8906CCpc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa281F1C5DpbBF17199Bpc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa281F1C5Dpb42D5D7E1pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paEBF91155pb30074C80pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paEBF91155pb7F5A4F50pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paF5F025C2pb3A30E110pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paCDD0644Apb00B2E941pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa7DD33481pb10B41826pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paE3E66E22pbB96150DFpc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paDC6F88FDpb4A7E2AE0pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paDC6F88FDpb4BCBD7FDpc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paC53AC515pb81E39388pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paBDC3B102pb929C486Cpc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa09928730pb00B2E941pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paC4F8B18BpbFB21D265pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paC70A4760pb2ADE483Epc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paC70A4760pb5DD978A8pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa1EAE9475pb0ED386FApc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa466B05F0pb8B74BC4Fpc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa466B05F0pb33C8DB2Apc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa8787BEC7pb*pcF6E4A31Epd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa932B7189pb*pc5E9D92C0pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paF866B0B0pb*pcF6E4A31Epd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa2E3EE845pb*pc22A49F89pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa94FAF360pb*pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa8850B4DEpb*pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa06A8514Fpb*pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa75B8AD5Apb*pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa*pbA996D078pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn00pa281F1C5Dpb570F348Epc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn00pa281F1C5Dpb6FDCACEEpc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn00paF5F025C2pb338E8155pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn00paF5F025C2pb4AE85D35pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn00paF7CB0B07pb66881874pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn00paB4585A1Apb53F922F8pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn00pfn*pa8FDF8F89pbDD5ED9E8pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn00pfn*pa*pb*pc*pd58FC6056*");
MODULE_ALIAS("pcmcia:m0175c0000f*fn00pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa2AD62F3Cpb9FD2F0A2pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paAD180345pb9D58D392pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa01C43AE1pb00B2E941pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa34F3F1C8pb10B59F8Cpc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paCF434FBApb00B2E941pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa00B2E941pb43AC239Bpc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paB4BE14E3pb43AC239Bpc0877B627pd*");

MODULE_INFO(srcversion, "B00B050F44C9E517467BBD2");
