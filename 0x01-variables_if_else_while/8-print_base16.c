#include <stdio.h>

/**
 * main - Prints all the numbers of base 16 in lowercase.
 *
 * Return: always 0.
 */
int main(void)
{
int base;
char letter;
for (base = 0; base < 10; base++)
putchar(base + '0');

for (letter = 'a'; letter <= 'f'; letter++)
putchar(letter);

putchar('\n');

return (0);

}
