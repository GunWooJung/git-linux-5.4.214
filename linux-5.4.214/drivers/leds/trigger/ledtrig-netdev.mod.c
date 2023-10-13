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
	{ 0x7674137c, "led_trigger_unregister" },
	{ 0x7d80062c, "led_trigger_register" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x5098caed, "dev_get_by_name" },
	{ 0x721c9d1f, "init_net" },
	{ 0x69acdf38, "memcpy" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x60a10dcb, "led_set_brightness" },
	{ 0xd0d06def, "led_blink_set_oneshot" },
	{ 0xc8223117, "led_stop_software_blink" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x177cfc88, "dev_get_stats" },
	{ 0x37a0cba, "kfree" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "1C44EC413586473C4054D4D");
