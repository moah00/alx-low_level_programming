#include "main.h"

int get_endianness(void)
{
    int endian = 0x1;
    unsigned char *test = (unsigned char *)(&endian);
    if (*test)
        endian = 1;
    else
        endian = 0;
    return endian;
}