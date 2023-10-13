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
	{ 0x6be0d38b, "unregister_sysctl_table" },
	{ 0xf97d7de2, "register_sysctl_table" },
	{ 0xc5850110, "printk" },
	{ 0x19c0b2e1, "input_open_device" },
	{ 0xa2dc9732, "input_register_handle" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x66c54ff1, "input_event" },
	{ 0x4e97c8d9, "input_free_device" },
	{ 0xcf5b83fd, "input_register_handler" },
	{ 0x94a09154, "input_register_device" },
	{ 0x4f55cb4, "input_allocate_device" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xa8181adf, "proc_dointvec" },
	{ 0xbdff3e7d, "mutex_lock_killable" },
	{ 0x2ab40469, "input_unregister_device" },
	{ 0x7d1d66c6, "input_unregister_handler" },
	{ 0x37a0cba, "kfree" },
	{ 0x88b37d53, "input_unregister_handle" },
	{ 0x6c5bc42e, "input_close_device" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("input:b*v*p*e*-e*1,*k*r*a*m*l*s*f*w*");

MODULE_INFO(srcversion, "3A15AB8478A81CD9BD77B3D");
