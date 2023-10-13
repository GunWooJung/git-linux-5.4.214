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
	{ 0xb9262523, "pcmcia_unregister_driver" },
	{ 0xfd864eaf, "pcmcia_register_driver" },
	{ 0x32dce1b0, "pcmcia_request_io" },
	{ 0xc5850110, "printk" },
	{ 0x60cd493a, "orinoco_if_add" },
	{ 0xc36d70d, "orinoco_init" },
	{ 0xb55067d3, "pcmcia_enable_device" },
	{ 0xc9c33c90, "pcmcia_request_irq" },
	{ 0xffe27bca, "orinoco_interrupt" },
	{ 0x20b542b4, "hermes_struct_init" },
	{ 0x594bf15b, "ioport_map" },
	{ 0x6af95259, "pcmcia_loop_config" },
	{ 0x5e49ff3b, "alloc_orinocodev" },
	{ 0x5c8f0410, "free_orinocodev" },
	{ 0x4dce64c0, "orinoco_if_del" },
	{ 0xfc39e32f, "ioport_unmap" },
	{ 0x19c85322, "pcmcia_disable_device" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x3b5a42ea, "orinoco_down" },
	{ 0xb6b6b81e, "orinoco_up" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xd5b625f, "pcmcia_write_config_byte" },
	{ 0xbe9405a3, "pcmcia_read_config_byte" },
	{ 0xd3b018f3, "pcmcia_dev_present" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "pcmcia,orinoco");

MODULE_ALIAS("pcmcia:m026Cc0001f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m0104c0001f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa816CC815pb6FBF459Apc*pd*");

MODULE_INFO(srcversion, "3AB94C739E33D730889B1C8");
