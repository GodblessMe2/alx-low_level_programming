#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from  0 to 14.
 */

void more_numbers(void)
{
int numbers, more_num;
for (numbers = 1; numbers <= 10; numbers++)
{
for (more_num = 0; more_num <= 14; more_num++)
{
if (more_num > 9)
_putchar((more_num / 10) + '0');
_putchar((more_num % 10) + '0');
}
_putchar('\n');
}
