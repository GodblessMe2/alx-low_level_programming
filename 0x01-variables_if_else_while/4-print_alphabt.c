#include <stdio.h>
/**
 * main - Prints the alphabet in lowercase.
 *
 * Return - Always 0.
 */
int main(void)
{
char qe = 'a';

while (qe <= 'z')
{
if (qe == 'e' || qe == 'q')
{
qe++;
continue;
}

putchar(qe);
qe++;

}

putchar('\n');

return (0);

}
