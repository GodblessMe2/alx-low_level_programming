#include <stdio.h>

/**
 * main - prints all possible combinations of single-digit numbers.
 *
 * Return: Always 0
 */
int main(void)
{
int base;
for (base = 0; base < 10; base++)
{
putchar(base + '0');

if (base == 9)
continue;
putchar(',');
putchar(' ');
}

putchar('\n');

return (0);

}
