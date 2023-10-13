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
	{ 0xeb233a45, "__kmalloc" },
	{ 0x339a5a9a, "pci_free_irq_vectors" },
	{ 0x7f3966fa, "debugfs_create_dir" },
	{ 0x27dd129b, "pcim_enable_device" },
	{ 0x7ee415d5, "single_open" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x4117e0fc, "pcim_iomap_table" },
	{ 0x8ce08cc0, "single_release" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x58f84c2d, "seq_printf" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xd0a46a6a, "debugfs_create_file" },
	{ 0x5b1c5c13, "debugfs_remove_recursive" },
	{ 0x21ba44a5, "seq_read" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0xabaae129, "kthread_create_on_node" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xbf27fdc4, "pci_alloc_irq_vectors_affinity" },
	{ 0xd4835ef8, "dmi_check_system" },
	{ 0xaed06536, "_dev_warn" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0xaf7d0f48, "current_task" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xc5850110, "printk" },
	{ 0x85e73dd7, "kthread_stop" },
	{ 0x1e6d26a8, "strstr" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x868784cb, "__symbol_get" },
	{ 0x5f130ba8, "pcim_iomap_regions" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x1000e51, "schedule" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xab37f21b, "wake_up_process" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x8b95e7b, "pci_unregister_driver" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x226f7074, "pci_irq_vector" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0xda2b5d09, "seq_lseek" },
	{ 0x54496b4, "schedule_timeout_interruptible" },
	{ 0x37a0cba, "kfree" },
	{ 0xf354855a, "__pci_register_driver" },
	{ 0x6e9dd606, "__symbol_put" },
	{ 0x294b9ea1, "on_each_cpu" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0xf1e98c74, "avenrun" },
	{ 0xc1514a3b, "free_irq" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00008086d00003B32sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "B2F528D03ED542C31BFB1F2");
