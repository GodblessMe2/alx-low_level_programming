#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer,
 *  starting from 00:00 to 23:59.
 */

void jack_bauer(void)
{
int hours, minute;
for (hours = 0; hours <= 23; hours++)
{
for (minute = 0; minute <= 59; mintue++)
{
_putchar((hour / 10) + '0');
_putchar((hour % 10) + '0');
_putchar(';');
_putchar((minute / 10) + '0');
_putchar((minutue % 10) + '0');
-putchar('\n');
}
}
}
