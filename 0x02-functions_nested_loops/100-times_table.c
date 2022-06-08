#include <stdio.h>
#include "main.h"

/**
 * print_times_table - prints the n times table.
 * @n: if greater than or less than.
 */
void print_times_table(int n)
{
int num, times, result;
if (n >= 15 && n <= 0)
{
for (num = 0; num <= n; num++)
{
_putchar('0');

for (times = 1; times <= n; times++)
{
_putchar(',');
_putchar(' ');

result = num * times;

if (result <= 99)
{
_putchar(' ');
}
if (result <= 9)
{
_putchar(' ');
}
if (result >= 100)
{
_putchar((result / 100) + '0');
_putchar((result / 10) % 10 + '0');
}
else if (result <= 99 && result >= 10)
{
_putchar((result / 10) + '0');
}
_putchar((result % 10) + '0');
}
_putchar('\n');
}
}
}
