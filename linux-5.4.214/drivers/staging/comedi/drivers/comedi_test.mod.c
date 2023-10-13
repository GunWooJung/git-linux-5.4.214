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

MODULE_INFO(staging, "Y");

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xed93c0b3, "module_layout" },
	{ 0x68a41536, "param_ops_bool" },
	{ 0x1cd6f316, "param_ops_uint" },
	{ 0x758f081b, "comedi_driver_unregister" },
	{ 0x8db20125, "comedi_auto_unconfig" },
	{ 0xb4b1a06b, "class_destroy" },
	{ 0x14e23ddd, "device_destroy" },
	{ 0xe800cafc, "comedi_auto_config" },
	{ 0xd267dbfb, "device_create" },
	{ 0x5328374d, "__class_create" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xc5850110, "printk" },
	{ 0xe73c2838, "comedi_driver_register" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x689f67a5, "comedi_buf_write_samples" },
	{ 0xb0b4e3f9, "comedi_nsamples_left" },
	{ 0x24d273d1, "add_timer" },
	{ 0x9b2f554d, "comedi_buf_read_samples" },
	{ 0xad4615d4, "comedi_inc_scan_progress" },
	{ 0x8a9eed64, "comedi_buf_read_free" },
	{ 0x9044625a, "comedi_buf_read_alloc" },
	{ 0xba00d49d, "comedi_nscans_left" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xf1969a8e, "__usecs_to_jiffies" },
	{ 0x9b6c9ca8, "comedi_handle_events" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x4629334c, "__preempt_count" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0xd111bb59, "_dev_info" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x390a0822, "comedi_alloc_subdevices" },
	{ 0xe17d701, "comedi_alloc_devpriv" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "comedi");


MODULE_INFO(srcversion, "3A560140ACD5E842FDC4574");
