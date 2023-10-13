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
	{ 0x580796e, "unregister_virtio_driver" },
	{ 0xba3f45f1, "register_virtio_driver" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xe7a02573, "ida_alloc_range" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xb605aeff, "hwrng_unregister" },
	{ 0x37a0cba, "kfree" },
	{ 0xffb7c514, "ida_free" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x49ebd2, "virtqueue_kick" },
	{ 0x4a62a2a0, "virtqueue_add_inbuf" },
	{ 0xb320cc0e, "sg_init_one" },
	{ 0xa096b889, "wait_for_completion_killable" },
	{ 0x29361773, "complete" },
	{ 0x577e0270, "virtqueue_get_buf" },
	{ 0x6cfb19d0, "hwrng_register" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("virtio:d00000004v*");

MODULE_INFO(srcversion, "9937477C709CCFAA2B40A2B");
