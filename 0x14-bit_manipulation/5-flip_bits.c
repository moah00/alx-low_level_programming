#include "main.h"

/**
 * @brief   clears the value of the desired bit 
 * @param   n: the first number to convert
 * @param   m: the number to be converted to
 * @return  the number of bits to be flipped to convert the first number to the second number
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
    unsigned int count = 0;
    unsigned int flips = n ^ m;
    while (flips)
    {
        count += (flips & 1);
        flips >>= 1;
    }
    return count; 
}