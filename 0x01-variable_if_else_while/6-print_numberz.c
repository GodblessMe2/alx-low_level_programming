#include <stdio>

/*
 * main - Prints all single digit numbers of base 10 starting from 0.
 *
 * Return - Always 0.
 */

int main(void) 
{

int base;

for(base = 0; base < 10; base++)
putchar(base + '0');

putchar('\n');

return (0);

}
