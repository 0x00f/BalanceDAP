#ifndef RT_CONFIG_H__
#define RT_CONFIG_H__

/* Automatically generated file; DO NOT EDIT. */
/* RT-Thread Configuration */

/* RT-Thread Kernel */

#define RT_NAME_MAX 8
#define RT_ALIGN_SIZE 4
#define RT_THREAD_PRIORITY_8
#define RT_THREAD_PRIORITY_MAX 8
#define RT_TICK_PER_SECOND 1000
#define RT_USING_OVERFLOW_CHECK
#define RT_USING_HOOK
#define RT_USING_IDLE_HOOK
#define RT_IDLE_HOOK_LIST_SIZE 4
#define IDLE_THREAD_STACK_SIZE 256

/* Inter-Thread communication */

#define RT_USING_SEMAPHORE
#define RT_USING_MUTEX
#define RT_USING_EVENT

/* Memory Management */

#define RT_USING_MEMHEAP
#define RT_USING_SMALL_MEM
#define RT_USING_HEAP

/* Kernel Device Object */

#define RT_USING_DEVICE
#define RT_USING_CONSOLE
#define RT_CONSOLEBUF_SIZE 128
#define RT_CONSOLE_DEVICE_NAME "uart1"
#define RT_VER_NUM 0x40002
#define ARCH_ARM
#define RT_USING_CPU_FFS
#define ARCH_ARM_CORTEX_M
#define ARCH_ARM_CORTEX_M3

/* RT-Thread Components */

#define RT_USING_COMPONENTS_INIT
#define RT_USING_USER_MAIN
#define RT_MAIN_THREAD_STACK_SIZE 1024
#define RT_MAIN_THREAD_PRIORITY 5

/* C++ features */


/* Command shell */

#define RT_USING_FINSH
#define FINSH_THREAD_NAME "tshell"
#define FINSH_USING_HISTORY
#define FINSH_HISTORY_LINES 5
#define FINSH_USING_SYMTAB
#define FINSH_USING_DESCRIPTION
#define FINSH_THREAD_PRIORITY 5
#define FINSH_THREAD_STACK_SIZE 2048
#define FINSH_CMD_SIZE 80
#define FINSH_USING_MSH
#define FINSH_USING_MSH_DEFAULT
#define FINSH_USING_MSH_ONLY
#define FINSH_ARG_MAX 10

/* Device virtual file system */

#define RT_USING_DFS
#define DFS_USING_WORKDIR
#define DFS_FILESYSTEMS_MAX 1
#define DFS_FILESYSTEM_TYPES_MAX 1
#define DFS_FD_MAX 16

/* Device Drivers */

#define RT_USING_DEVICE_IPC
#define RT_PIPE_BUFSZ 128
#define RT_USING_SERIAL
#define RT_SERIAL_RB_BUFSZ 64
#define RT_USING_MTD_NOR
#define RT_USING_SPI
#define RT_USING_SFUD
#define RT_SFUD_USING_SFDP

/* Using USB */


/* POSIX layer and C standard library */


/* Network */

/* Socket abstraction layer */


/* Network interface device */


/* light weight TCP/IP stack */


/* AT commands */


/* VBUS(Virtual Software BUS) */


/* Utilities */


/* RT-Thread online packages */

/* IoT - internet of things */


/* Wi-Fi */

/* Marvell WiFi */


/* Wiced WiFi */


/* IoT Cloud */


/* security packages */


/* language packages */


/* multimedia packages */


/* tools packages */


/* system packages */

#define PKG_USING_FAL
#define FAL_DEBUG_CONFIG
#define FAL_DEBUG 1
#define FAL_PART_HAS_TABLE_CFG
#define FAL_USING_SFUD_PORT
#define FAL_USING_NOR_FLASH_DEV_NAME "W25Q128"
#define PKG_USING_FAL_V00400
#define PKG_FAL_VER_NUM 0x00400
#define PKG_USING_CMSIS
#define PKG_USING_CMSIS_V500
#define PKG_CMSIS_RTOS2
#define PKG_USING_LITTLEFS
#define PKG_USING_LITTLEFS_V205
#define LFS_READ_SIZE 64
#define LFS_PROG_SIZE 64
#define LFS_BLOCK_SIZE 4096
#define LFS_CACHE_SIZE 64
#define LFS_BLOCK_CYCLES 5
#define LFS_LOOKAHEAD_MAX 12

/* peripheral libraries and drivers */


/* miscellaneous packages */


/* samples: kernel and components samples */


/* Hardware Drivers Config */

#define SOC_FAMILY_STM32
#define SOC_SERIES_STM32F1
#define SOC_STM32F103CB

/* Onboard Peripheral Drivers */

#define BSP_USING_USB_TO_USART
#define BSP_USING_SPI_FLASH

/* On-chip Peripheral Drivers */

#define BSP_USING_UART
#define BSP_USING_UART1
#define BSP_USING_SPI
#define BSP_USING_SPI1

/* Board extended module Drivers */


#endif
