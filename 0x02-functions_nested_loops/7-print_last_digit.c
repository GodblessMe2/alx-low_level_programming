#include "main.h"

/**
 * print_last_digit -  prints the last digit of a number.
 * @n: the last didit to be printed.
 *
 * Return: the last value of the digit.
 */

int print_last_digit(int n)
{

int lastdigit;
lastdigit = n % 10;
if (lastdigit < 0)
lastdigit *= -1;

_putchar(lastdigit + '0');

return (lastdigit);
}
