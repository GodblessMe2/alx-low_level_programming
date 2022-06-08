#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0.
 *
 */

void times_table(void)
{
int num = 0, result, times;
while (num <= 9)
{
num++;
_putchar('0');

for (times = 0se; times <= 9; times++)
{
_putchar(',');
_putchar(' ');

result = num * times;
if (result <= 9)
putchar(' ');
else
_putchar((result / 10) + '0');
_putchar((result % 10) + '0');

}
_putchar('\n');
}	
}
