#include "main.h"

/**
 * print_alhabet_x10 - prints 10 times the alphabet, in lowercase.
 */

void print_alphabet_x10(void)
{
char ch, letter;
for (letter = 0; letter <= 10; letter++)
{
for(ch = 'a'; ch <= 'z'; ch++)
{
_putchar(ch);
putchar('\n');
}
}
}
