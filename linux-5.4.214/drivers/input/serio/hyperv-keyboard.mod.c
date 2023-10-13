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
	{ 0x72fc91c0, "vmbus_driver_unregister" },
	{ 0xa715d2d1, "__vmbus_driver_register" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x4fc0c5ca, "device_init_wakeup" },
	{ 0xc466e83f, "__serio_register_port" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x469d6b8b, "vmbus_sendpacket" },
	{ 0x8a4832a3, "vmbus_open" },
	{ 0x5792f848, "strlcpy" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x91f5647e, "hv_pkt_iter_close" },
	{ 0x30c1302a, "pm_wakeup_dev_event" },
	{ 0x27e60eae, "serio_interrupt" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xdf6e8946, "__hv_pkt_iter_next" },
	{ 0x29361773, "complete" },
	{ 0x643ab05a, "hv_pkt_iter_first" },
	{ 0x37a0cba, "kfree" },
	{ 0xbcc99da1, "vmbus_close" },
	{ 0x8c039e40, "serio_unregister_port" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "hv_vmbus");

MODULE_ALIAS("vmbus:6dad12f9172bea48bd65f927a61c7684");

MODULE_INFO(srcversion, "8BF8F161BB9831DCE892510");
