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
	{ 0x190aaef4, "serio_unregister_driver" },
	{ 0x6f04f2b0, "__serio_register_driver" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xcf34bf15, "iforce_init_device" },
	{ 0xdab91ed4, "serio_open" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x728fc18d, "iforce_process_packet" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xfef83627, "iforce_send_packet" },
	{ 0x37a0cba, "kfree" },
	{ 0xa80e6ce6, "serio_close" },
	{ 0x2ab40469, "input_unregister_device" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "iforce");

MODULE_ALIAS("serio:ty02pr1Did*ex*");

MODULE_INFO(srcversion, "7DF7F4EC5E45D206576E592");
