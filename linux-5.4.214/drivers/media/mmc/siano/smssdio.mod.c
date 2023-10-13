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
	{ 0xd8f46d1d, "sdio_unregister_driver" },
	{ 0x43919251, "sdio_register_driver" },
	{ 0xc6fbc723, "smscore_start_device" },
	{ 0x43dff967, "sdio_claim_irq" },
	{ 0x98d0a1f5, "sdio_set_block_size" },
	{ 0xecf02f95, "sdio_enable_func" },
	{ 0x3abc875c, "smscore_set_board_id" },
	{ 0xb6ef266d, "smscore_register_device" },
	{ 0x844539ae, "sms_get_board" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x6961b9f2, "sdio_memcpy_toio" },
	{ 0x37d91069, "smsendian_handle_tx_message" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xc5850110, "printk" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x465e5562, "smscore_getbuffer" },
	{ 0xd24f31d, "smscore_onresponse" },
	{ 0x45284ae9, "smsendian_handle_rx_message" },
	{ 0xa5d565a3, "sdio_memcpy_fromio" },
	{ 0x225ecbd1, "sdio_readb" },
	{ 0x37a0cba, "kfree" },
	{ 0x56d3d127, "sdio_release_host" },
	{ 0xb63ef191, "sdio_disable_func" },
	{ 0x1f7b01bc, "sdio_release_irq" },
	{ 0xfc5d3d0c, "sdio_claim_host" },
	{ 0x8e1582ac, "smscore_unregister_device" },
	{ 0xf1d14fb3, "smscore_putbuffer" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "smsmdtv");

MODULE_ALIAS("sdio:c*v039Ad5347*");
MODULE_ALIAS("sdio:c*v039Ad1100*");
MODULE_ALIAS("sdio:c*v039Ad0201*");
MODULE_ALIAS("sdio:c*v039Ad0300*");
MODULE_ALIAS("sdio:c*v039Ad0301*");
MODULE_ALIAS("sdio:c*v039Ad0302*");
MODULE_ALIAS("sdio:c*v039Ad0500*");
MODULE_ALIAS("sdio:c*v039Ad0600*");
MODULE_ALIAS("sdio:c*v039Ad0700*");
MODULE_ALIAS("sdio:c*v039Ad0800*");

MODULE_INFO(srcversion, "57CB2AF9EB419F35741F95E");
