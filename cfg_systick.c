#include "cfg_systick.h"

const SysTick_ConfigType SysTickConfig = {
    .int_en = SYSTICK_INT_DISABLE,
    .clk_src = SYSTICK_CLKSRC_AHB,
    .freq_Hz = 1000,
};
