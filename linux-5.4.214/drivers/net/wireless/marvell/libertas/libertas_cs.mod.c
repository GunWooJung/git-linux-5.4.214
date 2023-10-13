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
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xb55067d3, "pcmcia_enable_device" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xfd864eaf, "pcmcia_register_driver" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x5857b225, "ioread16_rep" },
	{ 0x4da8a4a3, "lbs_stop_card" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x8cc79cab, "iowrite16_rep" },
	{ 0x32dce1b0, "pcmcia_request_io" },
	{ 0x120103ea, "__netdev_alloc_skb" },
	{ 0xdb70a8f7, "lbs_start_card" },
	{ 0xfc39e32f, "ioport_unmap" },
	{ 0xf10de535, "ioread8" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xc5850110, "printk" },
	{ 0x562b7d32, "lbs_queue_event" },
	{ 0x9594e899, "lbs_get_firmware_async" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x6af95259, "pcmcia_loop_config" },
	{ 0xcaf1bb44, "lbs_remove_card" },
	{ 0xa70000e5, "lbs_process_rxed_packet" },
	{ 0x3bff3839, "lbs_host_to_card_done" },
	{ 0x594bf15b, "ioport_map" },
	{ 0x848d372e, "iowrite8" },
	{ 0x9e010835, "lbs_add_card" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x216cc777, "netdev_err" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x6a86bc1, "iowrite16" },
	{ 0x37a0cba, "kfree" },
	{ 0xb9262523, "pcmcia_unregister_driver" },
	{ 0xc5534d64, "ioread16" },
	{ 0x19c85322, "pcmcia_disable_device" },
	{ 0xf89bc02c, "skb_put" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xae4dd985, "lbs_notify_command_response" },
};

MODULE_INFO(depends, "pcmcia,libertas");

MODULE_ALIAS("pcmcia:m02DBc8103f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m02DBc6064f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m02DFc8103f*fn*pfn*pa*pb*pc*pd*");

MODULE_INFO(srcversion, "EDDF6D269978A30118DF4A1");
