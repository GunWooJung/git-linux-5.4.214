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
	{ 0x2d3385d3, "system_wq" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x765395c3, "param_ops_int" },
	{ 0x754d539c, "strlen" },
	{ 0x151f4898, "schedule_timeout_uninterruptible" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xddb02d73, "snd_info_create_card_entry" },
	{ 0x20000329, "simple_strtoul" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x58f84c2d, "seq_printf" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x68a41536, "param_ops_bool" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x9e913c1, "snd_pcm_alt_chmaps" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x86647f2c, "_snd_ctl_add_slave" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xaed06536, "_dev_warn" },
	{ 0x99f86ed6, "snd_device_new" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0xdeeb6e3e, "device_register" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xe7b00dfb, "__x86_indirect_thunk_r13" },
	{ 0x161dfeca, "ac97_bus_type" },
	{ 0xb0de39d3, "pci_read_config_word" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xce8b1878, "__x86_indirect_thunk_r14" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xa9fef4ad, "snd_ctl_boolean_mono_info" },
	{ 0x81b69e41, "snd_ctl_enum_info" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x2c6e5e2c, "snd_pcm_hw_rule_add" },
	{ 0x8bd0ede9, "snd_ctl_make_virtual_master" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xa916b694, "strnlen" },
	{ 0xddb9b8ac, "snd_component_add" },
	{ 0x4e1b99f, "snd_pcm_std_chmaps" },
	{ 0xdd7f92a6, "snd_ctl_remove_id" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x4d16dbe5, "snd_ctl_new1" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x2078a99d, "snd_ctl_find_id" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x4cda566, "snd_interval_refine" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x25522ab1, "snd_info_free_entry" },
	{ 0xf05c7b8, "__x86_indirect_thunk_r15" },
	{ 0x5a4e4713, "device_unregister" },
	{ 0xff94b8b9, "snd_ctl_add" },
	{ 0xdb2d5c16, "dev_set_name" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xe914e41e, "strcpy" },
};

MODULE_INFO(depends, "snd,snd-pcm,ac97_bus");


MODULE_INFO(srcversion, "522360E9B9D171E612B8CA8");
