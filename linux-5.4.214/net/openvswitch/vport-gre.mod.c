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
	{ 0xba505b9b, "dev_queue_xmit" },
	{ 0x34b22896, "ovs_netdev_tunnel_destroy" },
	{ 0x322e704c, "ovs_vport_ops_unregister" },
	{ 0x8c7d1bdd, "__ovs_vport_ops_register" },
	{ 0xc99e8620, "ovs_vport_free" },
	{ 0x346f8500, "rtnl_delete_link" },
	{ 0xb3ff84b4, "ovs_netdev_link" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xd5092be3, "dev_change_flags" },
	{ 0x7611c379, "gretap_fb_dev_create" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x9b18271e, "ovs_vport_alloc" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "openvswitch,ip_gre");


MODULE_INFO(srcversion, "979C4C01C29D396CAADEF2A");
