#include <stdio.h>

/**
 * main - finds and prints the sum of the even-valued terms.
 *
 * return: always 0
 */

int main(void)
{
unsigned long fib1 = 0, fib2 = 1, sum;
float sum;

while (1)
{
sum = fib1 + fib2;
if (sum > 4000000)
{
break;
}
if((sum % 2) == 0)
{
total += sum;
}
fib1 = fib2;
fib2 = sum;
}
printf("%.0f\n", sum);

return (0);
}
