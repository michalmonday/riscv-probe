// See LICENSE for license details.

#include "femto.h"

auxval_t __auxv[] = {
    { UART0_CLOCK_FREQ,         1843200    },
    { UART0_BAUD_RATE,          115200     },
    { NS16550A_UART0_CTRL_ADDR, 0xC0000000 },
    { 0, 0 }
};

void arch_setup()
{
    register_console(&console_ns16550a);
}
