#include "main.h"

/**
 * @brief   Prints out the binary representation of the number
 * @param   n: decimal number to be binary displayed
 * @return  
 */

void print_binary(unsigned long int n)
{
    unsigned int len = 0;
    unsigned long int temp = n;

    for (; temp != 0; temp /= 2)
    {
        len++;
    }

    if (n)
    {
        print_binary(n >> 1);
        _putchar((n & 1) +'0');
    }
    else   _putchar('0');
    
}