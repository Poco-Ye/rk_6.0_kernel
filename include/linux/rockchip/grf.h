#ifndef __MACH_ROCKCHIP_GRF_H
#define __MACH_ROCKCHIP_GRF_H

#define RK3188_GRF_GPIO0L_DIR           0x0000
#define RK3188_GRF_GPIO0H_DIR           0x0004
#define RK3188_GRF_GPIO1L_DIR           0x0008
#define RK3188_GRF_GPIO1H_DIR           0x000c
#define RK3188_GRF_GPIO2L_DIR           0x0010
#define RK3188_GRF_GPIO2H_DIR           0x0014
#define RK3188_GRF_GPIO3L_DIR           0x0018
#define RK3188_GRF_GPIO3H_DIR           0x001c
#define RK3188_GRF_GPIO0L_DO            0x0020
#define RK3188_GRF_GPIO0H_DO            0x0024
#define RK3188_GRF_GPIO1L_DO            0x0028
#define RK3188_GRF_GPIO1H_DO            0x002c
#define RK3188_GRF_GPIO2L_DO            0x0030
#define RK3188_GRF_GPIO2H_DO            0x0034
#define RK3188_GRF_GPIO3L_DO            0x0038
#define RK3188_GRF_GPIO3H_DO            0x003c
#define RK3188_GRF_GPIO0L_EN            0x0040
#define RK3188_GRF_GPIO0H_EN            0x0044
#define RK3188_GRF_GPIO1L_EN            0x0048
#define RK3188_GRF_GPIO1H_EN            0x004c
#define RK3188_GRF_GPIO2L_EN            0x0050
#define RK3188_GRF_GPIO2H_EN            0x0054
#define RK3188_GRF_GPIO3L_EN            0x0058
#define RK3188_GRF_GPIO3H_EN            0x005c

#define RK3188_GRF_GPIO0C_IOMUX         0x0068
#define RK3188_GRF_GPIO0D_IOMUX         0x006c
#define RK3188_GRF_GPIO1A_IOMUX         0x0070
#define RK3188_GRF_GPIO1B_IOMUX         0x0074
#define RK3188_GRF_GPIO1C_IOMUX         0x0078
#define RK3188_GRF_GPIO1D_IOMUX         0x007c
#define RK3188_GRF_GPIO2A_IOMUX         0x0080
#define RK3188_GRF_GPIO2B_IOMUX         0x0084
#define RK3188_GRF_GPIO2C_IOMUX         0x0088
#define RK3188_GRF_GPIO2D_IOMUX         0x008c
#define RK3188_GRF_GPIO3A_IOMUX         0x0090
#define RK3188_GRF_GPIO3B_IOMUX         0x0094
#define RK3188_GRF_GPIO3C_IOMUX         0x0098
#define RK3188_GRF_GPIO3D_IOMUX         0x009c
#define RK3188_GRF_SOC_CON0             0x00a0
#define RK3188_GRF_SOC_CON1             0x00a4
#define RK3188_GRF_SOC_CON2             0x00a8
#define RK3188_GRF_SOC_STATUS0          0x00ac
#define RK3188_GRF_DMAC1_CON0           0x00b0
#define RK3188_GRF_DMAC1_CON1           0x00b4
#define RK3188_GRF_DMAC1_CON2           0x00b8
#define RK3188_GRF_DMAC2_CON0           0x00bc
#define RK3188_GRF_DMAC2_CON1           0x00c0
#define RK3188_GRF_DMAC2_CON2           0x00c4
#define RK3188_GRF_DMAC2_CON3           0x00c8
#define RK3188_GRF_CPU_CON0             0x00cc
#define RK3188_GRF_CPU_CON1             0x00d0
#define RK3188_GRF_CPU_CON2             0x00d4
#define RK3188_GRF_CPU_CON3             0x00d8
#define RK3188_GRF_CPU_CON4             0x00dc
#define RK3188_GRF_CPU_CON5             0x00e0

#define RK3188_GRF_DDRC_CON0            0x00ec
#define RK3188_GRF_DDRC_STAT            0x00f0
#define RK3188_GRF_IO_CON0              0x00f4
#define RK3188_GRF_IO_CON1              0x00f8
#define RK3188_GRF_IO_CON2              0x00fc
#define RK3188_GRF_IO_CON3              0x0100
#define RK3188_GRF_IO_CON4              0x0104
#define RK3188_GRF_SOC_STATUS1          0x0108
#define RK3188_GRF_UOC0_CON0            0x010c
#define RK3188_GRF_UOC0_CON1            0x0110
#define RK3188_GRF_UOC0_CON2            0x0114
#define RK3188_GRF_UOC0_CON3            0x0118
#define RK3188_GRF_UOC1_CON0            0x011c
#define RK3188_GRF_UOC1_CON1            0x0120
#define RK3188_GRF_UOC1_CON2            0x0124
#define RK3188_GRF_UOC1_CON3            0x0128
#define RK3188_GRF_UOC2_CON0            0x012c
#define RK3188_GRF_UOC2_CON1            0x0130

#define RK3188_GRF_UOC3_CON0            0x0138
#define RK3188_GRF_UOC3_CON1            0x013c
#define RK3188_GRF_EHCI_STAT            0x0140
#define RK3188_GRF_OS_REG0              0x0144
#define RK3188_GRF_OS_REG1              0x0148
#define RK3188_GRF_OS_REG2              0x014c
#define RK3188_GRF_OS_REG3              0x0150
#define RK3188_GRF_OS_REG4              0x0154
#define RK3188_GRF_OS_REG5              0x0158
#define RK3188_GRF_OS_REG6              0x015c
#define RK3188_GRF_OS_REG7              0x0160
#define RK3188_GRF_GPIO0B_PULL          0x0164
#define RK3188_GRF_GPIO0C_PULL          0x0168
#define RK3188_GRF_GPIO0D_PULL          0x016c
#define RK3188_GRF_GPIO1A_PULL          0x0170
#define RK3188_GRF_GPIO1B_PULL          0x0174
#define RK3188_GRF_GPIO1C_PULL          0x0178
#define RK3188_GRF_GPIO1D_PULL          0x017c
#define RK3188_GRF_GPIO2A_PULL          0x0180
#define RK3188_GRF_GPIO2B_PULL          0x0184
#define RK3188_GRF_GPIO2C_PULL          0x0188
#define RK3188_GRF_GPIO2D_PULL          0x018c
#define RK3188_GRF_GPIO3A_PULL          0x0190
#define RK3188_GRF_GPIO3B_PULL          0x0194
#define RK3188_GRF_GPIO3C_PULL          0x0198
#define RK3188_GRF_GPIO3D_PULL          0x019c
#define RK3188_GRF_FLASH_DATA_PULL      0x01a0
#define RK3188_GRF_FLASH_CMD_PULL       0x01a4


#define RK3288_GRF_GPIO0_A_IOMUX	0x0084
#define RK3288_GRF_GPIO0_B_IOMUX	0x0088
#define RK3288_GRF_GPIO0_C_IOMUX	0x008c

#define RK3288_GRF_GPIO1D_IOMUX         0x000c
#define RK3288_GRF_GPIO2A_IOMUX         0x0010
#define RK3288_GRF_GPIO2B_IOMUX         0x0014
#define RK3288_GRF_GPIO2C_IOMUX         0x0018

#define RK3288_GRF_GPIO3A_IOMUX         0x0020
#define RK3288_GRF_GPIO3B_IOMUX         0x0024
#define RK3288_GRF_GPIO3C_IOMUX         0x0028
#define RK3288_GRF_GPIO3DL_IOMUX        0x002c
#define RK3288_GRF_GPIO3DH_IOMUX        0x0030
#define RK3288_GRF_GPIO4AL_IOMUX        0x0034
#define RK3288_GRF_GPIO4AH_IOMUX        0x0038
#define RK3288_GRF_GPIO4BL_IOMUX        0x003c

#define RK3288_GRF_GPIO4C_IOMUX         0x0044
#define RK3288_GRF_GPIO4D_IOMUX         0x0048

#define RK3288_GRF_GPIO5B_IOMUX         0x0050
#define RK3288_GRF_GPIO5C_IOMUX         0x0054

#define RK3288_GRF_GPIO6A_IOMUX         0x005c
#define RK3288_GRF_GPIO6B_IOMUX         0x0060
#define RK3288_GRF_GPIO6C_IOMUX         0x0064

#define RK3288_GRF_GPIO7A_IOMUX         0x006c
#define RK3288_GRF_GPIO7B_IOMUX         0x0070
#define RK3288_GRF_GPIO7CL_IOMUX        0x0074
#define RK3288_GRF_GPIO7CH_IOMUX        0x0078

#define RK3288_GRF_GPIO8A_IOMUX         0x0080
#define RK3288_GRF_GPIO8B_IOMUX         0x0084

#define RK3288_GRF_GPIO1H_SR            0x0104
#define RK3288_GRF_GPIO2L_SR            0x0108
#define RK3288_GRF_GPIO2H_SR            0x010c
#define RK3288_GRF_GPIO3L_SR            0x0110
#define RK3288_GRF_GPIO3H_SR            0x0114
#define RK3288_GRF_GPIO4L_SR            0x0118
#define RK3288_GRF_GPIO4H_SR            0x011c
#define RK3288_GRF_GPIO5L_SR            0x0120
#define RK3288_GRF_GPIO5H_SR            0x0124
#define RK3288_GRF_GPIO6L_SR            0x0128
#define RK3288_GRF_GPIO6H_SR            0x012c
#define RK3288_GRF_GPIO7L_SR            0x0130
#define RK3288_GRF_GPIO7H_SR            0x0134
#define RK3288_GRF_GPIO8L_SR            0x0138

#define RK3288_GRF_GPIO1D_P             0x014c
#define RK3288_GRF_GPIO2A_P             0x0150
#define RK3288_GRF_GPIO2B_P             0x0154
#define RK3288_GRF_GPIO2C_P             0x0158

#define RK3288_GRF_GPIO3A_P             0x0160
#define RK3288_GRF_GPIO3B_P             0x0164
#define RK3288_GRF_GPIO3C_P             0x0168
#define RK3288_GRF_GPIO3D_P             0x016c
#define RK3288_GRF_GPIO4A_P             0x0170
#define RK3288_GRF_GPIO4B_P             0x0174
#define RK3288_GRF_GPIO4C_P             0x0178
#define RK3288_GRF_GPIO4D_P             0x017c

#define RK3288_GRF_GPIO5B_P             0x0184
#define RK3288_GRF_GPIO5C_P             0x0188

#define RK3288_GRF_GPIO6A_P             0x0190
#define RK3288_GRF_GPIO6B_P             0x0194
#define RK3288_GRF_GPIO6C_P             0x0198

#define RK3288_GRF_GPIO7A_P             0x01a0
#define RK3288_GRF_GPIO7B_P             0x01a4
#define RK3288_GRF_GPIO7C_P             0x01a8

#define RK3288_GRF_GPIO8A_P             0x01b0
#define RK3288_GRF_GPIO8B_P             0x01b4

#define RK3288_GRF_GPIO1D_E             0x01cc
#define RK3288_GRF_GPIO2A_E             0x01d0
#define RK3288_GRF_GPIO2B_E             0x01d4
#define RK3288_GRF_GPIO2C_E             0x01d8

#define RK3288_GRF_GPIO3A_E             0x01e0
#define RK3288_GRF_GPIO3B_E             0x01e4
#define RK3288_GRF_GPIO3C_E             0x01e8
#define RK3288_GRF_GPIO3D_E             0x01ec
#define RK3288_GRF_GPIO4A_E             0x01f0
#define RK3288_GRF_GPIO4B_E             0x01f4
#define RK3288_GRF_GPIO4C_E             0x01f8
#define RK3288_GRF_GPIO4D_E             0x01fc

#define RK3288_GRF_GPIO5B_E             0x0204
#define RK3288_GRF_GPIO5C_E             0x0208

#define RK3288_GRF_GPIO6A_E             0x0210
#define RK3288_GRF_GPIO6B_E             0x0214
#define RK3288_GRF_GPIO6C_E             0x0218

#define RK3288_GRF_GPIO7A_E             0x0220
#define RK3288_GRF_GPIO7B_E             0x0224
#define RK3288_GRF_GPIO7C_E             0x0228

#define RK3288_GRF_GPIO8A_E             0x0230
#define RK3288_GRF_GPIO8B_E             0x0234

#define RK3288_GRF_GPIO_SMT             0x0240
#define RK3288_GRF_SOC_CON0             0x0244
#define RK3288_GRF_SOC_CON1             0x0248
#define RK3288_GRF_SOC_CON2             0x024c
#define RK3288_GRF_SOC_CON3             0x0250
#define RK3288_GRF_SOC_CON4             0x0254
#define RK3288_GRF_SOC_CON5             0x0258
#define RK3288_GRF_SOC_CON6             0x025c
#define RK3288_GRF_SOC_CON7             0x0260
#define RK3288_GRF_SOC_CON8             0x0264
#define RK3288_GRF_SOC_CON9             0x0268
#define RK3288_GRF_SOC_CON10            0x026c
#define RK3288_GRF_SOC_CON11            0x0270
#define RK3288_GRF_SOC_CON12            0x0274
#define RK3288_GRF_SOC_CON13            0x0278
#define RK3288_GRF_SOC_CON14            0x027c
#define RK3288_GRF_SOC_STATUS0          0x0280
#define RK3288_GRF_SOC_STATUS1          0x0284
#define RK3288_GRF_SOC_STATUS2          0x0288
#define RK3288_GRF_SOC_STATUS3          0x028c
#define RK3288_GRF_SOC_STATUS4          0x0290
#define RK3288_GRF_SOC_STATUS5          0x0294
#define RK3288_GRF_SOC_STATUS6          0x0298
#define RK3288_GRF_SOC_STATUS7          0x029c
#define RK3288_GRF_SOC_STATUS8          0x02a0
#define RK3288_GRF_SOC_STATUS9          0x02a4
#define RK3288_GRF_SOC_STATUS10         0x02a8
#define RK3288_GRF_SOC_STATUS11         0x02ac
#define RK3288_GRF_SOC_STATUS12         0x02b0
#define RK3288_GRF_SOC_STATUS13         0x02b4
#define RK3288_GRF_SOC_STATUS14         0x02b8
#define RK3288_GRF_SOC_STATUS15         0x02bc
#define RK3288_GRF_SOC_STATUS16         0x02c0
#define RK3288_GRF_SOC_STATUS17         0x02c4
#define RK3288_GRF_SOC_STATUS18         0x02c8
#define RK3288_GRF_SOC_STATUS19         0x02cc
#define RK3288_GRF_SOC_STATUS20         0x02d0
#define RK3288_GRF_SOC_STATUS21         0x02d4

#define RK3288_GRF_PERIDMAC_CON0        0x02e0
#define RK3288_GRF_PERIDMAC_CON1        0x02e4
#define RK3288_GRF_PERIDMAC_CON2        0x02e8
#define RK3288_GRF_PERIDMAC_CON3        0x02ec
#define RK3288_GRF_DDRC0_CON0           0x02f0
#define RK3288_GRF_DDRC1_CON0           0x02f4
#define RK3288_GRF_CPU_CON0             0x02f8
#define RK3288_GRF_CPU_CON1             0x02fc
#define RK3288_GRF_CPU_CON2             0x0300
#define RK3288_GRF_CPU_CON3             0x0304
#define RK3288_GRF_CPU_CON4             0x0308

#define RK3288_GRF_CPU_STATUS0          0x0318

#define RK3288_GRF_UOC0_CON0            0x0320
#define RK3288_GRF_UOC0_CON1            0x0324
#define RK3288_GRF_UOC0_CON2            0x0328
#define RK3288_GRF_UOC0_CON3            0x032c
#define RK3288_GRF_UOC0_CON4            0x0330
#define RK3288_GRF_UOC1_CON0            0x0334
#define RK3288_GRF_UOC1_CON1            0x0338
#define RK3288_GRF_UOC1_CON2            0x033c
#define RK3288_GRF_UOC1_CON3            0x0340
#define RK3288_GRF_UOC1_CON4            0x0344
#define RK3288_GRF_UOC2_CON0            0x0348
#define RK3288_GRF_UOC2_CON1            0x034c
#define RK3288_GRF_UOC2_CON2            0x0350
#define RK3288_GRF_UOC2_CON3            0x0354
#define RK3288_GRF_UOC3_CON0            0x0358
#define RK3288_GRF_UOC3_CON1            0x035c
#define RK3288_GRF_UOC4_CON0            0x0360
#define RK3288_GRF_UOC4_CON1            0x0364
#define RK3288_GRF_PVTM_CON0            0x0368
#define RK3288_GRF_PVTM_CON1            0x036c
#define RK3288_GRF_PVTM_CON2            0x0370
#define RK3288_GRF_PVTM_STATUS0         0x0374
#define RK3288_GRF_PVTM_STATUS1         0x0378
#define RK3288_GRF_PVTM_STATUS2         0x037c
#define RK3288_GRF_IO_VSEL              0x0380
#define RK3288_GRF_SARADC_TESTBIT       0x0384
#define RK3288_GRF_TSADC_TESTBIT_L      0x0388
#define RK3288_GRF_TSADC_TESTBIT_H      0x038c
#define RK3288_GRF_OS_REG0              0x0390
#define RK3288_GRF_OS_REG1              0x0394
#define RK3288_GRF_OS_REG2              0x0398
#define RK3288_GRF_OS_REG3              0x039c

#define RK3288_GRF_SOC_CON15            0x03a4
#define RK3288_GRF_SOC_CON16            0x03a8

#define RK3288_SGRF_SOC_CON0            0x0000
#define RK3288_SGRF_SOC_CON1            0x0004
#define RK3288_SGRF_SOC_CON2            0x0008
#define RK3288_SGRF_SOC_CON3            0x000c
#define RK3288_SGRF_SOC_CON4            0x0010
#define RK3288_SGRF_SOC_CON5            0x0014

#define RK3288_SGRF_BUSDMAC_CON0        0x0020
#define RK3288_SGRF_BUSDMAC_CON1        0x0024

#define RK3288_SGRF_CPU_CON0            0x0040
#define RK3288_SGRF_CPU_CON1            0x0044
#define RK3288_SGRF_CPU_CON2            0x0048

#define RK3288_SGRF_SOC_CON6            0x0050
#define RK3288_SGRF_SOC_CON7            0x0054
#define RK3288_SGRF_SOC_CON8            0x0058
#define RK3288_SGRF_SOC_CON9            0x005c
#define RK3288_SGRF_SOC_CON10           0x0060
#define RK3288_SGRF_SOC_CON11           0x0064
#define RK3288_SGRF_SOC_CON12           0x0068
#define RK3288_SGRF_SOC_CON13           0x006c
#define RK3288_SGRF_SOC_CON14           0x0070
#define RK3288_SGRF_SOC_CON15           0x0074
#define RK3288_SGRF_SOC_CON16           0x0078
#define RK3288_SGRF_SOC_CON17           0x007c
#define RK3288_SGRF_SOC_CON18           0x0080
#define RK3288_SGRF_SOC_CON19           0x0084
#define RK3288_SGRF_SOC_CON20           0x0088
#define RK3288_SGRF_SOC_CON21           0x008c

#define RK3288_SGRF_SOC_STATUS0         0x0100
#define RK3288_SGRF_SOC_STATUS1         0x0104

#define RK3288_SGRF_FAST_BOOT_ADDR      0x0120


#define RK3036_GRF_GPIO0A_IOMUX         0x000a8
#define RK3036_GRF_GPIO0B_IOMUX         0x000ac
#define RK3036_GRF_GPIO0C_IOMUX         0x000b0
#define RK3036_GRF_GPIO0D_IOMUX         0x000b4
#define RK3036_GRF_GPIO1A_IOMUX         0x000b8
#define RK3036_GRF_GPIO1B_IOMUX         0x000bc
#define RK3036_GRF_GPIO1C_IOMUX         0x000c0
#define RK3036_GRF_GPIO1D_IOMUX         0x000c4
#define RK3036_GRF_GPIO2A_IOMUX         0x000c8
#define RK3036_GRF_GPIO2B_IOMUX         0x000cc
#define RK3036_GRF_GPIO2C_IOMUX         0x000d0
#define RK3036_GRF_GPIO2D_IOMUX         0x000d4
#define RK3036_GRF_GPIO_DS              0x00100
#define RK3036_GRF_GPIO0L_PULL          0x00118
#define RK3036_GRF_GPIO0H_PULL          0x0011c
#define RK3036_GRF_GPIO1L_PULL          0x00120
#define RK3036_GRF_GPIO1H_PULL          0x00124

#define RK3036_GRF_GPIO2L_PULL 0x00128
#define RK3036_GRF_GPIO2H_PULL 0x0012c
#define RK3036_GRF_SOC_CON0 0x00140
#define RK3036_GRF_SOC_CON1 0x00144
#define RK3036_GRF_SOC_CON2 0x00148
#define RK3036_GRF_SOC_STATUS0 0x0014c
#define RK3036_GRF_SOC_CON3 0x00154
#define RK3036_GRF_DMAC_CON0 0x0015c
#define RK3036_GRF_DMAC_CON1 0x00160
#define RK3036_GRF_DMAC_CON2 0x00164
#define RK3036_GRF_UOC0_CON5 0x0017c
#define RK3036_GRF_UOC1_CON4 0x00190
#define RK3036_GRF_UOC1_CON5 0x00194
#define RK3036_GRF_DDRC_STAT 0x0019c
#define RK3036_GRF_UOC_CON6 0x001a0
#define RK3036_GRF_SOC_STATUS1 0x001a4
#define RK3036_GRF_CPU_CON0 0x001a8
#define RK3036_GRF_CPU_CON1 0x001ac
#define RK3036_GRF_CPU_CON2 0x001b0
#define RK3036_GRF_CPU_CON3 0x001b4
#define RK3036_GRF_CPU_STATUS0 0x001c0
#define RK3036_GRF_CPU_STATUS1 0x001c4
#define RK3036_GRF_OS_REG0 0x001c8
#define RK3036_GRF_OS_REG1 0x001cc
#define RK3036_GRF_OS_REG2 0x001d0
#define RK3036_GRF_OS_REG3 0x001d4
#define RK3036_GRF_OS_REG4 0x001d8
#define RK3036_GRF_OS_REG5 0x001dc
#define RK3036_GRF_OS_REG6 0x001e0
#define RK3036_GRF_OS_REG7 0x001e4
#define RK3036_GRF_DLL_CON0 0x00200
#define RK3036_GRF_DLL_CON1 0x00204
#define RK3036_GRF_DLL_CON2 0x00208
#define RK3036_GRF_DLL_CON3 0x0020c
#define RK3036_GRF_DLL_STATUS0 0x00210
#define RK3036_GRF_DLL_STATUS1 0x00214

#define RK3036_GRF_DLL_STATUS2 0x00218
#define RK3036_GRF_DLL_STATUS3 0x0021c
#define RK3036_GRF_DFI_WRNUM 0x00220
#define RK3036_GRF_DFI_RDNUM 0x00224
#define RK3036_GRF_DFI_ACTNUM 0x00228
#define RK3036_GRF_DFI_TIMERVAL 0x0022c
#define RK3036_GRF_NIF_FIFO0 0x00230
#define RK3036_GRF_NIF_FIFO1 0x00234
#define RK3036_GRF_NIF_FIFO2 0x00238
#define RK3036_GRF_NIF_FIFO3 0x0023c
#define RK3036_GRF_USBPHY0_CON0 0x00280
#define RK3036_GRF_USBPHY0_CON1 0x00284
#define RK3036_GRF_USBPHY0_CON2 0x00288
#define RK3036_GRF_USBPHY0_CON3 0x0028c
#define RK3036_GRF_USBPHY0_CON4 0x00290
#define RK3036_GRF_USBPHY0_CON5 0x00294
#define RK3036_GRF_USBPHY0_CON6 0x00298
#define RK3036_GRF_USBPHY0_CON7 0x0029c
#define RK3036_GRF_USBPHY1_CON0 0x002a0
#define RK3036_GRF_USBPHY1_CON1 0x002a4
#define RK3036_GRF_USBPHY1_CON2 0x002a8
#define RK3036_GRF_USBPHY1_CON3 0x002ac
#define RK3036_GRF_USBPHY1_CON4 0x002b0
#define RK3036_GRF_USBPHY1_CON5 0x002b4
#define RK3036_GRF_USBPHY1_CON6 0x002b8

#define RK3036_GRF_USBPHY1_CON7 0x002bc
#define RK3036_GRF_CHIP_TAG 0x00300
#define RK3036_GRF_SDMMC_DET_CNT 0x00304

#define RK312X_GRF_GPIO0A_IOMUX         0x000a8
#define RK312X_GRF_GPIO0B_IOMUX         0x000ac
#define RK312X_GRF_GPIO0C_IOMUX         0x000b0
#define RK312X_GRF_GPIO0D_IOMUX         0x000b4
#define RK312X_GRF_GPIO1A_IOMUX         0x000b8
#define RK312X_GRF_GPIO1B_IOMUX         0x000bc
#define RK312X_GRF_GPIO1C_IOMUX         0x000c0
#define RK312X_GRF_GPIO1D_IOMUX         0x000c4
#define RK312X_GRF_GPIO2A_IOMUX         0x000c8
#define RK312X_GRF_GPIO2B_IOMUX         0x000cc
#define RK312X_GRF_GPIO2C_IOMUX         0x000d0
#define RK312X_GRF_GPIO2D_IOMUX         0x000d4
#define RK312X_GRF_GPIO3A_IOMUX         0x000d8
#define RK312X_GRF_GPIO3B_IOMUX         0x000dc
#define RK312X_GRF_GPIO3C_IOMUX         0x000e0
#define RK312X_GRF_GPIO3D_IOMUX         0x000e4
#define RK312X_GRF_CIF_IOMUX		0x000ec
#define RK312X_GRF_CIF_IOMUX1 		0x000f0
#define RK312X_GRF_GPIO_DS              0x00100
#define RK312X_GRF_GPIO0L_PULL          0x00118
#define RK312X_GRF_GPIO0H_PULL          0x0011c
#define RK312X_GRF_GPIO1L_PULL          0x00120
#define RK312X_GRF_GPIO1H_PULL          0x00124
#define RK312X_GRF_GPIO2L_PULL          0x00128
#define RK312X_GRF_GPIO2H_PULL          0x0012c
#define RK312X_GRF_GPIO3L_PULL          0x00130
#define RK312X_GRF_GPIO3H_PULL          0x00134
#define RK312X_GRF_ACODEC_CON		0x0013c

#define RK312X_GRF_SOC_CON0 0x00140
#define RK312X_GRF_SOC_CON1 0x00144
#define RK312X_GRF_SOC_CON2 0x00148
#define RK312X_GRF_SOC_STATUS0 0x0014c
#define RK312X_GRF_LVDS_CON0 0x00150
#define RK312X_GRF_SOC_CON3 0x00154
#define RK312X_GRF_DMAC_CON0 0x0015c
#define RK312X_GRF_DMAC_CON1 0x00160
#define RK312X_GRF_DMAC_CON2 0x00164
#define RK312X_GRF_MAC_CON0 0x00168
#define RK312X_GRF_MAC_CON1 0x0016c
#define RK312X_GRF_TVE_CON 0x00170
#define RK312X_GRF_UOC0_CON0 0x0017c
#define RK312X_GRF_UOC1_CON1 0x00184
#define RK312X_GRF_UOC1_CON2 0x00188
#define RK312X_GRF_UOC1_CON3 0x0018c
#define RK312X_GRF_UOC1_CON4 0x00190
#define RK312X_GRF_UOC1_CON5 0x00194
#define RK312X_GRF_DDRC_STAT 0x0019c
#define RK312X_GRF_SOC_STATUS1 0x001a4
#define RK312X_GRF_CPU_CON0 0x001a8
#define RK312X_GRF_CPU_CON1 0x001ac
#define RK312X_GRF_CPU_CON2 0x001b0
#define RK312X_GRF_CPU_CON3 0x001b4
#define RK312X_GRF_CPU_STATUS0 0x001c0
#define RK312X_GRF_CPU_STATUS1 0x001c4
#define RK312X_GRF_OS_REG0 0x001c8
#define RK312X_GRF_OS_REG1 0x001cc
#define RK312X_GRF_OS_REG2 0x001d0
#define RK312X_GRF_OS_REG3 0x001d4
#define RK312X_GRF_OS_REG4 0x001d8
#define RK312X_GRF_OS_REG5 0x001dc
#define RK312X_GRF_OS_REG6 0x001e0
#define RK312X_GRF_OS_REG7 0x001e4
#define RK312X_GRF_PVTM_CON0 0x00200
#define RK312X_GRF_PVTM_CON1 0x00204
#define RK312X_GRF_PVTM_CON2 0x00208
#define RK312X_GRF_PVTM_CON3 0x0020c
#define RK312X_GRF_PVTM_STATUS0 0x00210
#define RK312X_GRF_PVTM_STATUS1 0x00214
#define RK312X_GRF_PVTM_STATUS2 0x00218
#define RK312X_GRF_PVTM_STATUS3 0x0021c
#define RK312X_GRF_DFI_WRNUM 0x00220
#define RK312X_GRF_DFI_RDNUM 0x00224
#define RK312X_GRF_DFI_ACTNUM 0x00228
#define RK312X_GRF_DFI_TIMERVAL 0x0022c
#define RK312X_GRF_NIF_FIFO0 0x00230
#define RK312X_GRF_NIF_FIFO1 0x00234
#define RK312X_GRF_NIF_FIFO2 0x00238
#define RK312X_GRF_NIF_FIFO3 0x0023c
#define RK312X_GRF_USBPHY0_CON0 0x00280
#define RK312X_GRF_USBPHY0_CON1 0x00284
#define RK312X_GRF_USBPHY0_CON2 0x00288
#define RK312X_GRF_USBPHY0_CON3 0x0028c
#define RK312X_GRF_USBPHY0_CON4 0x00290
#define RK312X_GRF_USBPHY0_CON5 0x00294
#define RK312X_GRF_USBPHY0_CON6 0x00298
#define RK312X_GRF_USBPHY0_CON7 0x0029c
#define RK312X_GRF_USBPHY1_CON0 0x002a0
#define RK312X_GRF_USBPHY1_CON1 0x002a4
#define RK312X_GRF_USBPHY1_CON2 0x002a8
#define RK312X_GRF_USBPHY1_CON3 0x002ac
#define RK312X_GRF_USBPHY1_CON4 0x002b0
#define RK312X_GRF_USBPHY1_CON5 0x002b4
#define RK312X_GRF_USBPHY1_CON6 0x002b8
#define RK312X_GRF_USBPHY1_CON7 0x002bc
#define RK312X_GRF_UOC_STATUS0 0x002c0
#define RK312X_GRF_CHIP_TAG 0x00300
#define RK312X_GRF_SDMMC_DET_CNT 0x00304
#define RK312X_GRF_EFUSE_PRG_EN 0x0037c

#define RK322X_GRF_GPIO0A_IOMUX		0x0000
#define RK322X_GRF_GPIO0B_IOMUX		0x0004
#define RK322X_GRF_GPIO0C_IOMUX		0x0008
#define RK322X_GRF_GPIO0D_IOMUX		0x000c
#define RK322X_GRF_GPIO1A_IOMUX		0x0010
#define RK322X_GRF_GPIO1B_IOMUX		0x0014
#define RK322X_GRF_GPIO1C_IOMUX		0x0018
#define RK322X_GRF_GPIO1D_IOMUX		0x001c
#define RK322X_GRF_GPIO2A_IOMUX		0x0020
#define RK322X_GRF_GPIO2B_IOMUX		0x0024
#define RK322X_GRF_GPIO2C_IOMUX		0x0028
#define RK322X_GRF_GPIO2D_IOMUX		0x002c
#define RK322X_GRF_GPIO3A_IOMUX		0x0030
#define RK322X_GRF_GPIO3B_IOMUX		0x0034
#define RK322X_GRF_GPIO3C_IOMUX		0x0038
#define RK322X_GRF_GPIO3D_IOMUX		0x003c
#define RK322X_GRF_COM_IOMUX		0x0050
#define RK322X_GRF_GPIO0A_P		0x0100
#define RK322X_GRF_GPIO0B_P		0x0104
#define RK322X_GRF_GPIO0C_P		0x0108
#define RK322X_GRF_GPIO0D_P		0x010c
#define RK322X_GRF_GPIO1A_P		0x0110
#define RK322X_GRF_GPIO1B_P		0x0114
#define RK322X_GRF_GPIO1C_P		0x0118
#define RK322X_GRF_GPIO1D_P		0x011c
#define RK322X_GRF_GPIO2A_P		0x0120
#define RK322X_GRF_GPIO2B_P		0x0124
#define RK322X_GRF_GPIO2C_P		0x0128
#define RK322X_GRF_GPIO2D_P		0x012c
#define RK322X_GRF_GPIO3A_P		0x0130
#define RK322X_GRF_GPIO3B_P		0x0134
#define RK322X_GRF_GPIO3C_P		0x0138
#define RK322X_GRF_GPIO3D_P		0x013c
#define RK322X_GRF_GPIO0A_E		0x0200
#define RK322X_GRF_GPIO0B_E		0x0204
#define RK322X_GRF_GPIO0C_E		0x0208
#define RK322X_GRF_GPIO0D_E		0x020c
#define RK322X_GRF_GPIO1A_E		0x0210
#define RK322X_GRF_GPIO1B_E		0x0214
#define RK322X_GRF_GPIO1C_E		0x0218
#define RK322X_GRF_GPIO1D_E		0x021c
#define RK322X_GRF_GPIO2A_E		0x0220
#define RK322X_GRF_GPIO2B_E		0x0224
#define RK322X_GRF_GPIO2C_E		0x0228
#define RK322X_GRF_GPIO2D_E		0x022c
#define RK322X_GRF_GPIO3A_E		0x0230
#define RK322X_GRF_GPIO3B_E		0x0234
#define RK322X_GRF_GPIO3C_E		0x0238
#define RK322X_GRF_GPIO3D_E		0x023c
#define RK322X_GRF_GPIO0L_SR		0x0300
#define RK322X_GRF_GPIO0H_SR		0x0304
#define RK322X_GRF_GPIO1L_SR		0x0308
#define RK322X_GRF_GPIO1H_SR		0x030c
#define RK322X_GRF_GPIO2L_SR		0x0310
#define RK322X_GRF_GPIO2H_SR		0x0314
#define RK322X_GRF_GPIO3L_SR		0x0318
#define RK322X_GRF_GPIO3H_SR		0x031c
#define RK322X_GRF_GPIO0L_SMT		0x0380
#define RK322X_GRF_GPIO0H_SMT		0x0384
#define RK322X_GRF_GPIO1L_SMT		0x0388
#define RK322X_GRF_GPIO1H_SMT		0x038c
#define RK322X_GRF_GPIO2L_SMT		0x0390
#define RK322X_GRF_GPIO2H_SMT		0x0394
#define RK322X_GRF_GPIO3L_SMT		0x0398
#define RK322X_GRF_GPIO3H_SMT		0x039c
#define RK322X_GRF_SOC_CON0		0x0400
#define RK322X_GRF_SOC_CON1		0x0404
#define RK322X_GRF_SOC_CON2		0x0408
#define RK322X_GRF_SOC_CON3		0x040c
#define RK322X_GRF_SOC_CON4		0x0410
#define RK322X_GRF_SOC_CON5		0x0414
#define RK322X_GRF_SOC_CON6		0x0418
#define RK322X_GRF_SOC_STATUS0		0x0480
#define RK322X_GRF_SOC_STATUS1		0x0484
#define RK322X_GRF_SOC_STATUS2		0x0488
#define RK322X_GRF_CHIP_ID		0x048c
#define RK322X_GRF_CPU_CON0		0x0500
#define RK322X_GRF_CPU_CON1		0x0504
#define RK322X_GRF_CPU_CON2		0x0508
#define RK322X_GRF_CPU_CON3		0x050c
#define RK322X_GRF_CPU_STATUS0		0x0520
#define RK322X_GRF_CPU_STATUS1		0x0524
#define RK322X_GRF_OS_REG0		0x05c8
#define RK322X_GRF_OS_REG1		0x05cc
#define RK322X_GRF_OS_REG2		0x05d0
#define RK322X_GRF_OS_REG3		0x05d4
#define RK322X_GRF_OS_REG4		0x05d8
#define RK322X_GRF_OS_REG5		0x05dc
#define RK322X_GRF_OS_REG6		0x05e0
#define RK322X_GRF_OS_REG7		0x05e4
#define RK322X_GRF_DDRC_STAT		0x0604
#define RK322X_GRF_SIG_DETECT_CON	0x0680
#define RK322X_GRF_SIG_DETECT_CON1	0x0684
#define RK322X_GRF_SIG_DETECT_STATUS	0x0690
#define RK322X_GRF_SIG_DETECT_STATUS1	0x0694
#define RK322X_GRF_SIG_DETECT_CLR	0x06a0
#define RK322X_GRF_SIG_DETECT_CLR1	0x06a4
#define RK322X_GRF_EMMC_DET		0x06b0
#define RK322X_GRF_HOST0_CON0		0x0700
#define RK322X_GRF_HOST0_CON1		0x0704
#define RK322X_GRF_HOST0_CON2		0x0708
#define RK322X_GRF_HOST1_CON0		0x0710
#define RK322X_GRF_HOST1_CON1		0x0714
#define RK322X_GRF_HOST1_CON2		0x0718
#define RK322X_GRF_HOST2_CON0		0x0720
#define RK322X_GRF_HOST2_CON1		0x0724
#define RK322X_GRF_HOST2_CON2		0x0728
#define RK322X_GRF_USBPHY0_CON0		0x0760
#define RK322X_GRF_USBPHY0_CON1		0x0764
#define RK322X_GRF_USBPHY0_CON2		0x0768
#define RK322X_GRF_USBPHY0_CON3		0x076c
#define RK322X_GRF_USBPHY0_CON4		0x0770
#define RK322X_GRF_USBPHY0_CON5		0x0774
#define RK322X_GRF_USBPHY0_CON6		0x0778
#define RK322X_GRF_USBPHY0_CON7		0x077c
#define RK322X_GRF_USBPHY0_CON8		0x0780
#define RK322X_GRF_USBPHY0_CON9		0x0784
#define RK322X_GRF_USBPHY0_CON10	0x0788
#define RK322X_GRF_USBPHY0_CON11	0x078c
#define RK322X_GRF_USBPHY0_CON12	0x0790
#define RK322X_GRF_USBPHY0_CON13	0x0794
#define RK322X_GRF_USBPHY0_CON14	0x0798
#define RK322X_GRF_USBPHY0_CON15	0x079c
#define RK322X_GRF_USBPHY0_CON16	0x07a0
#define RK322X_GRF_USBPHY0_CON17	0x07a4
#define RK322X_GRF_USBPHY0_CON18	0x07a8
#define RK322X_GRF_USBPHY0_CON19	0x07ac
#define RK322X_GRF_USBPHY0_CON20	0x07b0
#define RK322X_GRF_USBPHY0_CON21	0x07b4
#define RK322X_GRF_USBPHY0_CON22	0x07b8
#define RK322X_GRF_USBPHY0_CON23	0x07bc
#define RK322X_GRF_USBPHY0_CON24	0x07c0
#define RK322X_GRF_USBPHY0_CON25	0x07c4
#define RK322X_GRF_USBPHY0_CON26	0x07c8
#define RK322X_GRF_USBPHY1_CON0		0x0800
#define RK322X_GRF_USBPHY1_CON1		0x0804
#define RK322X_GRF_USBPHY1_CON2		0x0808
#define RK322X_GRF_USBPHY1_CON3		0x080c
#define RK322X_GRF_USBPHY1_CON4		0x0810
#define RK322X_GRF_USBPHY1_CON5		0x0814
#define RK322X_GRF_USBPHY1_CON6		0x0818
#define RK322X_GRF_USBPHY1_CON7		0x081c
#define RK322X_GRF_USBPHY1_CON8		0x0820
#define RK322X_GRF_USBPHY1_CON9		0x0824
#define RK322X_GRF_USBPHY1_CON10	0x0828
#define RK322X_GRF_USBPHY1_CON11	0x082c
#define RK322X_GRF_USBPHY1_CON12	0x0830
#define RK322X_GRF_USBPHY1_CON13	0x0834
#define RK322X_GRF_USBPHY1_CON14	0x0838
#define RK322X_GRF_USBPHY1_CON15	0x083c
#define RK322X_GRF_USBPHY1_CON16	0x0840
#define RK322X_GRF_USBPHY1_CON17	0x0844
#define RK322X_GRF_USBPHY1_CON18	0x0848
#define RK322X_GRF_USBPHY1_CON19	0x084c
#define RK322X_GRF_USBPHY1_CON20	0x0850
#define RK322X_GRF_USBPHY1_CON21	0x0854
#define RK322X_GRF_USBPHY1_CON22	0x0858
#define RK322X_GRF_USBPHY1_CON23	0x085c
#define RK322X_GRF_USBPHY1_CON24	0x0860
#define RK322X_GRF_USBPHY1_CON25	0x0864
#define RK322X_GRF_USBPHY1_CON26	0x0868
#define RK322X_GRF_OTG_CON0		0x0880
#define RK322X_GRF_UOC_CON0		0x0884
#define RK322X_GRF_MAC_CON0		0x0900
#define RK322X_GRF_MAC_CON1		0x0904
#define RK322X_GRF_MACPHY_CON0		0x0b00
#define RK322X_GRF_MACPHY_CON1		0x0b04
#define RK322X_GRF_MACPHY_CON2		0x0b08
#define RK322X_GRF_MACPHY_CON3		0x0b0c
#define RK322X_GRF_MACPHY_STATUS	0x0b10

#define RK1108_GRF_GPIO1A_IOMUX		0X0010
#define RK1108_GRF_GPIO1B_IOMUX		0X0014
#define RK1108_GRF_GPIO1C_IOMUX		0X0018
#define RK1108_GRF_GPIO1D_IOMUX		0X001C
#define RK1108_GRF_GPIO2A_IOMUX		0X0020
#define RK1108_GRF_GPIO2B_IOMUX		0X0024
#define RK1108_GRF_GPIO2C_IOMUX		0X0028
#define RK1108_GRF_GPIO2D_IOMUX		0X002C
#define RK1108_GRF_GPIO3A_IOMUX		0X0030
#define RK1108_GRF_GPIO3B_IOMUX		0X0034
#define RK1108_GRF_GPIO3C_IOMUX		0X0038
#define RK1108_GRF_GPIO3D_IOMUX		0X003C
#define RK1108_GRF_GPIO1A_P		0X0110
#define RK1108_GRF_GPIO1B_P		0X0114
#define RK1108_GRF_GPIO1C_P		0X0118
#define RK1108_GRF_GPIO1D_P		0X011C
#define RK1108_GRF_GPIO2A_P		0X0120
#define RK1108_GRF_GPIO2B_P		0X0124
#define RK1108_GRF_GPIO2C_P		0X0128
#define RK1108_GRF_GPIO2D_P		0X012C
#define RK1108_GRF_GPIO3A_P		0X0130
#define RK1108_GRF_GPIO3B_P		0X0134
#define RK1108_GRF_GPIO3C_P		0X0138
#define RK1108_GRF_GPIO3D_P		0X013C
#define RK1108_GRF_GPIO1A_E		0X0210
#define RK1108_GRF_GPIO1B_E		0X0214
#define RK1108_GRF_GPIO1C_E		0X0218
#define RK1108_GRF_GPIO1D_E		0X021C
#define RK1108_GRF_GPIO2A_E		0X0220
#define RK1108_GRF_GPIO2B_E		0X0224
#define RK1108_GRF_GPIO2C_E		0X0228
#define RK1108_GRF_GPIO2D_E		0X022C
#define RK1108_GRF_GPIO3A_E		0X0230
#define RK1108_GRF_GPIO3B_E		0X0234
#define RK1108_GRF_GPIO3C_E		0X0238
#define RK1108_GRF_GPIO3D_E		0X023C
#define RK1108_GRF_GPIO1L_SR		0X0308
#define RK1108_GRF_GPIO1H_SR		0X030C
#define RK1108_GRF_GPIO2L_SR		0X0310
#define RK1108_GRF_GPIO2H_SR		0X0314
#define RK1108_GRF_GPIO3L_SR		0X0318
#define RK1108_GRF_GPIO3H_SR		0X031C
#define RK1108_GRF_GPIO1L_SMT		0X0388
#define RK1108_GRF_GPIO1H_SMT		0X038C
#define RK1108_GRF_GPIO2L_SMT		0X0390
#define RK1108_GRF_GPIO2H_SMT		0X0394
#define RK1108_GRF_GPIO3L_SMT		0X0398
#define RK1108_GRF_GPIO3H_SMT		0X039C
#define RK1108_GRF_SOC_CON0		0X0400
#define RK1108_GRF_SOC_CON1		0X0404
#define RK1108_GRF_SOC_CON2		0X0408
#define RK1108_GRF_SOC_CON3		0X040C
#define RK1108_GRF_SOC_CON4		0X0410
#define RK1108_GRF_SOC_CON5		0X0414
#define RK1108_GRF_SOC_CON6		0X0418
#define RK1108_GRF_SOC_CON7		0X041C
#define RK1108_GRF_SOC_CON8		0X0420
#define RK1108_GRF_SOC_CON9		0X0424
#define RK1108_GRF_SOC_STATUS0		0X0480
#define RK1108_GRF_SOC_STATUS1		0X0484
#define RK1108_GRF_CPU_CON0		0X0500
#define RK1108_GRF_CPU_CON1		0X0504
#define RK1108_GRF_OS_REG0		0X0580
#define RK1108_GRF_OS_REG1		0X0584
#define RK1108_GRF_OS_REG2		0X0588
#define RK1108_GRF_OS_REG3		0X058C
#define RK1108_GRF_DDR_STATUS		0X0604
#define RK1108_GRF_SIG_DETECT_CON	0X0680
#define RK1108_GRF_SIG_DETECT_STATUS	0X0690
#define RK1108_GRF_SIG_DETECT_CLR	0X06A0
#define RK1108_GRF_HOST0_CON0		0X0700
#define RK1108_GRF_HOST0_CON1		0X0704
#define RK1108_GRF_DMA_CON0		0X0710
#define RK1108_GRF_DMA_CON1		0X0714
#define RK1108_GRF_UOC_STATUS		0X0F84
#define RK1108_GRF_HOST_STATUS		0X0F88
#define RK1108_GRF_GMAC_CON0		0X0F8C
#define RK1108_GRF_CHIP_ID		0X0F90

#endif
