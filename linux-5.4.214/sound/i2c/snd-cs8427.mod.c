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
	{ 0x151f4898, "schedule_timeout_uninterruptible" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x195717b2, "snd_i2c_device_create" },
	{ 0xe41d3373, "snd_i2c_sendbytes" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc5850110, "printk" },
	{ 0x904b4af4, "snd_ctl_notify" },
	{ 0x834d72b3, "snd_i2c_device_free" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x78041b8f, "byte_rev_table" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x774a8979, "snd_i2c_readbytes" },
	{ 0x4d16dbe5, "snd_ctl_new1" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0xff94b8b9, "snd_ctl_add" },
};

MODULE_INFO(depends, "snd-i2c,snd");


MODULE_INFO(srcversion, "B3AEF8F791FEBF3FFADD132");
