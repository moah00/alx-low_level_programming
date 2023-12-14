#include "main.h"

#define CLEAR_BIT(NUM,POS)    (NUM &= ~(1 << POS))

/**
 * @brief   clears the value of the desired bit 
 * @param   n: a pointer to the number 
 * @param   index: the index of the number used
 * @return  the number after clearing the bit
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
    return (CLEAR_BIT(*n,index));
}