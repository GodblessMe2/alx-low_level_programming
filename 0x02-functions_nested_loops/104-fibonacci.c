#include <stdio.h>

/**
 * main - finds and prints the first 98 Fibonacci numbers,
 *        starting with 1 and 2.
 *
 * Return: always 0.
 */

int main(void)
{
int count;
unsigned long fib1 = 0, fib2 = 1, sum;
unsigned long fib_half1, fib_half2, fib_half3, fib_half4;
unsigned long half1, half2;

for (count = 0; count < 92; count++)
{
sum = fib1 + fib2;
printf("%lu, ", sum);

fib1 = fib2;
fib2 = sum;
}

fib_half1 = fib1 / 10000000000;
fib_half3 = fib2 / 10000000000;
fib_half2 = fib1 % 10000000000;
fib_half4 = fib2 % 10000000000;

for (count = 93; count < 99; count++)
{
half1 = fib_half1 + fib_half3;
half2 = fib_half2 + fib_half4;
if (fib_half2 + fib_half4 > 9999999999)
{
half1 += 1;
half2 %= 10000000000;
}

printf("%lu%lu", half1, half2);

if (count != 98)
{
printf(", ");
fib_half1 = fib_half3;
fib_half2 = fib_half4;
fib_half3 = half1;
fib_half4 = half2;
}
}
printf("\n");
return (0);
}
