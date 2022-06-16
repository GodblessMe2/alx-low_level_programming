#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
int size;
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
}
printf("Buzz\n");

return (0);

}
