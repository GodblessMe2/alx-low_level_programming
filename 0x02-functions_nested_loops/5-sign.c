#include "main.h"

/**
 * print_sign - prints the sign of a number.
 * @c: the sign to be checked.
 *
 * Return: 1 if greater than zero or 0 is zero then -1 less than zero
 */

int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}

}
