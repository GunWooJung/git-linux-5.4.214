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
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x34d3b8d1, "driver_register" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ebd3027, "snd_hdac_device_exit" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0xf7f156ff, "snd_hda_bus_type" },
	{ 0x99e4d813, "snd_hdac_bus_init_cmd_io" },
	{ 0x9c20b375, "snd_hdac_bus_stop_cmd_io" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x86f434e2, "driver_unregister" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8547cad1, "snd_hdac_stream_assign" },
	{ 0x47b36742, "snd_hdac_device_init" },
	{ 0xf72ad05e, "snd_hdac_device_unregister" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x81e40145, "snd_hdac_stream_init" },
	{ 0xd9f6c512, "snd_hdac_bus_init" },
	{ 0xa72c85a1, "snd_hdac_stream_stop" },
	{ 0x696aaf28, "snd_hdac_device_register" },
	{ 0x8e17faf3, "put_device" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x862d3e7a, "snd_hdac_bus_exit" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x37a0cba, "kfree" },
	{ 0xe6ba1bc, "snd_hdac_bus_stop_chip" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xfe3c8128, "snd_hdac_stream_release" },
};

MODULE_INFO(depends, "snd-hda-core");


MODULE_INFO(srcversion, "6C534022CCB3D86C7644F9C");
