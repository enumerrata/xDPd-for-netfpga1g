#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x9a31bb74, "module_layout" },
	{ 0x1fedf0f4, "__request_region" },
	{ 0x5cd9dbb5, "kmalloc_caches" },
	{ 0x914f8347, "pci_bus_read_config_byte" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0x15692c87, "param_ops_int" },
	{ 0x69a358a6, "iomem_resource" },
	{ 0x7170092f, "skb_pad" },
	{ 0xb3be75f6, "dev_set_drvdata" },
	{ 0xe7ae0ca3, "dma_set_mask" },
	{ 0x86db9a2d, "pci_disable_device" },
	{ 0x68b3dcbc, "netif_carrier_on" },
	{ 0xf22449ae, "down_interruptible" },
	{ 0xd54f2103, "netif_carrier_off" },
	{ 0x7d11c268, "jiffies" },
	{ 0x7a00547, "__netdev_alloc_skb" },
	{ 0xfacf2d1b, "netif_rx" },
	{ 0x4f8b5ddb, "_copy_to_user" },
	{ 0xd9acbbd9, "pci_set_master" },
	{ 0x8f64aa4, "_raw_spin_unlock_irqrestore" },
	{ 0x27e1a049, "printk" },
	{ 0xce1c9a3e, "ethtool_op_get_link" },
	{ 0xc3fb7d5d, "free_netdev" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xe85f172e, "register_netdev" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x2072ee9b, "request_threaded_irq" },
	{ 0xe67bab80, "dev_kfree_skb_irq" },
	{ 0x42c8de35, "ioremap_nocache" },
	{ 0x8f7af24a, "alloc_netdev_mqs" },
	{ 0x87ce1f99, "eth_type_trans" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x7c61340c, "__release_region" },
	{ 0xf55bb238, "pci_unregister_driver" },
	{ 0x9a1b3285, "ether_setup" },
	{ 0xd61adcbd, "kmem_cache_alloc_trace" },
	{ 0x9327f5ce, "_raw_spin_lock_irqsave" },
	{ 0xe52947e7, "__phys_addr" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x6128b5fc, "__printk_ratelimit" },
	{ 0xedc03953, "iounmap" },
	{ 0x71e3cecb, "up" },
	{ 0xaba33759, "__pci_register_driver" },
	{ 0xd9d35cd9, "unregister_netdev" },
	{ 0xd20f7b8c, "__netif_schedule" },
	{ 0xd90a5a99, "consume_skb" },
	{ 0x436c2179, "iowrite32" },
	{ 0x11f2fca, "skb_put" },
	{ 0xace5f3c3, "pci_enable_device" },
	{ 0x4f6b400b, "_copy_from_user" },
	{ 0x10519fe3, "dev_get_drvdata" },
	{ 0xc6849b4a, "dma_ops" },
	{ 0xe484e35f, "ioread32" },
	{ 0xf20dabd8, "free_irq" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("pci:v0000FEEDd00000001sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "8E9391D3AC606401CB26571");
