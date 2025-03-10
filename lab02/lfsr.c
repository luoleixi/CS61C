#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include "lfsr.h"

void lfsr_calculate(uint16_t *reg) {
    /* YOUR CODE HERE */
    uint16_t regs =	*reg; 
	uint16_t msb = ((regs&0x1)^((regs>>2)&0x1)^((regs>>3)&0x1)^((regs>>5)&0x1))<<15;
	(*reg) >>= 1;
	(*reg) |= msb;
}

