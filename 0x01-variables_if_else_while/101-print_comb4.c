#include <stdio.h>

/**
 * main - Prints all possible different combinations of three digits.
 *
 * Return: always 0
 */
int main(void)
{
int number1, number2, number3;
for (number1 = 0; number1 < 10; number1++)
{
for (number2 = 1; number2 < 10; number2++)
{
for (number3 = 2; number3 < 10; number3++)
{
putchar((number1 % 10) + '0');
putchar((number2 % 10) + '0');
putchar((number3 % 10) + '0');

if (number1 == 9 && number2 == 9 && number3 == 9)
continue;

putchar(',');
putchar(' ');
}
}
}
putchar('\n');

return (0);

}

