#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * main - Entry point
 * main c
 * print a string
 *
 * Return : Always 1 (Success)
 */
void main(void)
{
char *str;
int i;
str = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
for (i = 0; i < 58; i++)
{
putchar(str[i]);
}
putchar('\n');
return (1);
}
