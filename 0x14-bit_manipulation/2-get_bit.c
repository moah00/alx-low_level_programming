#include "main.h"

#define GET_BIT(NUM,POS)    ((NUM >> POS) & 1)
/**
 * @brief   gets the value of the desired bit 
 * @param   n: the number 
 * @param   index: the index of the number used
 * @return  the value of the desired bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
    return (GET_BIT(n,index));
}