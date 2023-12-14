#include "main.h"

#define SET_BIT(NUM,POS)    (NUM |= (1 << POS))

/**
 * @brief   sets the value of the desired bit 
 * @param   n: a pointer to the number 
 * @param   index: the index of the number used
 * @return  the number after setting the bit
 */
int set_bit(unsigned long int *n, unsigned int index)
{
    return (SET_BIT(*n,index));
}