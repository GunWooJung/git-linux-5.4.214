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
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xa4ac9b92, "hci_register_dev" },
	{ 0x56601480, "hci_recv_frame" },
	{ 0xc1716c35, "hci_unregister_dev" },
	{ 0x564c202f, "skb_realloc_headroom" },
	{ 0xbe92ed72, "skb_trim" },
	{ 0x7b8c32f1, "bt_err" },
	{ 0x120103ea, "__netdev_alloc_skb" },
	{ 0x64f9650a, "hci_alloc_dev" },
	{ 0xd523d85d, "skb_push" },
	{ 0xbed6138e, "skb_pull" },
	{ 0xd8e6cdd2, "kfree_skb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0xb0e602eb, "memmove" },
	{ 0x8e8b23c5, "hci_free_dev" },
	{ 0xf89bc02c, "skb_put" },
};

MODULE_INFO(depends, "bluetooth");


MODULE_INFO(srcversion, "7F6D30AB7271586419B7871");
