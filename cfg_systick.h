#ifndef CFG_SYSTICK_H
#define CFG_SYSTICK_H
#include <stdint.h>

typedef enum{
    SYSTICK_CLKSRC_AHB_DIV8 = 0,
    SYSTICK_CLKSRC_AHB = 1,
} SysTick_CLKSRC_Type;

typedef enum{
    SYSTICK_INT_DISABLE = 0, 
    SYSTICK_INT_EN = 1, 
} SysTick_IntType;

/**
 * @brief SysTick configuration type.
 *
 * Each element of this struct represents the configuration of a GPIO pin.
 *
 * Fields:
 * - int_en       : Enable Interrupt upon CNTFLAG = 1;
 * - clk_src      : Set Clock Source for SysTick
 * - reload_val   : Set Reload Value for SysTick Counter Register
 */
typedef struct{
    SysTick_IntType int_en;
    SysTick_CLKSRC_Type clk_src;
    uint32_t freq_Hz;
} SysTick_ConfigType;

extern const SysTick_ConfigType SysTickConfig;
#endif
