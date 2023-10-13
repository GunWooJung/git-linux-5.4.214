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
	{ 0x5c42b5ca, "no_llseek" },
	{ 0xb9262523, "pcmcia_unregister_driver" },
	{ 0xb4b1a06b, "class_destroy" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0xfd864eaf, "pcmcia_register_driver" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0x5328374d, "__class_create" },
	{ 0xad8df8fd, "cdev_del" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x14e23ddd, "device_destroy" },
	{ 0xd111bb59, "_dev_info" },
	{ 0xd267dbfb, "device_create" },
	{ 0x19c85322, "pcmcia_disable_device" },
	{ 0xb55067d3, "pcmcia_enable_device" },
	{ 0x5314ccb0, "cdev_add" },
	{ 0xbec0cf29, "cdev_init" },
	{ 0x7e75c696, "devm_ioport_map" },
	{ 0x6af95259, "pcmcia_loop_config" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x37a0cba, "kfree" },
	{ 0xf11543ff, "find_first_zero_bit" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x6932b09e, "stream_open" },
	{ 0x32dce1b0, "pcmcia_request_io" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x848d372e, "iowrite8" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0xf10de535, "ioread8" },
	{ 0xf9a482f9, "msleep" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "pcmcia");

MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa53CB94F9pbBFDF89A5pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa6271EFA3pb*pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa2054E8DEpb*pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa54A33665pb*pc*pd*");

MODULE_INFO(srcversion, "D25BB8C2A9A2E6FE15F358E");
