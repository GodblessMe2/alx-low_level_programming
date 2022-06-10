#include "main.h"
#include <stdio.h>

/**
 * main - Entry piont
 * Return: Always 0
 */

void print_square(int size)
{
for (size = 1; size < 100; size++)
{
if ((size % 3) == 0 && (size % 5) == 0)
printf("FizzBuzz ");
else if ((size % 3) == 0)
printf("Fizz ");
else if ((size % 5) == 0)
printf("Buzz ");
else
printf("%d ", size);
if (size == 100)
continue;
printf(" ");
}
printf("\n");

return (0);

}
