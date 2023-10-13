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
	{ 0x68a41536, "param_ops_bool" },
	{ 0x1cd6f316, "param_ops_uint" },
	{ 0x8ce08cc0, "single_release" },
	{ 0x21ba44a5, "seq_read" },
	{ 0xda2b5d09, "seq_lseek" },
	{ 0xcbaa4b74, "remove_proc_entry" },
	{ 0xd3f5b56e, "hwmon_device_unregister" },
	{ 0x960650ec, "proc_create" },
	{ 0x4c4b17c2, "hwmon_device_register_with_groups" },
	{ 0x50877b9, "dmi_first_match" },
	{ 0x81e6b37f, "dmi_get_system_info" },
	{ 0xc5850110, "printk" },
	{ 0xd4835ef8, "dmi_check_system" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x69acdf38, "memcpy" },
	{ 0xa916b694, "strnlen" },
	{ 0xc6cbbc89, "capable" },
	{ 0x58f84c2d, "seq_printf" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x7ee415d5, "single_open" },
	{ 0xf9a482f9, "msleep" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x18fb2caf, "cpus_read_unlock" },
	{ 0x267df662, "smp_call_on_cpu" },
	{ 0xa04f945a, "cpus_read_lock" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("dmi*:svn*DellComputer*:pn*Inspiron*:");
MODULE_ALIAS("dmi*:svn*DellComputer*:pn*Latitude*:");
MODULE_ALIAS("dmi*:svn*DellInc.*:pn*Inspiron*:");
MODULE_ALIAS("dmi*:svn*DellInc.*:pn*LatitudeD520*:");
MODULE_ALIAS("dmi*:svn*DellInc.*:pn*Latitude*:");
MODULE_ALIAS("dmi*:svn*DellInc.*:pn*MM061*:");
MODULE_ALIAS("dmi*:svn*DellInc.*:pn*MP061*:");
MODULE_ALIAS("dmi*:svn*DellInc.*:pn*PrecisionWorkStation490*:");
MODULE_ALIAS("dmi*:svn*DellInc.*:pn*Precision*:");
MODULE_ALIAS("dmi*:svn*DellInc.*:pn*Vostro*:");
MODULE_ALIAS("dmi*:svn*DellInc.*:pn*XPSL421X*:");
MODULE_ALIAS("dmi*:svn*DellInc.*:pn*Studio*:");
MODULE_ALIAS("dmi*:svn*DellInc.*:pn*XPS13*:");
MODULE_ALIAS("dmi*:svn*DellInc.*:pn*MXC051*:");
MODULE_ALIAS("dmi*:svn*DellInc.*:pn*XPS159560*:");
MODULE_ALIAS("dmi*:svn*DellInc.*:pn*XPS159570*:");

MODULE_INFO(srcversion, "018112341165323D67EC513");
