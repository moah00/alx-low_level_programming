#include "main.h"

/**
 * @brief   Coverts the string of binary number into the decimal value
 * @param   b: the string of binary number to be converted
 * @return  res: the decimal value equal to the binary string
 */
unsigned int binary_to_uint(const char *b)
{
    unsigned int len = 0;
    int counter = 0;
    unsigned int base = 1;
    unsigned int res = 0;
    for (; b[len] != '\0'; len++)
        ;
    for (counter = len - 1; counter >= 0; counter--, base *= 2)
    {
        if (!((b[counter] == '0') || (b[counter] == '1')))
        {
            res = 0;
            break;
        }
        if ((b[counter] - '0') & 1)
        {
            res += ((b[counter] - '0') * base);
        }
    }

    return res;
}