#include "main.h"

/**
 * get_endianness - Checks the endianness.
 *
 * Return: If big-endian - 0.
 *         If little-endian - 1.
 */
int get_endianness(void)
{
int x;
char *y;
x = 1;
y = (char *)&x;
return (*y);
}
